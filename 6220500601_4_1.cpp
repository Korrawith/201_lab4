#include<stdio.h>
#include<string.h>

int main()
{
    int m,i,j;
    scanf("%d",&m);
    int c[m][3],x[m-2],y[3]={4,2,1};

    for (i=0;i<m;i++)
    {
        for (j=0;j<3;j++)
        {
            scanf("%d",&c[i][j]);
        }
    }
   for (i=0;i<m-2;i++)
    {
        x[i]=0;
        for (j=0;j<3;j++)
        {
            x[i]+=(c[i][j]+c[i+1][j]+c[i+2][j])*y[j];
        }
    }
    int indexmax=0,indexmin=0;
    
    for (i=1;i<m-2;i++)
    {
        if (x[i]>x[indexmax])
        {
            indexmax=i;
        }
        else if (x[i]<x[indexmin])
        {
            indexmin=i;
        }

    }
    printf("%d %d",indexmax+1,indexmin+1);
}
