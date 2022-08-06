#include <stdio.h>
#include <stdlib.h>
#include "DLinkedList.h"

void ListInit(List * plist){
	plist->head = (Node*)malloc(sizeof(Node));//더미 노드 생성
	plist->head->next=NULL;
	plist->numOfData=0;
	plist->comp=NULL;//형태 주목 !!
}
void FInsert(List * plist, LData data){
	Node *newNode=(Node*)malloc(sizeof(Node));
	newNode->data=data;
	
	newNode->next=plist->head->next;
	plist->head->next=newNode;
	(plist->numOfData)++; //형태 주목!!
}

void SInsert(List * plist, LData data){
}

void LInsert(List * plist, LData data){
	if(plist->comp==NULL) //정렬 기준이 없을 때, 머리에 추가
		FInsert(plist, data);
	else	//정렬 기준이 있을 때
		SInsert(plist, data);
}


//더미 노드 다음 첫 번째 노드
int LFirst(List * plist, LData * pdata){
	if(plist->head->next==NULL)
		return FALSE;
	
	plist->before=plist->head;
	plist->cur=plist->head->next;
	
	*pdata=plist->cur->data;
	return TRUE;
}

int LNext(List * plist, LData * pdata){
	if(plist->cur->next==NULL)
		return FALSE;
	plist->before=plist->cur;
	plist->cur=plist->cur->next;
	
	*pdata=plist->cur->data;
	return TRUE;
}

LData LRemove(List * plist){
	Node * rpos=plist->cur;
	LData rdata=plist->cur->data;
	
	plist->before->next=plist->cur->next;
	plist->cur=plist->before;
	
	free(rpos);
	(plist->numOfData)--;
	return rdata;
}
	
int LCount(List * plist){
	return plist->numOfData;
}
	
void SetSortRule(List * plist,int (*comp)(LData d1, LData d2)){
	
}