int lightPin=A0;
int lightVal;
int dt = 500;
int green = 7;
int red = 4;

void setup() {
  // put your setup code here, to run once:
  pinMode(lightPin,INPUT);
  Serial.begin(9600);
  pinMode(red,OUTPUT);
  pinMode(green,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  lightVal=analogRead(lightPin);
  //delay(dt);
  if (lightVal<50){
    digitalWrite(red,HIGH);
    digitalWrite(green,LOW);
  }
  else {
    digitalWrite(red,LOW);
    digitalWrite(green,HIGH);
  }
}