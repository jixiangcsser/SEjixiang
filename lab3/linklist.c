#include <string.h>
#include "linklist.h"
tDataNode* FindCmd(tDataNode *head,char *cmd)//head is an array
{
	if(head == NULL ||cmd == NULL)
	{
		return NULL;		
	}
	tDataNode *p =head;
	while(p!=NULL)
	{
		if(strcmp(p->cmd,cmd)==0)//strcmp is a function if catch return 0
		{
			return p;	
		}
		p = p->next;
	}
	return NULL;
}
int ShowAllCmd(tDataNode *head)
{
	printf("Menu list:\n");
	tDataNode *p =head;
	while(p!=NULL)
	{
		printf("command: %s   description: %s\n",p->cmd,p->desc);
		printf("================================\n");
		p=p->next;
	}
}
