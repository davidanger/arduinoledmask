// Neutrogena LED Mask Arduino MOD
// by davidanger@live.cn 2018-09-16

#define PIN_LEDMASK 3 //Mask Output NMOS Gate
#define PIN_KEYP 4    //Key Plus connect 4 Mines connect GND
#define PIN_POWER A3  //Power Voltage ADC IN (VCC)-[100K]-(A3)-[50K]-(GND)
#define PIN_LCD1 15
#define PIN_LCD2 14
#define PIN_LCD3 16
#define PIN_LCD4 10
#define PIN_LCD5 9
#define PIN_LCD6 8
#define PIN_LCD7 7
#define PIN_LCD8 6

void setup()
{
  // put your setup code here, to run once:

  //Initail GPIO
  pinMode(PIN_LEDMASK, OUTPUT);
  pinMode(PIN_KEYP, INPUT_PULLUP);
  pinMode(PIN_POWER, INPUT);
  pinMode(PIN_LCD1, OUTPUT);
  pinMode(PIN_LCD2, OUTPUT);
  pinMode(PIN_LCD3, OUTPUT);
  pinMode(PIN_LCD4, OUTPUT);
  pinMode(PIN_LCD5, OUTPUT);
  pinMode(PIN_LCD6, OUTPUT);
  pinMode(PIN_LCD7, OUTPUT);

  //Keep the Mask OFF
  digitalWrite(PIN_LEDMASK, LOW);
  digitalWrite(PIN_LCD1, LOW);
  digitalWrite(PIN_LCD2, LOW);
  digitalWrite(PIN_LCD3, LOW);
  digitalWrite(PIN_LCD4, LOW);
  digitalWrite(PIN_LCD5, LOW);
  digitalWrite(PIN_LCD6, LOW);
  digitalWrite(PIN_LCD7, LOW);
  digitalWrite(PIN_LCD8, LOW);

  //Delay 30s Waiting for Get Mask on your face
  delay(10 * 1000);

  //Turn the Mask ON
  digitalWrite(PIN_LEDMASK, HIGH);
  //Waiting 10min
  for (int i = 0; i < 10 * 60; i++)
  {
    delay(1000);
  }
  //Trun Off Mask
  digitalWrite(PIN_LEDMASK, LOW);
}

void loop()
{
  // put your main code here, to run repeatedly:
}
