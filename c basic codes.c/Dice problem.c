#include<stdio.h>
 int oppositeifdice(int n){
    int ans=7-n;
    return ans;
 }
 int main(){
    int n ;
    printf("Enter any number from(1 to 6):");
    scanf("%d",&n);
    printf("Opposite number of %d is %d",n,oppositeifdice( n));
    return 0;
 }