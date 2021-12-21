#include <iostream>

using namespace std;
#define MAX 100


//nhap mang
void input(int* arr, int& n) {
	n = -1;
	while (n < 1 || n>40) {
		cout << "Gia tri cua n : ";
		cin >> n;
	}
	for (int i = 0; i < n; i++) {
		cout << "a[" << i << "] = ";
		cin >> arr[i];
	}
}
//xuat mang
void output(int* arr, const int n) {
	for (int i = 0; i < n; i++) {
		cout << *arr << "\t";
		arr++;
	}
}

//sap xep mang tang dan
void ascending_array(int* arr, int n) {
	cout << "\nMang tang dan : " << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = n-1; j >0 ; j--)
		{
			if (arr[j] < arr[j-1]) {
				int tmp = arr[j];
				arr[j] = arr[j-1];
				arr[j-1] = tmp;
			}
		}
	}

}

//sap xep mang giam dan
void descending_array(int* arr, int n) {
	cout << "\nMang tang dan : " << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = n - 1; j > 0; j--)
		{
			if (arr[j] > arr[j - 1]) {
				int tmp = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = tmp;
			}
		}
	}

}
// chen mang
void insert_array(int* arr, int &n, int x, int k) {
	cout << "\n=======Chen-mang======" << endl;
	cout << "Nhap gia tri can chen : x = ";
	cin >> x;
	cout << "Nhap vi tri can chen : k = ";
	cin >> k;
	if (k > n || k<0) {

	}
	else {
		n++;
		for (int i = n-1; i >= k; i--)
		{
			arr[i] = arr[i-1];
		}
		arr[k] = x;
	}
}
//xoa mang
void delete_array(int* arr, int& n, int k) {
	cout << "\n=======Xoa-mang======" << endl;
	cout << "Nhap vi tri can xoa : k = ";
	cin >> k;
	if (k > n || k < 0) {

	}
	else {
		n--;
		for (int i = k; i <n; i++)
		{
			arr[i] = arr[i + 1];
		}

	}
}
//tim so nguyen to trong mang
bool check_prime(int n) {
	if(n<2) return false;
	else if(n==2) return true;
	else {
		if (n % 2 == 0) return false;
		for (int i = 2; i < n/2; i++)
		{
			if (n % i == 0) return false;
		}
	}
	return true;
}
void prime_numbers(int* arr, int n) {
	cout << "\n=======Kiem-tra-so-nguyen-to-trong-mang======" << endl;
	cout << "So nguyen to trong mang la : " << endl;
	for (int i = 0; i < n; i++)
	{
		if (check_prime(arr[i]) == true) {
			cout << arr[i] << "\t";
		}
	}
}
int main() {
	int arr[MAX];
	int n;
	int x=0, k=0;
	input(arr, n);
	output(arr, n);

//	prime_numbers(arr, n);

	//insert_array(arr, n,x,k);
	//output(arr, n);

	//delete_array(arr, n,k);
	//output(arr, n);

	//ascending_array(arr, n);
	//output(arr, n);

	//descending_array(arr, n);
	//output(arr, n);

	return 0;
}