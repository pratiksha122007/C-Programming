#include<stdio.h>
void leap_year(int year){
if(year%400==0){
    printf("%d is leaf year\n",year);
}
 else if(year%100==0){
    printf("%d is not leaf year\n",year);
}
 else if(year%4==0){
    printf("%d is leaf year\n",year);
}
else{
  printf("%d is not leaf year\n",year);
}
}
int main(){
 leap_year(2000) ;
 leap_year(2500);
 leap_year(5600);

 return 0;
}