#include <bits/stdc++.h>

using namespace std;



int main()
{
	vector< vector<int> > arr(6);
	for (int i = 0; i < 6; i++) {
		arr[i].resize(6);

		for (int j = 0; j < 6; j++) {
			cin >> arr[i][j];
		}

		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	
		int k,l;
		int d, e;
		int j;
		i=0;
		j=0;
		while (i <= 3||j <= 3) {
			if (d > e) {
				e = d;
			}
			for (i = k; i <3; i++) {
				for (j = l; j <3; j++) {
					d = d + arr[i][j];
				}
			}
			d - arr[k + 1][l] - arr[k + 1][l + 2];
			e = d;
			k++;
			l++;
		}
		cout << d << "\n";
	return 0;
}
}


