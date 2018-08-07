#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;
int main()
{
char *str[20];
char name[20];
int m;
cout<<"enter no. of students";
cin>>m;
int*a;
a=&m;
for(int i=0;i<*a;i++)
{
cout<<"enter name";
cin>>name;
int length=strlen(name);
str[i]=new char[length+1];
strcpy(*(str+i),name);
cout<<str[i];
}
void printmenu ();
cout<<"choice=?";
cin>>ch;
switch(ch)
{
case 1:
void printlist(char*s[],int*a);
{
for(int i=0; i<*a; i++)
{
cout<<*s[i];
*(s+i)
}break;
case 2:
void insertname(char*s[],int*a)
{
int pos;
char name[20];
cout<<"enter position name at which name is to be inserted";
cin>>pos;
cout<<"enter name";
cin>>name;
for(int i=(*a)-1;i>=pos-1;i--)
*(s+i+1)=*(s+i)
*(s+pos-1)=name;
(*a)++;
cout<<"insertion successful";
}break;
case 3:
void deletename(char*s[],int*n)
{
char name[20];
cout<<"enter NAME TO BE DELETED"
cin>>name;
for(i=0;i<=*a;i++)
{
if(strcmp(*(s+i),name)==0)
for(intj=i;j<=(*a)-1;j++)
*(s+j)=*(s+j+1);
(*a)--;
}break;
case 4:
	exit;
	break;
	return 0;
}
}}}}

