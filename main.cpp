#include<iostream>
#include"Decimal_to_binary.cpp"
#include"Binary_to_decimal.cpp"
using namespace std;
main()
{
	int Proceed,tr=1;
	while(tr!=0)
	{
	    cout<<"Enter 1 to convert decimal to binary and 2 to convert decimal to binary"<<endl;
	    cin>>Proceed;
	    if(Proceed==1)
	    {
	    	int dec;
	    	cout<<"Enter the decimal number\n";
	    	cin>>dec;
	    	cout<<Decimal(dec)<<endl;
		}
		if(Proceed==2)
		{
			int bin;
			cout<<"Enter the binary number\n";
			cin>>bin;
			cout<<Binary(bin)<<endl;
		}
		else
		{
			tr=0;
			cout<<"Programme terminated\n";
		}
    }
}
