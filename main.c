#include <stdio.h>
#include <stdlib.h>


int square(int a){
    return(a*a);
}
int main()
{
    int a=2;
    square(a);
    printf("a=%i\n",a);
}
