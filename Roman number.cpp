#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char M,D,C,L,V,I,X,i;
	int j=0,a,x,y,z,b,c,d,q,s[100];
	cout<<" Enter a Roman number(M&D&C&L&X&V&I):";
	cin>>s[x];
	for(int i=0;s[i];i++)
	j+=1;
	//____________________________________________________-
	if(s[x]='M')
	s[x]=1000;
	//_____________
    else if(s[x]='D')
	s[x]=500;
	//_____________________
	else if(s[x]='C')
	s[x]=100;
	//_____________________
	else if(s[x]='L')
	s[x]=50;
	//____________________
	else if(s[x]='X')
	s[x]=10;
	//___________________
	else if(s[x]='V')
	s[x]=5;
	//___________________
	else if(s[x]=I) 
	s[x]=1;
	else
	s[q]=0;
	//+++++++++++++++++++++++
	cout<<"\n\n"<<x;
	return 0;
}