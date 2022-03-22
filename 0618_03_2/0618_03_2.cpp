#include <stdio.h> 
struct message
{

    char member[18];
	int shi;
	int kao;
};
	struct message d[100];
int main()
{
	int N ,i,j;
	scanf("%d",&N);
	for( i=0;i<N;i++)
	{
		scanf("%s %d %d ",d[i].member,&d[i].shi,&d[i].kao);
	}
	int a;
	scanf("%d",&a);
	int m[10];
	for(i=0;i<a;i++)
	{
		scanf("%d",&m[i]);	
	}
	for( i=0;i<a;i++)
	{
		for( j=0;j<N;j++)
		{
		    if(m[i]==d[j].shi)
			{
		    printf("%s %d\n",d[j].member,d[j].kao);
			}
		    else 
			{
		    continue;
			}
		}
	}

return 0;
}
