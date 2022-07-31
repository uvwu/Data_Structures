#include<stdio.h>
#include"ArrayList.c"
int main(){
	List list;
	int data;
	
	ListInit(&list);
	
	for(int i=1;i<10;i++){
		LInsert(&list,i);
	}
	int sum=0;

	
	while(LNext(&list,&data)){
		sum+=data;
	}
	printf("sum : %d\n",sum);
	
	if(LFirst(&list,&data)){
		if(data%2==0 || data%3==0)
			LRemove(&list);
		while(LNext(&list,&data)){
		if(data%2==0 || data%3==0)
			LRemove(&list);
	}
	}
	
	if(LFirst(&list,&data)){
		printf("%d ",data);
		
	while(LNext(&list,&data)){
		printf("%d ",data);
	}
	}
	
}