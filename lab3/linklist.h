#include<stdio.h>
#include<stdlib.h>
typedef struct DataNode
{
	char *cmd;//the name of cmd
	char *desc;// description of cmd
	void (*handler)();//the function of cmd
	struct DataNode *next;//linklist the next;
}tDataNode;

tDataNode* FindCmd(tDataNode *head,char *cmd);
int ShowAllCmd(tDataNode *head);
