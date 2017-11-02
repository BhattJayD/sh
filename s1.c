#include<stdio.h>

void main()
{
	int length =100 , i;
	printf("enter no.\n");
	scanf("%d",&length);
	char message [length],mes[length];
	printf("your message\n");
	scanf("%s",message);
	
	for(int j=0;j<=length;j++)
	{
		mes[j]=message[j];
	}
	
	for (i=0;i<= length;i++)
	{
		if (message[i] % 2 == 0)
			printf("%c = %03d\n",message[i],message[i]+1);
		
	
		else
			printf("%c = %03d\n",message[i],message[i]);
		
	}
	
	int c,d[27];
	char a[27] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	char b[27] = {'Z','Y','X','W','V','U','T','S','R','Q','P','O','N','M','L','K','J','I','H','G','F','E','D','C','B','A'} ;
	printf("%d\n",a[1]);
	
	
	
	for (int i=0;i<26;i++)
	{	
		for (int j=0;j<26;j++)
		{
			if(message[j]==a[i] || message[j]==b[j])
			{
				c=(a[i]+b[i]);	
				d[i]=c;
				printf ("%c+%c=%d\n",a[i],b[i],d[i]) ;
			}
		}
	}
	
	
}
