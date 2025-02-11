#include <FastLED.h>

#define LED_PIN     14   // DIN Signal of LED1, connected to ESP32 HSPI_CLK(14)
#define NUM_LEDS    2   //number of LEDs
#define BRIGHTNESS  255 // Brightness of LED 0 to 255
#define LED_TYPE    WS2812B
#define COLOR_ORDER GRB
CRGB leds[NUM_LEDS];

void setup() {
  
  //LED strip configuration
  
  FastLED.addLeds<LED_TYPE, LED_PIN, COLOR_ORDER>(leds, NUM_LEDS).setCorrection(TypicalLEDStrip);
  FastLED.setBrightness(BRIGHTNESS);
}

void loop() {

  leds[0] = CRGB::Red;  // Set the first LED to red
  
  leds[1] = CRGB::Blue; // Set the second LED to blue

  FastLED.show();  // Show the LEDs
  

  delay(1000); // Keep the colors on for a while
  
  // Change colors for demonstration
  
  leds[0] = CRGB::Green; // Set the first LED to green
  
  leds[1] = CRGB::Yellow; //Set the second LED to blue
  
  FastLED.show(); // Show the LEDs
  
  delay(1000); // Keep the colors on for a while
}
