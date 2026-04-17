#include <IRremote.hpp>

void setup() {

  Serial.begin(9600);

  IrReceiver.begin(12, ENABLE_LED_FEEDBACK);
}

void loop() {
  if(IrReceiver.decode())
  {
    IrReceiver.resume();

    switch (IrReceiver.decodedIRData.decodedRawData)
    {
      case 0xE619FF00:
          Serial.println("0");
          break;
      case 0xBA45FF00:
          Serial.println("1");
          break;
      case 0xB946FF00:
          Serial.println("2");
          break;
      case 0xB847FF00:
          Serial.println("3");
          break;
      case 0xBB44FF00:
          Serial.println("4");
          break;
      case 0xBF40FF00:
          Serial.println("5");
          break;
      case 0xBC43FF00:
          Serial.println("6");
          break;
      case 0xF807FF00:
          Serial.println("7");
          break;
      case 0xEA15FF00:
          Serial.println("8");
          break;
      case 0xF609FF00:
          Serial.println("9");
          break;
      case 0xE916FF00:
          Serial.println("*");
          break;
      case 0xF20DFF00:
          Serial.println("#");
          break;
      case 0xE718FF00:
          Serial.println("UP");
          break;
      case 0xAD52FF00:
          Serial.println("DOWN");
          break;
      case 0xF708FF00:
          Serial.println("LEFT");
          break;
      case 0xA55AFF00:
          Serial.println("RIGHT");
          break;
      case 0xE31CFF00:
          Serial.println("OK");
          break;

    }
  }

}
