#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(int i=0; i<n; i++)
    {
        printf("%d ", a[i]);
    }
    
    for(int i; i<n-1;i++)
        for(int l=i+1; l<n;l++)
        {
           if(a[i]>a[l])
           {
               int v = a[i];
               a[i] = a[l];
               a[l] = v;
           }
        }
    
    printf("\nsorted:");
    
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    
    printf("\nmin and max:");
    printf("\n%d %d", a[0], a[n-1]);

    return 0;
}