#include<stdio.h>
int main(){
int n , mult;;
printf("Enter any number : ");
scanf("%d",&n);
printf("\nMultiplication table of %d is : \n",n);
for(int i=1; i<=10; i++){
   mult= n * i;
   printf("%d\n", mult);

}

return 0;
}
