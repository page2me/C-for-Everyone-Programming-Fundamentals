#include <stdio.h>
 
  
int main(void)
{
    int nums[1000] = {0};
    int i = 0;
    FILE * fp;
    int sum=0;
 
    fp = fopen("elephant_seal_data.txt", "r");
        while (fscanf(fp, "%d", &nums[i]) != EOF) {
            ++i;
        }
        fclose(fp);
 
    for (--i; i >= 0; --i) {
      //  printf("num[%d] = %d\n", i, nums[i]);
      sum = sum + nums[i];
    }
    printf("%lf",sum/1000.0);
    return 0;
}