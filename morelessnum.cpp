#include <iostream>
using namespace std;

int main(){
	int size, c;
	cin >> size >> c;
	int *Array = new int[size];
	for (int i = 0; i < size; i++){
		cin >> Array[i];
	}
	cout << endl;
	for (int i = 0; i < size; i++){
		if (Array[i] < c)
			cout << Array[i] << ' ';
	}
}