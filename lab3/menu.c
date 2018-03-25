#include "linklist.h"
#include <string.h>
void mathDemo();
void dogBark();
void help();
void eat();
void add();
void sub();
void happy();
void quit();
#define CMD_MAX_LEN 128

static tDataNode head[]=
{
	{"mathDemo","this is a smiple math demo.",mathDemo, &head[1]},
	{"dogBark","a dog bark at the night!",dogBark, &head[2]},
	{"help","this is the commmand list.",help , &head[3]},
	{"eat","it's supper time,let's eat some food",eat, &head[4]},
	{"add","add demo of two numbers.",add, &head[5]},
	{"sub","sub demo of two numbers.",sub, &head[6]},
	{"happy","keep smile in lifr",happy, &head[7]},
	{"quit","exit the program",quit, NULL}
};
int main()
{

	printf("ATTENTION: input 'help' you can get all commands!\n");
	while(1)
	{
		char cmd[CMD_MAX_LEN];	
		printf("please input a command-->");
		scanf("%s",cmd);
		tDataNode *p=FindCmd(head,cmd);
		if(p==NULL)
		{
			printf("this is a wrong cmd!\n");
			continue;
		}
		printf("command:%s  description:%s\n",p->cmd,p->desc);

		if(p->handler != NULL)
		{
			p->handler();
			printf("==================================\n");
		}
	}
	return 0;	
}
void mathDemo()
{
	printf("1 + 2 = %d\n",1+2);	
}
void dogBark()
{
	printf("Ruff!,RUff!,Ruff....!\n");	
}
void help()
{
	ShowAllCmd(head);	
}
void eat()
{
	printf("very good ,food is delicious!\n");	
}
void add()
{
	printf("please input two opration num! such as num1+num2\n");
	int num1,num2;
	scanf("%d %d",&num1,&num2);
	int num3;
	num3=num1+num2;
	printf("%d + %d = %d\n",num1,num2,num3);

}

void sub()
{
	printf("please input two opration num! such as num1-num2\n");
	int num1,num2;
	scanf("%d %d",&num1,&num2);
	int num3=num1-num2;
	printf("%d - %d = %d\n",num1,num2,num3);

}
void happy()
{
	printf("if i have so much money and have a girl friend ,i will so happy\n");

}
void quit()
{
	printf("are you sssure ? Y/N\t");
	char flag;
	scanf("%s",&flag);
	if(flag=='Y'||flag == 'y'){
		exit(0);
	}
	else
	{
		return ;
	}
}
