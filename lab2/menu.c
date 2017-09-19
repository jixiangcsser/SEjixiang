#include<stdio.h>
#include<stdlib.h>
void cmdhelp()
{
	printf("cmd: \nls,top,date,pwd,hello,ss,quit,help\n");
}
void cmdhello()
{
	printf("hello guys!\n");	
}
int main()
{
	char cmd[128];
	while(1)
	{
		scanf("%s",cmd);
		if(!strcmp(cmd,"help"))
		{
			cmdhelp();	
		}
		
		else if(!strcmp(cmd,"ls"))
		{
			system(cmd);	
		}
		else if(!strcmp(cmd,"pwd"))
		{
			system(cmd);	
		}
		else if(!strcmp(cmd,"hello"))
		{
			cmdhello();	
		}
		else if(!strcmp(cmd,"date"))
		{
			system(cmd);
		}
		else if(!strcmp(cmd,"ss"))
		{
			system(cmd);
		}
		else if(!strcmp(cmd,"top"))
		{
			system(cmd);
		}
		else if(!strcmp(cmd,"quit"))
		{
			exit(0);
		}
		else
		{
			printf("please input right command!you can input help!\n");	
		}
		
	}
	return 0;
}
