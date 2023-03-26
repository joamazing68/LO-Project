#include <stdio.h>
#include "./headers/parser.h" 
  
int main(void)
{
    const char * test = parse("Test");
    printf("%s\n", test);

    return 0;
}
