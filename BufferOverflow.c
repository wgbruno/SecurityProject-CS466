#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
int main(int argc, char *argv[])
{
 
       // Reserve 5 byte of buffer
       char buffer[5];  
 
       // Use strcpy() without bounds checking
       strcpy(buffer, argv[1]);
       printf("buffer content = %s\n", buffer);
 
       // Buffer overflow executed correctly
       printf("strcpy() executed\n");
 
       return 0;
}
