#include<stdio.h>
#include"DLinkedList.c"

int main(){
	List list;
	int data;
	ListInit(&list);
	
	LInsert(&list,11);
	LInsert(&list,22);
	LInsert(&list,33);
	LInsert(&list,44);
	LInsert(&list,55);
	
	printf("현재 데이터의 수: %d\n",LCount(&list));
	
	if(LFirst(&list,&data)){
		printf("%d ",data);
		while(LNext(&list,&data))
			printf("%d ",data);
	}
	printf("\n\n");
	
	if(LFirst(&list,&data)){
		if(data==22)
			LRemove(&list);
		while(LNext(&list,&data))
			if(data==22)
				LRemove(&list);
	}
	
	printf("현재 데이터의 수: %d\n",LCount(&list));
	
	if(LFirst(&list,&data)){
		printf("%d ",data);
		while(LNext(&list,&data))
			printf("%d ",data);
	}
	printf("\n\n");
}