#include<iostream>
using namespace std;

int sumArray(int[],int);
int avgArray(int[],int);
int minArray(int[],int);
int maxArray(int[],int);

int main()
{
 int a[100],n,i,sum, min, max, avg;
 cout<<"Enter Size of Array (Max. 100): ";
 cin>>n;
 cout<<"The values of array are:";
 for(i=0;i<n;i++)
 {
  cout<<"Value-"<<i+1<<" : "<<a[i]<<endl;
 }

 sum=sumArray(a,n);
 cout<<"Sum: "<<sum<<endl;

 avg=avgArray(a,n);
 cout<<"Average: "<<avg<<endl;

 min=minArray(a,n);
 cout<<"Minimum: "<<min<<endl;

 max=maxArray(a,n);
 cout<<"Maximum: "<<max<<endl;
}

int sumArray(int ar[],int n)
{
 int s=0, i;
 for(i=0;i<n;i++)
  s=s+ar[i];
 return s;
}

int avgArray(int ar[],int n)
{
 int s=0, i;
 for(i=0;i<n;i++)
  s=s+ar[i];
 return (s/n);
}

int minArray(int ar[],int n)
{
 int m, i;
 m=ar[0];
 for(i=0;i<n;i++)
  if(ar[i]<m)
   m=ar[i];
 return m;
}

int maxArray(int ar[],int n)
{
 int m, i;
 m=ar[0];
 for(i=0;i<n;i++)
  if(ar[i]>m)
   m=ar[i];
 return m;
}

 
