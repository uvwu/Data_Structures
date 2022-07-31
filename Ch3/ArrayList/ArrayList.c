#include <stdio.h>
#include "ArrayList.h"

void ListInit(List * plist)
{	
	(plist->numOfData)=0;
	(plist->curPosition)=-1;
}

void LInsert(List * plist, LData data)
{
	if(plist->numOfData>=LIST_LEN)
		printf("공간 초과\n");
	else{
		plist->arr[plist->numOfData]=data;
		(plist->numOfData)++;
	}
}

int LFirst(List * plist, LData * pdata)
{
	if(plist->numOfData==0)
		return FALSE;
	
	(plist->curPosition)=0;
	*pdata=plist->arr[0];
	return TRUE;
}

int LNext(List * plist, LData * pdata)
{
	if( (plist->curPosition)+1 >= plist->numOfData )
		return FALSE;
	(plist->curPosition)++;
	*pdata=plist->arr[plist->curPosition];
	return TRUE;
	
}

LData LRemove(List * plist)
{
	int rpos=plist->curPosition;//삭제할 위치
	
	LData rdata=plist->arr[rpos];
	
	for(int i=rpos;i<(plist->numOfData)-1;i++){
		plist->arr[i]=plist->arr[i+1];
	}
	
	(plist->numOfData)--;
	(plist->curPosition)--;
		
		
	return rdata;
}

int LCount(List * plist)
{
	return plist->numOfData;
}