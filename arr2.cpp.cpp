#include<iostream>
using namespace std;
int main(){
	int m,d,total;
	int arr[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	cout<<"enter number of months:";
	cin>>m;
	cout<<"enter number of days:";
	cin>>d;
	for(int n=0;n<m-1;m++){
		total=d+arr[n];
	}
	cout<<"total day:"<<total;
	return 0;
}
