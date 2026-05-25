
const int PIR_PIN = 13;       
const int SOUND_PIN = 34;      
const int LED_PIN = 2;        
const int BUZZER_PIN = 15;     

int soundThreshold = 600;

void setup() {
  Serial.begin(115200);

  pinMode(PIR_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);
  pinMode(BUZZER_PIN, OUTPUT);

  digitalWrite(LED_PIN, LOW);
  digitalWrite(BUZZER_PIN, LOW);

  Serial.println("Smart Exam Hall Monitoring System Started...");
}

void loop() {
  
  int motion = digitalRead(PIR_PIN);   
  int soundLevel = analogRead(SOUND_PIN); 

  int scaledSound = map(soundLevel, 0, 4095, 0, 1023);

  
  Serial.print("Sound: ");
  Serial.print(scaledSound);
  Serial.print("  Motion: ");
  Serial.print(motion);

  if (motion == HIGH || scaledSound > soundThreshold) {
  
    digitalWrite(LED_PIN, HIGH);
    digitalWrite(BUZZER_PIN, HIGH);

    Serial.println("  -> ALERT!");
  } else {
  
    digitalWrite(LED_PIN, LOW);
    digitalWrite(BUZZER_PIN, LOW);

    Serial.println("  -> Normal");
  }

  delay(500); }
