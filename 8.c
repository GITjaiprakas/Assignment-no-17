#include<stdio.h>
int main(){
    char s[40],n[40],c=0,i;
    printf("Enter the string : ");
    fgets(s,40,stdin);
    while(s[c]!='\n'){
        c++;
    }
    for(i=0;i<c;i++){
        n[i]=s[i];
    }
    printf("After copying the elements of s array in n array \n");
    for(i=0;i<c;i++){
        printf("%c",n[i]);
    }
    return 0;
}
