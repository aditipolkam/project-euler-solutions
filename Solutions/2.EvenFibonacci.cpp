#include<iostream>
using namespace std;
int main()
{
	int sum = 0,n1 = 0,n2 = 1,n3 = 2, limit = 4000000;
	while(n3 < limit)
	{
		n3 = n1 + n2;
		if(n3 % 2 == 0)
			sum+=n3;
		n1 = n2;
		n2 = n3;
	}
	cout<<sum<<" is the sum of even-valued terms.";
	return 0;
}
