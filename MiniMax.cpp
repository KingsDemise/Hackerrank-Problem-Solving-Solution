
#include <stdio.h>

main()
{
   long int n,a[1000],i;
   
   long int min = 0, max = 0, sum = 0,minsum,maxsum;
        scanf("%li",&n);
        for (i=0; i<n; i++) 
		{scanf("%li",&a[i]);
            sum += a[i];}
            min = a[0];
            max = a[0];
            for (i = 1; i < n; i++)
            {
            if (a[i] < min) {
                min = a[i];
            }
            if (a[i] > max) {
                max = a[i];
            }
        }
        maxsum=sum-min;
        minsum=sum-max;
        printf("%li %li",minsum,maxsum);
        return 0;
}
