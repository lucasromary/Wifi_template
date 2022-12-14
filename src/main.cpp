#include <WiFi.h> 

#define WIFI_SSID "IoT_CP53"
#define WIFI_PASSWORD "iot"

void initWiFi() { 
   WiFi.mode(WIFI_STA); 
   WiFi.begin(WIFI_SSID, WIFI_PASSWORD); 
   Serial.print("Connecting to WiFi .."); 
   while (WiFi.status() != WL_CONNECTED) { 
      Serial.print("."); 
      delay(1000); 
   } 
   Serial.println(WiFi.localIP()); 
} 

void setup() { 
   Serial.begin(115200);   
   initWiFi(); 
   Serial.print("RRSI: "); 
   Serial.println(WiFi.RSSI()); 
} 

void loop() { 
// put your main code here, to run repeatedly: 

} 
