//Binary Search1
#include <iostream>
using namespace std;

int bin(int arr[], int l, int r, int x)
{
	while (l <= r) {
		int m = l + (r - l) / 2;

		if (arr[m] == x)
			return m;
      
		if (arr[m] < x)
			l = m + 1;
		else
			r = m - 1;
	}
	return -1;
}

int main(void)
{
	int arr[] = { 2, 3, 4, 10, 40 };
  int n = sizeof(arr) / sizeof(arr[0]);
	int x;
  cout<<"Enter the element to be searched"<<endl;
  cin>>x;	
	int ans = bin(arr, 0, n - 1, x);
	(ans == -1)
		? cout << "Element is not present in array"
		: cout << "Element is present at index " << ans;
	return 0;
}
