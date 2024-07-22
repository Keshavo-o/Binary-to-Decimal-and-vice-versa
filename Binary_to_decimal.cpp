#include<iostream>
#include<math.h>
using namespace std;
int Binary(int);
int Binary(int x)
{
	int arr[32],i;
	while(x!=0)
	{
		arr[i] = x%10;
		x=x/10;
//		cout<<arr[i];
		i++;
	}
	int dec_=0,k;
	for(k=0;k<i;k++)
	{
		dec_=dec_+arr[k]*(pow(2,k));
	}
	return dec_;
}
