#include <stdio.h>
int main()
{
	int d,t,s;
	printf("Enter the distance you traveled in 'm' \n");
	scanf("%d",&d);
	printf("Enter the time taken to travel in 's' \n");
	scanf("%d",&t);
	//process
	s=d/t;
	printf("The Average Speed is %d m/s",s);

	return 0;
}

