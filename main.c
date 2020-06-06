#include<stdio.h>
#include<math.h> /* has  sin(), abs(), and fabs() */
int main(void)
{ 
// double x;
double interval;
int i;
for(i = 0; i <11; i++)
{ 
 interval = i/10.0;
  //printf("input x:");
  //scanf("%lf",&x);
  printf("sin( %lf ) = %lf \n", interval, fabs(sin(interval)));
  printf("cos( %lf ) = %lf \n", interval, fabs(cos(interval)));
}


//printf("\n+++++++\n");
return 0;
}