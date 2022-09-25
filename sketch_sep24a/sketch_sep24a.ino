#include <WiFi.h>

#define SSID "Paradox"
#define PASS "12345678"

#define MOIST_INPUT 32
#define MILLIS 1000

void setup() {
  Serial.begin(9600);
  pinMode(MOIST_INPUT, INPUT);
  WiFi.disconnect();
  delay(2000);
  WiFi.begin(SSID, PASS);
  Serial.println("Trying to connect....");
  while (WiFi.status() != WL_CONNECTED) {
    delay(200);
    Serial.print(".");
  }
  Serial.println("Connected");
}

int moist;
String httpurl = "";

void loop() {
  // put your main code here, to run repeatedly:

  WiFiClient client;
  HTTPClient http;

  int moist_data = analogRead(MOIST_INPUT);
  // Serial.println(data);
  delay(MILLIS * 1);

  httpurl = "http://192.168.141.32:1880/";

  httpurl += "nodedata?";
  httpurl += "moist=";
  httpurl += (String)moist_data;

  if (http.begin(client, httpurl)) {
    int httpcode =
  }
}