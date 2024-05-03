#include <iostream>
using namespace std;

int main(){
	int size;
	cin >> size;
	int *Array = new int[size];
	for (int i = 0; i < size; i++){
		cin >> Array[i];
	}
	int s;
	cin >> s;
	int count = 0;
	for (int i = 0; i < size; i++){
		if (s == Array[i])
			count++;
	}
	cout << count;
}