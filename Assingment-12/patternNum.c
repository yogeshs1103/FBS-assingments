void main()
{
	int i,x,y,j;
	
	int n;
	printf("Enter the size:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		x=i,y=n-1;
		for(j=n-i;j<=n;j++)
		{
			printf("%d ",x);
			x=x+y--;
			
		}
		printf("\n");
	}
}
