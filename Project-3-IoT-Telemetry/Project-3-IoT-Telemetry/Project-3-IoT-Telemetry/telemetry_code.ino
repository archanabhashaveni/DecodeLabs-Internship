#include <ESP8266WiFi.h>

const char* ssid = "Your_WiFi_Name";
const char* password = "Your_WiFi_Password";

void setup() {
Serial.begin(115200);

WiFi.begin(ssid, password);

while (WiFi.status() != WL_CONNECTED) {
delay(1000);
Serial.println("Connecting to WiFi...");
}

Serial.println("Connected to WiFi");
}

void loop() {

int distance = random(10, 150);

Serial.print("Distance: ");
Serial.println(distance);

// MQTT or HTTP POST logic would be added here

delay(5000);
}
