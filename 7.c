#include<stdio.h>
int main(){
    int c=0,i,count_alpha=0,count_digi=0,count_spe=0;
    char s[40];
    printf("Enter any string : ");
    fgets(s,40,stdin);
    while(s[c]!='\n'){
        c++;
    }
    for(i=0;i<c;i++){
        if(((s[i]<='Z')&&(s[i]>='A'))||((s[i]<='z')&&(s[i]>='a'))){
            count_alpha++;
        }
        else if((s[i]<='9')&&(s[i]>='0')){
            count_digi++;
        }                                                 
        else{
            count_spe++;
        }
    }
    printf("there are %d aplhabets,%d digits,%d special character/s in the sentence.",count_alpha,count_digi,count_spe);
    return 0;
}
