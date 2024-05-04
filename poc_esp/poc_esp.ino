String words[] = {"apple", "banana", "orange", "grape", "kiwi", "melon", "peach"};

void setup() {
  // Initialise the serial port
  Serial.begin(9600);
  Serial.println(String("....start...."));
}

void loop() {
  
  Serial.println("check serial available : " + Serial.available());
  Serial.println("I received: " + Serial.readString());

  int randomIndex = random(0, sizeof(words) / sizeof(words[0]));
  Serial.println(words[randomIndex]);

  delay(2000);
}