//Figure-Eight animation for Neopixel Ring Bangle Bracelet
//By Dano Wall and Becky Stern for Adafruit Industries
#include <Adafruit_NeoPixel.h>

#define PIN       2 // Marked D1 on GEMMA
#define NUM_LEDS 15

// Parameter 1 = number of pixels in strip
// Parameter 2 = pin number (most are valid)
// Parameter 3 = pixel type:
//   NEO_GRB  Pixels are wired for GRB bitstream (most NeoPixel products)
//   NEO_RGB  Pixels are wired for RGB bitstream (v1 FLORA pixels, not v2)
Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUM_LEDS, PIN, NEO_GRB);

uint32_t green = strip.Color(0, 100, 10); // Change RGB color value here
uint32_t red = strip.Color(100, 0, 0); // Change RGB color value here
uint32_t blue = strip.Color(0, 0, 100); // Change RGB color value here
uint32_t A = strip.Color(0, 30, 8); // Change RGB color value here
uint32_t B = strip.Color(25, 5, 68); // Change RGB color value here
uint32_t C = strip.Color(0, 75, 90); // Change RGB color value here
uint32_t D = strip.Color(100, 120, 0); // Change RGB color value here


// Array of pixels in order of animation - 70 in total:
int sine[] = {
   0,1,2,3,4,5,6,7,8,9,10,11,12,13,14};

int greenPart[] = {0,1,2,3,4,5,6,7,8,9};
int redPart[] = {11,12,13,14};



void setup() {
  strip.begin();
  strip.show();            // Initialize all pixels to 'off'
  strip.setBrightness(40); // 40/255 brightness (about 15%)
}

void loop() {
  parrotForgot();
  //parrotBlink();
}

void parrotListen()
{
 
}


void parrotBlink()
{
   for(int gn = 0; gn <= 9; gn++)
   {
      strip.setPixelColor(greenPart[gn], 0); // Draw 'head' pixel
   }

   strip.setPixelColor(redPart[0], red); // Draw 'head' pixel
   strip.setPixelColor(redPart[1], 0); // Draw 'head' pixel  
   strip.setPixelColor(redPart[2], 0); // Draw 'head' pixel
   strip.setPixelColor(redPart[3], red); // Draw 'head' pixel

   strip.show();
   delay(200);
   

   for(int gn = 0; gn <= 9; gn++)
   {
      strip.setPixelColor(greenPart[gn], green); // Draw 'head' pixel
   }
   for(int rd = 0; rd <= 3; rd++)
   {
      strip.setPixelColor(redPart[rd], red); // Draw 'head' pixel
   }

   strip.show();

   delay(200);

   for(int gn = 0; gn <= 9; gn++)
   {
      strip.setPixelColor(greenPart[gn], 0); // Draw 'head' pixel
   }
   for(int rd = 0; rd <= 3; rd++)
   {
      strip.setPixelColor(redPart[rd], 0); // Draw 'head' pixel
   }

   strip.show();

   delay(200);

   
   for(int gn = 0; gn <= 9; gn++)
   {
      strip.setPixelColor(greenPart[gn], green); // Draw 'head' pixel
   }
strip.setPixelColor(redPart[0], red); // Draw 'head' pixel
   strip.setPixelColor(redPart[1], 0); // Draw 'head' pixel  
   strip.setPixelColor(redPart[2], 0); // Draw 'head' pixel
   strip.setPixelColor(redPart[3], red); // Draw 'head' pixel
   strip.show();

   delay(200);
}

 

 
void parrotForgot()
{
   strip.setPixelColor(0, D); // Draw 'head' pixel
   strip.setPixelColor(1, D); // Draw 'head' pixel
   strip.setPixelColor(2, D); // Draw 'head' pixel
   strip.setPixelColor(3, A); // Draw 'head' pixel
   strip.setPixelColor(4, A); // Draw 'head' pixel
   strip.setPixelColor(5, A); // Draw 'head' pixel
   strip.setPixelColor(6, A); // Draw 'head' pixel
   strip.setPixelColor(7, B); // Draw 'head' pixel
   strip.setPixelColor(8, B); // Draw 'head' pixel
   strip.setPixelColor(9, B); // Draw 'head' pixel
  // strip.setPixelColor(10, B); // Draw 'head' pixel
   strip.setPixelColor(11, C); // Draw 'head' pixel
   strip.setPixelColor(12, C); // Draw 'head' pixel
   strip.setPixelColor(13, C); // Draw 'head' pixel
   strip.setPixelColor(14, C); // Draw 'head' pixel
   
   strip.show();
   delay(200);

    strip.setPixelColor(0, 0); // Draw 'head' pixel
   strip.setPixelColor(1, 0); // Draw 'head' pixel
   strip.setPixelColor(2, 0); // Draw 'head' pixel
   strip.setPixelColor(3, 0); // Draw 'head' pixel
   strip.setPixelColor(4, 0); // Draw 'head' pixel
   strip.setPixelColor(5, 0); // Draw 'head' pixel
   strip.setPixelColor(6, 0); // Draw 'head' pixel
   strip.setPixelColor(7, 0); // Draw 'head' pixel
   strip.setPixelColor(8, 0); // Draw 'head' pixel
   strip.setPixelColor(9, 0); // Draw 'head' pixel
   strip.setPixelColor(10,0); // Draw 'head' pixel
   strip.setPixelColor(11,0); // Draw 'head' pixel
   strip.setPixelColor(12,0); // Draw 'head' pixel
   strip.setPixelColor(13, 0); // Draw 'head' pixel
   strip.setPixelColor(14, 0); // Draw 'head' pixel
   

   strip.show();

   delay(200);
}