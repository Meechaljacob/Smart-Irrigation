#define BLYNK_TEMPLATE_ID "YourTemplateID"
#define BLYNK_TEMPLATE_NAME "Soil Moisture Monitor"
#define BLYNK_AUTH_TOKEN "YourAuthToken"

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = BLYNK_AUTH_TOKEN;
char ssid[] = "YourWiFiName";     
char pass[] = "YourWiFiPassword"; 

#define SENSOR_PIN A0
#define RELAY_PIN D1

int soilMoistureValue = 0;

void setup() {
  Serial.begin(9600);
  pinMode(RELAY_PIN, OUTPUT);
  digitalWrite(RELAY_PIN, LOW); // Relay OFF initially
  Blynk.begin(auth, ssid, pass);
}

void loop() {
  Blynk.run();

  soilMoistureValue = analogRead(SENSOR_PIN);
  int moisturePercent = map(soilMoistureValue, 1023, 0, 0, 100); // Adjust mapping if needed

  Serial.print("Soil Moisture: ");
  Serial.print(moisturePercent);
  Serial.println("%");

  Blynk.virtualWrite(V0, moisturePercent);  // Send value to Blynk gauge

  if (moisturePercent < 30) {  // Dry soil threshold
    digitalWrite(RELAY_PIN, HIGH);  // Turn ON relay (watering)
    Blynk.logEvent("low_moisture", "Soil is dry! Watering needed.");
  } else {
    digitalWrite(RELAY_PIN, LOW);   // Turn OFF relay
  }

  delay(2000);
}