#include<stdio.h>

void main() {
    int i,j,k[8];
 int n,h=0;
    scanf("%d",&n);
    for ( i=0; n>0; i++){
        k[i]=n%2;
        n=n/2;
        h++;
    }
    for(i=0; i<8-h; i++){
        printf("0");
    }
    for ( i=h-1; i>=0; i--){
        printf("%d",k[i]);
    }   

}   