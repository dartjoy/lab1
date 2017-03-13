#include<iostream>
using namespace std;

int main(int argc,char *argv[])
{
	int n;

	cout<<"Enter a number!!";
	cin>>n;
	cout<<n<<" ";

LOOP:
	if(n==1)
	{
		cout<<endl;
		return 0;
	}
	else
	{
		if(n%2==1)
		{
			n=3*n+1;
			cout<<n<<" ";
		}
		else
		{
			n=n/2;
			cout<<n<<" ";
		}
	}

	goto LOOP;
}
