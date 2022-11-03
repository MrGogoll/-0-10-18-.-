
#include <iostream>
using namespace std;
int main()
{
	int mass[100];
	int N;
	cin >> N;
	for  (int i = 0;i < N; i++)
	{
		cin >>mass[i];
	}
	int B;
	cin >> B;
		int summ = 0;
		for (int i = 0; i < N; i++)
		{
			if ( mass[i]<=B)
			{
				summ += mass[i];
			}
		}
		cout << summ;
}