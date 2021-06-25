#define BAUDRATE 9600
#define BUTTON1_PIN 31

int buttonstate;
int ledLigthingCounter = 1;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(BUTTON1_PIN, INPUT_PULLUP);
  Serial.begin(BAUDRATE);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonstate = digitalRead(BUTTON1_PIN);

  if(buttonstate == LOW){
    digitalWrite(LED_BUILTIN, HIGH);
    ledCounterPrint();
  }else{
    digitalWrite(LED_BUILTIN, LOW);
  }
  delay(100);
}

void ledCounterPrint(){
  Serial.print("lighting Led for the ");
  Serial.print(ledLigthingCounter++);
  Serial.println("th time");
}