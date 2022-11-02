#include<stdio.h>
int main(){
    int c=0;
    char s[40];
    printf("Enter any string in upper case : ");
    fgets(s,40,stdin);
    while(s[c]!='\n'){
        if(s[c]==32){
            s[c]=s[c];
            c++;
        }
        else{
            s[c]=s[c]+32;
            c++;
        }
    }
    puts(s);
    return 0;
}
