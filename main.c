#include<stdio.h>
#include<math.h> /* has  sin(), abs(), and fabs() */
int main(void)
{ 
  double x;
//double interval;
//int i;
//for(i = 0; i <30; i++)
//{
// interval = i/10.0;
  printf("input x:");
  scanf("%lf",&x);
  printf("sin( %lf ) = %lf \n", x, fabs(sin(x)));
//}


//printf("\n+++++++\n");
return 0;
}