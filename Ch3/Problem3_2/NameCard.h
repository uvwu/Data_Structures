#ifndef __NAME_CARD_H__
#define __NAME_CARD_H__

#define NAME_LEN	 30
#define PHONE_LEN 	 30

typedef struct __namecard
{
	char name[NAME_LEN];
	char phone[PHONE_LEN];
}NameCard;

NameCard * MakeNameCard(char * name, char * phone);

void ShowNameCardInfo(NameCard * pcard);

int NameCompare(NameCard * pcard,char * name);//이름이 같으면 0, 다르면 0이 아닌 값 반환

void ChangePhoneNum(NameCard *pcard,char * phone);

#endif