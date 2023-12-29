# git clone https://github.com/wiringPi/wiringPi.git<br/>
# sudo apt install wiringPi<br/>
-------
**===== GPIO 설정함수 =====**<br/>
int wiringPiSetup();                    // wPi mode<br/>
int wiringPiSetupGpio();                // BCM mode<br/>
void pinMode(int pin, int mode);        // pin: 핀번호, mode: INPUT/OUTPUT<br/>
--------
**===== 입출력함수 =====**<br/>
int digitalRead(int pin);               // pin: 핀번호, int: HIGH/LOW or 1/0<br/>
void digitalWrite(int pin, int value);  // value: HIGH/LOW or 1/0<br/>
--------
**===== Timming =====**<br/>
void delay(unsigned int Long);          // ms 단위<br/>
unsigned int micros();<br/>
unsigned int millis();<br/>
---------
**===== Interrupt =====**<br/>
int wiringPiISR(int pin, int mode, void(*function)(void));<br/>
-반환값은 실패시 음수
-mode: INT_EDGE_FALLING, INT_EDGE_RISING, INT_EDGE_BOTH) 누르는 순간, 눌렀다 뗄 때<br/>
int wiringPiI2CSetup(int deviceAdd);<br/>
-----------
**===== ACD SPI(mcp3008) =====**<br/>
1. sudo raspi-config => 3) interface Options => SPI Enable<br/>
mcp3004Setup(int pin, int channel);<br/>
-pin 가상핀, -channel 채널<br/>
-------------
**===== PWM =====**<br/>
int softPwmCreate(int pin, int init, int pwmRange);<br/>
-int 펄스폭, -pwmRange 주기<br/>
void softPwmWrite(int pin, int val);<br/>
-val: init / pwmRange(0 ~ pwmRange)<br/>
