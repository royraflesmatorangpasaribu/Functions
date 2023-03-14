// nilai awal
int cahaya = 0;
int pinled = 7; // led terhubung pada kaki 7 arduino
int btnBlue = 5; // pushbutton terhubung pada kaki 5 arduino
#include <LiquidCrystal_I2C.h>
#include <DHT.h>
#define DHTPIN 10
#define DHTTYPE DHT22
DHT dht(DHTPIN, DHT22);


LiquidCrystal_I2C lcd(0x27,20,4);
int chk;


void setup() {
  // put your setup code here, to run once:
  
  pinMode(pinled, OUTPUT);
  pinMode(btnBlue, INPUT_PULLUP);
  digitalWrite(pinled, LOW);

  pinMode(A0, INPUT);
  pinMode(13, OUTPUT);
  Serial.begin(9600);

  dht.begin();
  lcd.init();
  lcd.backlight();
  lcd.setCursor(3,0);
  lcd.print("Temp Monitoring");
  lcd.setCursor(2,1);
  lcd.print("Suhu & Kelembaban");
  lcd.setCursor(8,2);
  lcd.print("oleh");
  lcd.setCursor(5,3);
  lcd.print("2117051058");
  delay(3000);
  lcd.clear();
}

void loop() {
  // put your main code here, to run repeatedly:
  cahaya = analogRead(A0);
  if(digitalRead(btnBlue) == LOW){
    digitalWrite(pinled, HIGH);
    delay(1000);
    digitalWrite(pinled, LOW);
  }
  else if (cahaya > 500){
    Serial.println(cahaya);
    digitalWrite(13, HIGH);
    Serial.println("Ada cahaya");
  }
  else{
    Serial.println(cahaya);
    digitalWrite(13, LOW);
    Serial.println("Tidak ada cahaya");
  }
  // delay(1000);



  float hum = dht.readHumidity();
  float temp = dht.readTemperature();
  lcd.init();
  lcd.backlight();
  lcd.setCursor(3,0);
  lcd.print("Temp Monitoring");
  lcd.setCursor(5,1);
  lcd.print("ILKOMP UNILA");
  //suhu
  lcd.setCursor(0,2);
  lcd.print("Suhu       :");
  lcd.setCursor(13,2);
  lcd.print(temp);
  lcd.setCursor(19,2);
  lcd.print("C");
  //kelembaban
  lcd.setCursor(0,3);
  lcd.print("Kelembaban :");
  lcd.setCursor(13,3);
  lcd.print(hum);
  lcd.setCursor(19,3);
  lcd.print("%");
  //delay(500);
}
