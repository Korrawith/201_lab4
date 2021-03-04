#include<stdio.h>
#include<string.h>

int main()
{
    int i,z;
    char a[200];

 	scanf("%s",a);
	z=strlen(a);


    for ( i = 0; i < z; i++)
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

