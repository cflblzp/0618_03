#include "stdio.h"
#include "string.h"
int main()
{
	char ch[200];
	char word[10];

	int i=0,a=0,b=0,count=0,sum=0;
	while((ch[i]=getchar())!='\n')
	{
		a++;
		i++;
	}
	i=0;
    while((word[i]=getchar())!='\n')
	{
		b++;
		i++;
	}
	for(i=0;i<a;i++)
	{
		count=0;
		if(ch[i]==word[0])
		{
			for(int j=0;j<b;j++)
			{
				if(ch[i+j]==word[j])
				{
					count++;
				}
			}
			if(count==b)
			{
				sum++;
			}
		}
	}
	printf("itµÄ¸öÊý:%d\n",sum);
	return 0;
}