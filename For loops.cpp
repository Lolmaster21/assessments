#include <iostream>

using namespace std;

int main(){
	int i;
	int k;
	int l;
	int m;
	int n;
	for (i = 50; i <= 70; i += 2) {

		cout << i << endl;
	}
	cout << "New loop" << endl;
	for (k = 100; k >= 50 ; k -= 5) {

		cout << k << endl;
	}
	cout << "New loop" << endl;
	for (l = 2; l <= 2048; l *= 2) {

		cout << l << endl;
	}

	cout << "Nested loop" << endl;

	for (m = 1; m <= 6; m++) {
		
		for (n = 1; n <= 10; n++) {
			cout << "*";

		}
		cout << endl;
	}

	cout << "Nested loop" << endl;

	for (m = 1; m <= 4; m++) { //prints 1111

		for (n = 1; n <= 5; n++) { //prints 1234
			cout << n << " " ;

		}
		cout << endl;
	}

	cout << endl;
	cout << " Broken Spicy" << endl;
	
	srand(time(NULL));	
	int small;
	int big;

	int arr1[8] = { rand() % 20,rand() % 20,rand() % 20,rand() % 20,rand() % 20,rand() % 20 ,rand() % 20,rand() % 20 };


	for (int f = 0; f <= 4; f++) {
		for (int k = 0; k <= 4; k++) {
			if (arr1[k] > arr1[f]) {
				small = arr1[f];
			}
		}
	}

	for (int f = 0; f <= 4; f++) {
		for (int k = 0; k <= 4; k++) {
			if (arr1[k] > arr1[f]) {
				big = arr1[k];
			}
		}
	}

	for (int l = 0; l <= 4; l++)
			cout << arr1[l] << " ";
		cout << endl;
		cout << "smallest number is: "<< small << endl;

	for (int m = 0; m <= 4; m++)
			cout << arr1[m] << " ";
		cout << endl;
		cout << "biggest number is: " << big << endl;

		cout << "The sum is: " << arr1[l] + arr1[m] << endl;

}
