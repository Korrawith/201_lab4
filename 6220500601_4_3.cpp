#include<stdio.h>
#include<string.h>

int main()
{
    int i,m;
    char a[200];

 	scanf("%s",a);
	m=strlen(a);


    for (i=0;i<m;i++)
    {
       if (a[i]==a[i+1])
       {
           continue;
       }
       else if (a[i]!=a[i+1])
       {
           printf("%c",a[i]);
       }

    }
    return 0;
}

