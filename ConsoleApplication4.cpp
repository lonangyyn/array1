#include <iostream>
using namespace std;
#define max 1000
void nhapMang(int a[], int &n);
void tinhTar(int a[], int n,int x);
int main()
{
	int target,e;
	cout << "target?" << endl;
	cin >> target;
	int arr[max];
	cout << "so ptu?" << endl;
	cin >> e;
	nhapMang(arr, e);
	tinhTar(arr, target,e);
}
void nhapMang(int a[], int& n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]" << endl;
		cin >> a[i];
	}
}
void tinhTar(int a[], int n,int x)
{
	for (int i = 0; i < x-1; i++)
	{
		for (int m = 1; m < x; m++)
		{
			if ((a[i] + a[i + m]) == n)
				cout << "[" << i << "," << i + m << "]" << endl;
		}
	}
}