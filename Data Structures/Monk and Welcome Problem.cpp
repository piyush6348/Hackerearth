#include <iostream>
using namespace std;

int main()
{
	int n=0;
	cin>>n;

	int*a=new int[n];
	int*b=new int[n];

	for(int i=0;i<n;i++)
	cin>>a[i];

	for(int i=0;i<n;i++)
	{
	cin>>b[i];
	cout<<a[i]+b[i]<<" ";
	}
    return 0;
}
