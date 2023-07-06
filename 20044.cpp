#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n, x, S;
	
	cin >> n;

	vector <int> w(2*n);
	vector <int> sum(n);
	
	for(int i = 0; i < 2*n; i++)
	{
		cin >> x;
		w[i] = x;
	}
	sort(w.begin(), w.end());

	for(int i = 0; i < n; i++)
	{
		x = w[i] + w[2*n-i-1];
		sum[i] = x;
	}

	S = *min_element(sum.begin(), sum.end());
	cout << S;

	return 0;
}