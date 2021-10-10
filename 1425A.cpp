#include <iostream>
#include <string>
using namespace std;
typedef long long ll;

int main()
{
	int total_num;
	ll n, chanek;
	cin >> total_num;
	while (total_num--)
	{
		cin >> n;
		chanek = 0;
		ll k = 0;
		while (n)
		{
			if (k % 2 == 0)
			{
				if (n % 2 == 1 || (n / 2) % 2 == 0 && n > 4)
				{
					n--;
					chanek++;
				}
				else
				{
					n /= 2;
					chanek += n;
				}
			}
			else
			{
				if (n % 2 == 1 || n / 2 % 2 == 0 && n > 4)
				{
					n--;
				}
				else 
				{
					n /= 2;
				}
			}
			k++;
		}
		cout << to_string(chanek) << '\n';
	}
	return 0;
}
