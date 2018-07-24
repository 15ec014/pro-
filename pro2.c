#include<stdio.h>
void main()
{
    int b[200],i,j,n,t,k;
    scanf("%d",&n);
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        if(b[i]>b[j])
        {
            t=b[i];
            b[i]=b[j];
            b[j]=t;
        }
    }
    for(i=0;i<k-1;i++)
   printf("%d ",b[i]);
}
