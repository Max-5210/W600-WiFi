#ifndef W600WiFi
#define W600WiFi
  
#include <w600.h>
#if defined(HAVE_HWSERIAL1) 
  #define WifiSerial Serial1
#elif defined(ARDUINO_SEEED_ZERO) 
  //the different board of samd have different serialx
  #define WifiSerial Serial2   //serial number of seeeduino_zero (compatible with Wio Lite W600)
#elif defined(SEEED_XIAO_M0) 
    #define WifiSerial Serial1   
#else
  SoftwareSerial WifiSerial(2,3);
#endif

#define SERIAL Serial
#define debug  SERIAL

AtWifi wifi;

class W600WiFi {
  public:
    bool begin(const char* ssid, const int serialbaud);
    bool begin(const char* ssid, const char* password, cosnt int serialbaud);
    bool setMode(WifiMode mode);
    bool setEncryption(char encryption);
    int createSocket(NetProtocol pro,NetMode mode,const char* server,uint16_t remote_port,uint16_t local_port);

};

#endif
