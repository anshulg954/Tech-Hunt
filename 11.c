#include <stdio.h>
#include <string.h>

struct {
   unsigned char apratim2k19:4;
   unsigned int apratim2k18[4];
} tech1;

union {
   unsigned long apratim2k17[3];
   signed short apratim2k16:3;
} tech2;

int main( ) {
   printf( "Memory size occupied by 1 : %d\n", sizeof(tech1)+sizeof(tech2));
   printf( "Memory size occupied by 2 : %d\n", sizeof(tech2));
   return 0;
}
