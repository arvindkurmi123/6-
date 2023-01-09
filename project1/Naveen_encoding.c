// program to conver a sentence to send naveen in our code language (binary)
#include<stdio.h>
void binary (int n){
               int h=0,k[8];
   
    for (int i=0; n>0; i++){
        k[i]=n%2;
        if (k[i]==1){k[i]=0;}
        else {k[i]=1;}
        n=n/2;
        h++; 
    }
    for(int i=0; i<8-h; i++){
        printf("1");
    }
    for (int  i=h-1; i>=0; i--){
        printf("%d",k[i]);
    } 
}
void main(){
    char a;
    int  final;

    int integer;
    FILE * ptr;
    ptr = fopen ("Mysoul.txt","r");
    a = fgetc(ptr);
   // printf("%d",a);
    while (a!=EOF)
    {  

       integer = a+1;
        binary(integer);
        a = fgetc(ptr);
    }
    // fclose;
    // FILE *ptr1;
    // ptr1= fopen("binary.txt","w"); ---> trying to save output in another file 
    // a = fgetc(ptr);
    // while(a!=EOF){
    //     ptr = a;
    // }
    // 
}   