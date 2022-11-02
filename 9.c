#include<stdio.h>
void swap(char str[],int,int);
int main(){
    int i=0,count=0,temp,j,min;
    char str[30]; 
    printf("Enter the string : ");
    fgets(str,30,stdin);
    while(str[i]){
        i++;
        count++;
    }
    count--;
    temp=count;
    for(i=0;i<temp-1;i++){
        min=i;
        for(j=i+1;j<temp;j++){
            if(str[j]<str[min]){
                min=j;
            }
        }
        swap(str,i,min);
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
