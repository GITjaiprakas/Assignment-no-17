#include<stdio.h>
void swap(char str[],int,int);
int main(){
    int i=0,count=0,temp;
    char str[30]; 
    printf("Enter the string : ");
    fgets(str,30,stdin);
    while(str[i]){
        i++;
        count++;
    }
    count--;
    temp=count-1;
    for(i=0;i<count/2;i++){
        swap(str,i,temp);
        temp--;
    }
    printf("%s",str);
    return 0;
}
void swap(char str[],int i,int x){
    int temp;
    temp=str[i];
    str[i]=str[x];
    str[x]=temp;
}
