#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    long int a[1000],n=1,i=0,s=0;
    scanf("%li",&n);
    for(i=0;i<n;i++)
        {
        scanf("%li ",&a[i]);
        s=s+a[i];
        }
    printf("%li",s);
        
    
    return 0;
}
