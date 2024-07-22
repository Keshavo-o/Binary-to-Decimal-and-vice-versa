#include<iostream>
using namespace std;
int Decimal(int);
int Decimal(int x)
{
	int arr[32],i=0;
	while(x!=0)
	{
		arr[i]=(x&1);
//		cout<<arr[i];
		x=x>>1;
		i++;
	}
//	cout<<endl;
	int arr_1[32];
	int j=0;
	while(j!=i)
	{
		arr_1[j]=arr[i-j-1];
//		cout<<arr_1[j];
		j++;
	}
	int k,bin_=0;
	for(k=0;k<i;k++)
	{
		bin_ = bin_*10 + arr_1[k];
	}
//	cout<<endl;
	return bin_;
}
