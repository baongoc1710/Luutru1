#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int chuanhoa(char s[50]);
int xoa(char s[50],int vitrixoa);
int xoakt(char s[50]);
int demkt(char s[50]);

int main()


{ char s[50], s2[50], key;
	while(true)
	{
	system("cls");
	printf("****************************************\n");
	printf("**      THAO TAC TREN CHUOI           **\n");
	printf("**     1. Nhap va chuan hoa chuoi     **\n");
	printf("**     2. In chuoi vua nhap           **\n");
	printf("**     0. Thoat                       **\n");
	printf("****************************************\n");
	fflush(stdin);
	printf("\n \t\t AN PHIM CHON: ");
	scanf("%d",&key);
	switch(key)
		{
		case 1:
		fflush(stdin);
		chuanhoa(s);
		//goi ham de thuc hien cong viec tuong ung
		printf("\nBam phim bat ky de tiep tuc!");
		getch();
		break;
	
		case 2
		:
			fflush(stdin);
			demkt(s);
		printf("\nBam phim bat ky de tiep tuc!");
		//goi ham thuc de hien cong viec tuong ung
		getch();
		break;
		case 0:
		exit(1);
		default:
		printf("\nKhong co chuc nang nay!");
		printf("\nBam phim bat ky de tiep tuc!");
		getch();
		break;
		}
	}
}


int chuanhoa(char s[50])
{
	printf("\n Nhap chuoi :");
	gets(s);
	strlwr(s);
	xoakt(s);
	s[0]=s[0]-32;
	for (int i=0;i<strlen(s);i++)
		{
			if (s[i]==' '&& s[i+1]!=' ')
			s[i+1]=s[i+1]-32;
		}
	printf("\n Chuoi Chuan Hoa: %s",s);
}
	int xoa(char s[50],int vitrixoa)
{
	int n=strlen(s);
	for (int i=vitrixoa;i<n;i++)
	s[i]=s[i+1];
	s[n-1]='\0';
}
	int  xoakt(char s[50])
{
	for (int i=0;i<strlen(s);i++)
	if (s[i]==' '&& s[i+1]==' ')
	{
		xoa(s,i);
		i--;	
	}
	if (s[0]==' ')
		xoa(s,0);
	if (s[strlen(s)-1]==' ')
		xoa(s,strlen(s)-1);
}

int demkt(char s[50])
{
	int demkt=0;
	char c;
	printf("\n Nhap mot ky tu : ");
	scanf("%c",&c);
	fflush(stdin);
	strupr(s);
	for (int i=0;i<strlen(s);i++)
		{
		if (s[i]== toupper (c))
		demkt++;	
		}
	printf("\n So Ky tu La :%d",demkt);
}





