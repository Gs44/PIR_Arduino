int PIR = 12;
int LED = 13;

void setup() {
  // init
  pinMode(PIR, INPUT);
  pinMode(LED, OUTPUT);
}

void loop() {
  if(digitalRead(PIR)){
    digitalWrite(LED, HIGH);
  }else{
    digitalWrite(LED, LOW);
  }
}
