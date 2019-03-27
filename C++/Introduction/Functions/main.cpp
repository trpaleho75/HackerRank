#include <iostream>

using namespace std;

// Function Prototypes
int max_of_four(int, int, int, int);

// Function Definitions
int max_of_four(int a, int b, int c, int d) {
		// Create array of integers
		int array_of_four[4] = {a, b, c, d};
		
		// Store max
		int max = 0;
		
		// loop through array to find greatest
		for (int i = 0; i < 4; i++) {
			if (array_of_four[i] > max) {
				max = array_of_four[i];
			}
		}
		
		return max;
	}

// Main
int main(int argc, char** argv) {
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	
	cout << max_of_four(a, b, c, d);
	return 0;
}
