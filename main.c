#include <WiFiNINA.h>

// Wi-Fi credentials
const char *ssid = "your_SSID";
const char *password = "your_PASSWORD";

// IFTTT Webhooks details
const char *host = "maker.ifttt.com";
const char *event_name = "doorbell_pressed"; // Your IFTTT event name
const char *key = "your_webhooks_key";       // Your Webhooks key

// Button pin
#define BUTTON_PIN 2

WiFiClient client;

// Function prototypes
void connectToWiFi();
void sendNotification();

void setup() {
    // Configure button pin as input with a pull-down resistor
    pinMode(BUTTON_PIN, INPUT_PULLDOWN);

    // Initialize serial communication
    Serial.begin(115200);
    while (!Serial) {
        ; // Wait for serial port to connect
    }

    // Connect to Wi-Fi
    connectToWiFi();
}

void loop() {
    // Check if the button is pressed
    if (digitalRead(BUTTON_PIN) == HIGH) {
        // Send notification via IFTTT
        sendNotification();

        // Debounce: Wait for 1 second before detecting the next press
        delay(1000);
    }
}

void connectToWiFi() {
    Serial.print("Connecting to Wi-Fi");

    // Begin Wi-Fi connection
    WiFi.begin(ssid, password);

    // Wait until connected
    while (WiFi.status() != WL_CONNECTED) {
        Serial.print(".");
        delay(1000);
    }
    Serial.println("\nConnected to Wi-Fi!");
    Serial.print("IP Address: ");
    Serial.println(WiFi.localIP());
}

void sendNotification() {
    Serial.println("Sending notification...");

    // Connect to IFTTT server
    if (client.connect(host, 80)) {
        // Construct the HTTP POST request
        client.print("POST /trigger/");
        client.print(event_name);
        client.print("/with/key/");
        client.print(key);
        client.println(" HTTP/1.1");

        client.print("Host: ");
        client.println(host);
        client.println("Connection: close");
        client.println();

        Serial.println("Notification sent!");
    } else {
        Serial.println("Failed to connect to IFTTT");
    }

    // Close the connection
    client.stop();
}
