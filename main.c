#include <stdio.h>
int main(void){
  int per;
  float L1,L2,area,lol,high;
  printf("Enter L1 :");
  scanf("%f",&L1);
  printf("Enter L2 :");
  scanf("%f",&L2);
  printf("Enter Height : ");
  scanf("%f",&high);
  per = (L2/L1)*100;
  lol = L1+L2;
  printf("L2 = %d % \n",per);
  if(per>=40){
    area = 0.5*high*lol;
    printf("Area is : %0.3f",area);

  }
  return 0;
}
