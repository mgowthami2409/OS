#include<stdio.h>
void main()
{
	int buffer[10],bufsize,in,out,consume,produce,choice;
	in=0;
	out=0;
	bufsize=10;
	choice=0;
	while(choice!=3)
	{
		printf("\n1.Produce \t 2.Consume \t 3.Exit");
		printf("\nEnter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: if((in+1)%bufsize==out)
					printf("Buffer is full");
				else
				{
					printf("Enter the value:");
					scanf("%d",&produce);
					buffer[in]=produce;
					in=(in+1)%bufsize;
				}
				break;
			case 2: if(in==out)
				printf("Buffer is empty");
				else
				{
					consume=buffer[out];
					printf("The consumed value is %d",consume);
					out=(out+1)%bufsize;
				}
				break;
		}
	}
}			
