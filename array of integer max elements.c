#include<stdio.h>
void main()
{
    int a[50]={1,2,3,4,5,6,7,8};
     int i,n; 
    int max= a[0];
    printf("\n Enter the n value:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
       
       if(a[i]>max)
        {
            max=a[i];
        }
       
       
    }
         printf("\n%d",max);  
}
