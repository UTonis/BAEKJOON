#include <iostream>
using namespace std;

int main(){
	int count = 0;
	char c[1000];
	cin.getline(c, 1000);
	for (int i = 0; i < 1000; i++){
		if (c[i] == NULL)
			break;
		else
			count++;
	}
	cout << count;
}