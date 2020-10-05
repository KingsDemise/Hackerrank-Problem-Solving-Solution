#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int a[100],n,i;
    float z=0,p=0,m=0,x,y,z1;
    scanf("%d",&n);
    for (i=0; i<n;i++)
     {scanf("%d",&a[i]);}
     for (i=0; i<n;i++){
      if(a[i]>0)
      p++;
     else if(a[i]<0)
      m++;
      else
      z++;}
      x=z/n;
      y=p/n;
      z1=m/n;
      printf("%f\n",y);
      printf("%f\n",z1);
      printf("%f\n",x);
      return 0;
    
    

}
