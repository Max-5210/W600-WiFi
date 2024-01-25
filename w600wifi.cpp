#include "W600WiFi.h"

bool W600WiFi::begin(const char* ssid, const int serialbaud) {
  wifi.begin(WifiSerial,serialbaud);
  bool wifi.wifiStaSetTargetApSsid(F(ssid));
  wifi.sendAT(F("AT+WJOIN"));
  return ssidSet;
}

bool W600WiFi::begin(const char* ssid, const char* password, const int serialbaud) {
  wifi.begin(WifiSerial,serialbaud);
  bool wifi.wifiStaSetTargetApSsid(F(ssid));
  bool wifi.wifiStaSetTargetApPswd(F(password));
  wifi.sendAT(F("AT+WJOIN"));
  return ssidSet && pswdSet;

bool W600WiFi::setMode(char mode) {
  bool wifisetMode(mode);
}

bool W600WiFi::setEncryption(char encryption) {
  switch(encryption){
    case OPEN;
    encrypt = 0;
    case WEP64;
    encrypt = 1;
    case WEP128;
    encrypt = 2;
    case WPA-PSK(TKIP);
    encrypt = 3;
    case WPA-PSK(CCMP/AES);
    encrypt = 4;
    case WPA2-PSK(TKIP);
    encrypt = 5;
    case WPA2-PSK(CCMP/AES);
    encrypt = 6;
    
  bool wifiApSetEncry(int encrypt);
}




  
