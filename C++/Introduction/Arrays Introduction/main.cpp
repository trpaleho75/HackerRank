#include <iostream>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	// Get size of array
	int n = 0;
	cin >> n;

	// Declare dynamic array
	int * arr;
	arr = new int [n];
	
	// Populate array
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	
	// Output array in reverse order
	for (int i = 0; i < n; i++) {
		cout << arr[(n - 1) - i] << ' ';
	}
	
	return 0;
}
