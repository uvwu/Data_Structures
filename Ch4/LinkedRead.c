#include<stdio.h>
#include<stdlib.h>
typedef struct _node{
	int data;
	struct _node * next;
}Node;

int main(){
	Node * head=NULL;
	Node * tail=NULL;
	Node * cur=NULL;
	
	Node * newNode=NULL;
	int readData;
	
	//data input//
	while(1){
		printf("자연수 입력: ");
		scanf("%d",&readData);
		if(readData<1)
			break;
		newNode=malloc(sizeof(Node));
		newNode->data=readData;
		newNode->next=NULL;
		
		if(head==NULL)
			head=newNode;
		
		else //tail은 Node*임!
			tail->next=newNode;
		
		tail=newNode;
	}
	printf("\n");
	
	//output data//
	printf("입력 받은 데이터 출력\n");
	if(head==NULL)
		printf("No Data\n");
	else{
		cur=head;
		printf("%d ",cur->data);
		
		while(cur->next !=NULL){
			cur=cur->next;
			printf("%d ",cur->data);
		}
	}
	printf("\n\n");
	//메모리 해제
	if(head==NULL)
		return 0;
	else{
		Node * delNode=head;
		Node * delNextNode=head->next;
		printf("%d 삭제\n",head->data);
		free(delNode);
		
		while(delNextNode!=NULL){
			delNode=delNextNode;
			delNextNode=delNextNode->next;
			printf("%d 삭제\n",delNode->data);
			free(delNode);
		}
		
	}
	return 0;
}