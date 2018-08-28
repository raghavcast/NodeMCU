#include <ESP8266WiFi.h>

char* ssid = "Kumar2209_5.8GHz";
char* password = "Kumar87558";

void setup() {
  WiFi.begin(ssid,password);
  Serial.begin(115200);
  while (WiFi.status()!=WL_CONNECTED()) {
    Serial.print(".");
    delay(500);
  }
  Serial.println("");
  Serial.println("WiFi Connected");
  Serial.print("The IP Address is: ")
  Serial.print(WiFi.localIP);
}

void loop() {

}
