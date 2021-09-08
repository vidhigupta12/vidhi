#include<iostream>
using namespace std;
template <class t>
sort1(t a[],int n)
{
	t temp;
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}
main()
{
	int n,i,a[10];
	cout<<"Enter n: ";
	cin>>n;
	for(i=0;i<n;i++)
	cin>>a[i];
	sort1(a,n);
	for(i=0;i<n;i++)
	cout<<a[i]<<" ";
}
