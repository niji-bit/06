#include <stdio.h>
#include <stdlib.h>


int factorial(int k){
    int res=1;
    int i;
    for (i=1;i<k+1;i++){
        res*=i;
    }
    return res;
}

int get_integer(){
    int j;
    printf("enter an integer : ");
    scanf("%d", &j);
    return j;
}

int conbination(int n, int r){
    return (factorial(n)/factorial(n-r)/factorial(r));
}

int main(void){
    int n,r;
    n=get_integer();
    r=get_integer();
    printf("%d",conbination(n,r));
}
