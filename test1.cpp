#include <iostream>
using namespace std;
int main()
{
	int n;
	while (cin >> n)
	{
		if (n > 0 && n <= 500000)
		{
			int count = 0;
			for (int i = 1; i <= n; ++i)
			{
				int sum = 0;
				for (int j = 1; j <= i / 2; ++j)
				{
					if (i%j == 0)
						sum += j;
				}
				if (sum == i)
					++count;
			}
			cout << count << endl;
		}
		else cout << "-1" << endl;
	}
	return 0;
}