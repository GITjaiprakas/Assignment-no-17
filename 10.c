#include<stdio.h>
int main(){
    int c=0,count,i,j,temp;
    char str[40];
    printf("Enter any string : ");
    fgets(str,40,stdin);
    while(str[c]!='\n'){
        c++;
    }
    for(i=0;i<c-1;i++){
        for(j=i+1;j<c;j++){
            if(str[i]>str[j]){
                temp=str[i];
                str[i]=str[j];
                str[j]=temp;
            }
        }
    }
    for(j=0;j<c;j++){
        count=0;
        for(i=0;i<c;i++){
            if(str[j]==str[i]){
                count++;
            }
        } 
        printf("%c %d\n",str[j],count);
        if(count>1){
            j=j+count-1;
        }
    }
    return 0;
}
