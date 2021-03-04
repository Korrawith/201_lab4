#include <stdio.h>
#include <string.h>


int main (){
	
	int n,i,j,h,sum=1;
	char m[50];
	
	scanf("%d",&n);
	
	if(n<100&&n>0)
	{
			for(i=0;i<n;i++)
		{
			scanf("%s",m);
			h=strlen(m);
			for(j=0;j<h;j++)
			{
			
				if(m[j]=='A')
				{
					if(sum==3)
					sum=2;
					else if(sum==2)
					sum=3;
				}
				else if(m[j]=='B')
				{
					if(sum==1)
					sum=4;
					else if(sum==4)
					sum=1;
				}
				else if(m[j]=='C')
				{
					if(sum==1)
					sum=3;
					else if(sum==3)
					sum=1;
					else if(sum==2)
					sum=4;
					else if(sum==4)
					sum=2;
				}
				else if(m[j]=='D')
				{
					if(sum==1)
					sum=2;
					else if(sum==2)
					sum=1;
					else if(sum==3)
					sum=4;
					else if(sum==4)
					sum=3;
				}
				else if(m[j]=='E')
				{
					if(sum==1)
					sum=4;
					else if(sum==4)
					sum=1;
					else if(sum==2)
					sum=3;
					else if(sum==3)
					sum=2;
				}
			}
		
		printf("%d\n",sum);
		
		}
	}

	
	
}
