#include <stdio.h>
#include <stdlib.h>

void Convert(int, char*);   

int main()
{
    int  binary;
    char string[33];    // assuming 32bit integers
    
    printf("Enter a number: ");
    scanf("%d", &binary);

    Convert(binary, string);   
    
    printf("%s  %d  %Xh \n", string, binary, binary);
	fflush(stdin);
	getchar();

    return 0;
}

void Convert(int bin, char *str)
{
    unsigned int mask;      // used to check each individual bit, 
                            //    unsigned to alleviate sign 
                            //    extension problems

    mask = 0x80000000;      // Set only the high-end bit
    while (mask)            // Loop until MASK is empty
    {
        if (bin & mask)     // test the masked bit
              *str = '1';   // if true, value is 1
          else 
              *str = '0';   // if false, value is 0
        str++;              // next character
        mask >>= 1;         // shift the mask 1 bit
    }
    *str = 0;               // add the trailing null 
}