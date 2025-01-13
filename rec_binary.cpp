#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void rec_binary(int value){
	if(value > 0){
		rec_binary(value / 2);
		putchar(48+(value %2));
	}
}

int main(){
	int value;
	cout << "Enter a value to be covnerted to binary: ";
	cin >> value;

	rec_binary(value);
	putchar('\n');

	return 0;
}
