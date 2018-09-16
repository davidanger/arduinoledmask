// Neutrogena LED Mask Arduino MOD
// by davidanger@live.cn 2018-09-16

#define PIN_LEDMASK 3

void setup() {
  // put your setup code here, to run once:

  //Initail GPIO
  pinMode(PIN_LEDMASK, OUTPUT);
  //Keep the Mask OFF
  digitalWrite(PIN_LEDMASK, LOW);

  //Delay 30s Waiting for Get Mask on your face
  delay(10 * 1000);

  //Turn the Mask ON
  digitalWrite(PIN_LEDMASK, HIGH);
  //Waiting 10min
  for (int i=0; i < 10 * 60; i++)
  {
    delay(1000);
  }
  //Trun Off Mask
  digitalWrite(PIN_LEDMASK, LOW);
  
}

void loop() {
  // put your main code here, to run repeatedly:

}
