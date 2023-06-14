#include <stdint.h>

#define SCREEN_WIDTH        32
#define SCREEN_HEIGHT       8

#define MAGIC_AUTORUN_NUMBER    0xFC

void host_init();
void host_delay(long ms);
void host_sleep();
void host_digitalWrite(int pin, int state);
int host_digitalRead(int pin);
int host_analogRead(int pin);
void host_pinMode(int pin, int mode);
void host_cls();
void host_showBuffer();
void host_moveCursor(int x, int y);
void host_outputString(char *str);
void host_outputProgMemString(const char *str);
void host_outputChar(char c);
void host_outputFloat(float f);
char *host_floatToStr(float f, char *buf);
int host_outputInt(long val);
void host_newLine();
char *host_readLine();
char host_getKey();
bool host_ESCPressed();
void host_outputFreeMem(unsigned int val);
void host_saveProgram(bool autoexec);
void host_loadProgram();
void clearMem(short int memNum);
void host_saveMem(short int memNum);
void host_loadMem(short int memNum);
