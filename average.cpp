#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	system("color 1");
	const int MAX_ITEMS=8;
	float x[MAX_ITEMS];
	float average;
	float sum;
	cout<<"Enter"<<" "<<MAX_ITEMS<<" "<<"numbers:"<<" ";
	for (int i=0;i<MAX_ITEMS;i++)
	cin>>x[i];
	sum=0.0;
	for(int i=0;i<MAX_ITEMS;i++)
	sum+=x[i];
	average=sum/MAX_ITEMS;
	cout<<"\n the average value is :"<<average;
	cout<<"\n table of differences is:"<<endl;
	cout<<setw(4)<<"next"<<setw(8)<<"x[next]"<<setw(14)<<"difference"<<endl;
	for(int i=0;i<MAX_ITEMS;i++)
	cout<<setw(4)<<i<<setw(8)<<x[i]<<setw(14)<<(x[i]-average)<<endl;
	sleep(15);
	system("cls");
	sleep(0);
	cout<<"\n\n\n\n\t\t\t\t\t\t good bye";
	sleep(2);
	system("cls");
	return 0;
}