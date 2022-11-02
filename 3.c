#include<stdio.h>
int main(){
    int count=0,i=0,x,c=0;
    char s[40];
    printf("Enter any string : ");
    fgets(s,40,stdin);
    while(s[c]){
        c++;
    }
    while(i<c){
        switch(s[i]){
            case 'a':count++;
            break;
            case 'A':count++;
            break;
            case 'e':count++;
            break;
            case 'E':count++;
            break;
            case 'i':count++;
            break;
            case 'I':count++;
            break;
            case 'o':count++;
            break;
            case 'O':count++;
            break;
            case 'u':count++;
            break;
            case 'U':count++;
            break;
        }
        i++;
    }
    printf("There are %d vowels in this string",count);
    return 0;
}
