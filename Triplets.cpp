#include <stdio.h>


int main()
{
    int i,j,a[2],b[2],al=0,bo=0;
    for (i=0;i<3;i++) {
    scanf("%d",&a[i]);
    }
    for (j=0;j<3;j++) {
    scanf("%d",&b[j]);
    }
    for(i=0;i<3;i++)
    {if(a[i]>b[i])
    {al=al+1;}
    if (a[i]<b[i]) {
    bo=bo+1;
    }
    
    
    }
    printf("%d %d",al,bo);
}
