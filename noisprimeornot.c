#include<stdio.h>
int main(){
    int num;
    int count=0;
    printf("Enter number to check number is prime or not :");
    scanf("%d",&num);

    for(int i=1; i<=num; i++)
    {
         if(num % i==0){
        count +=1;
    }
 }
 if(count > 2){
    printf("%d is not prime\n",num);
 }
 else{
    printf("%d is  prime\n",num);
 }
 return 0;

}