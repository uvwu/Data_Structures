#include<stdio.h>
#include<stdlib.h>
#include"ArrayList.c"
#include"NameCard.c"
int main(){
	List list;
	ListInit(&list);
	NameCard * pcard;
	
	pcard=MakeNameCard("ㅇㄴㄱ", "010-1234-2341");
	LInsert(&list,pcard);
	
	pcard=MakeNameCard("ㅂㅅㅎ", "010-1233-6741");
	LInsert(&list,pcard);
	
	pcard=MakeNameCard("ㅈㅈㅅ", "010-7654-3451");
	LInsert(&list,pcard);
	
	if(LFirst(&list,&pcard)){
		
		if(!NameCompare(pcard,"ㅂㅅㅎ"))
			ShowNameCardInfo(pcard);
		
		while(LNext(&list,&pcard)){
			if(!NameCompare(pcard,"ㅂㅅㅎ"))
			ShowNameCardInfo(pcard);	
		}
	}
	
	if(LFirst(&list,&pcard)){
		
		if(!NameCompare(pcard,"ㅈㅈㅅ")){
			ShowNameCardInfo(pcard);
			ChangePhoneNum(pcard,"010-0000-0000");
			ShowNameCardInfo(pcard);
		}
		
		
		while(LNext(&list,&pcard)){
			if(!NameCompare(pcard,"ㅈㅈㅅ")){
			ShowNameCardInfo(pcard);
			ChangePhoneNum(pcard,"010-0000-0000");
			ShowNameCardInfo(pcard);;
			}
		}
	}
	
	if(LFirst(&list,&pcard)){
		
		if(!NameCompare(pcard,"ㅇㄴㄱ")){
			pcard=LRemove(&list);
			free(pcard);
		}
		
		while(LNext(&list,&pcard)){
			if(!NameCompare(pcard,"ㅇㄴㄱ"))
			{pcard=LRemove(&list);
			free(pcard);
			}	
		}
	}
	
	printf("현재 데이터의 수: %d\n",LCount(&list));
}