#include <stdio.h>

unsigned char changebits(unsigned char reg)
{
    
reg = reg | (1 << 2);
 reg = reg & ~(1 << 5);
reg = reg ^ (1 << 0);
return reg;
}
int main()
{
    unsigned char reg = 00000001;
      printf("Original: %u\n", reg);
      reg =changebprintf("Modified: %u\n", reg);its(reg);
         return 0;


    

    

    

 
}
    


    

