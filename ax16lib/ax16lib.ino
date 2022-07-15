#include "ax16lib.h" //Подключили библиотеку
#define ID1   1 //ID нужного серва

void setup() {
  Serial1.begin(115200); //Скорость работы UART серва
  Serial.begin(115200); //монитор порта
  delay(1000);

  //Пример включения режима мотора на серво
  ServoMotorModeOnn(Serial1, ID1, -500); //включили режим мотора и задали скорость в границах от -1000 до 1000
  delay(1000);
  ServoMotorModeOff(Serial1, ID1); //выключили режим мотора, если не выключить не будет работать режим сервомотора 
  delay(1000);
}

void loop() {
  //Пример работи в режиме сервопривода
  //Поворот на заданный угол
  int angle = random(360); //генерация угла поворота
  LobotSerialServoMove(Serial1, ID1, angle, 500); //Поворот на угол со скоростью 500 (от -1000 до 1000)
  Serial.println(angle);
  delay(5000);

  //Пример считивания информации
  Serial.print("Voltage = ");
  Serial.println(LobotSerialServoReadVin(Serial1, ID1));
  Serial.print("Position = ");
  Serial.println(LobotSerialServoReadPosition(Serial1, ID1));
  Serial.print("Temperature = ");
  Serial.println(SerialServoReadTemp(Serial1, ID1));
  delay(5000);
}
