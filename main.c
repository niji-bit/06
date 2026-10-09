#include <stdio.h>
#include <stdlib.h>

int sumTwo(int a, int b){
    printf("%d",a+b);
    return 0;   
}

int square(int n){
    printf("%d",n*n);
    return 0;   
}

int get_max(int x,int y){
    if(x>y){
        printf("%d",x);
    }
    else{
        printf("%d",y);
    }
    return 0;
}

int main(int argc, char *argv[]) {
    int i,k,j;
    printf("1. sumTwo\n2. square\n3. get_max\nwhich program do you want(input the number) : ");
    scanf("%d",&j);
    if(j==1){
        printf("enter two integers : ");
        scanf("%d %d",&i, &k);
        sumTwo(i,k);
    }
    else if(j==2){
        printf("enter an integer : ");
        scanf("%d",&i);
        square(i);
    }
    else if(j==3){
        printf("enter two integer : ");
        scanf("%d %d",&i, &k);
        get_max(i,k);
    }
    return 0;
}

