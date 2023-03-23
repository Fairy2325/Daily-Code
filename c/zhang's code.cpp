#include <cstdio> 
#include <iostream>
#include <cstring>

#define MAX_DIGITS 10

using namespace std;

string segments[3][10]={
	{" _  ","    "," _  "," _  ","    "," _  "," _  "," _  "," _  "," _  "},
	{"| | ","  | "," _| "," _| ","|_| ","|_  ","|_  ","  | ","|_| ","|_| "},
	{"|_| ","  | ","|_  "," _| ","  | "," _| ","|_| ","  | ","|_| "," _| "}
};
int digits[MAX_DIGITS+1];

int read()
{
	char c=getchar();
	while(c>'9'||c<'0')
	{
		if(c=='\n')
			return -1;
		c=getchar();
	}
	return c-'0';
}

void print_digits_array()
{
	for(int k=0;k<3;k++)
	{
		for(int i=0;digits[i]!=-1;i++)
			cout<<segments[k][digits[i]];
		cout<<endl;
	}
	return;
}

void clear_digits_array()
{
	for(int i=0;i<=MAX_DIGITS;i++)
		digits[i]=-1;
	return;
}

int main()
{
	int t;
	int cnt=0;
	clear_digits_array();
	
	printf("Enter a number: ");
	while((t=read())!=-1)
	{
		digits[cnt++]=t;
	}
	print_digits_array();
}
