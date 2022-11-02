#include<stdio.h>
int main(){
    int count=0,i;
    char c,s[40];
    printf("Enter any string : ");
    fgets(s,40,stdin);
    printf("Enter the character to find occurance : ");
    scanf("%c",&c);
    for(i=0;i<30;i++){
        if(c==s[i]){
            count++;
        }
    }
    printf("%c has occured %d times",c,count);
    return 0;
}
