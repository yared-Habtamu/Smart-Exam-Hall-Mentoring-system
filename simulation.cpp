#include <WiFi.h>

const int LED_PIN = 2;
const int BUZZER_PIN = 15;

int soundThreshold = 600;

// Replace with your WiFi credentials
const char* ssid = "YOUR_WIFI_NAME";
const char* password = "YOUR_WIFI_PASSWORD";

void setup() {
  Serial.begin(115200);

  pinMode(LED_PIN, OUTPUT);
  pinMode(BUZZER_PIN, OUTPUT);

  digitalWrite(LED_PIN, LOW);
  digitalWrite(BUZZER_PIN, LOW);

  // Initialize random seed
  randomSeed(analogRead(0));

  Serial.println("Smart Exam Hall Monitoring System Started...");
  Serial.println("Simulation Mode: Random Sensor Values");

  // WiFi Connection Start
  Serial.println("\nConnecting to WiFi...");
  WiFi.begin(ssid, password);

  int attempts = 0;

  while (WiFi.status() != WL_CONNECTED && attempts < 20) {
    delay(500);
    Serial.print(".");
    attempts++;
  }

  if (WiFi.status() == WL_CONNECTED) {
    Serial.println("\nWiFi Connected Successfully!");
    Serial.print("ESP32 IP Address: ");
    Serial.println(WiFi.localIP());
  } else {
    Serial.println("\nWiFi Connection Failed!");
    Serial.println("Continuing system in offline mode...");
  }
}

void loop() {

  // Random motion value: 0 = No Motion, 1 = Motion Detected
  int motion = random(0, 2);

  // Random sound value: 200 to 900
  int scaledSound = random(200, 900);

  Serial.print("Sound: ");
  Serial.print(scaledSound);
  Serial.print(" | Motion: ");
  Serial.print(motion);

  if (motion == 1 || scaledSound > soundThreshold) {

    digitalWrite(LED_PIN, HIGH);
    digitalWrite(BUZZER_PIN, HIGH);

    Serial.println("  -> ALERT!");
  } 
  else {

    digitalWrite(LED_PIN, LOW);
    digitalWrite(BUZZER_PIN, LOW);

    Serial.println("  -> Normal");
  }

  delay(1000);
}
