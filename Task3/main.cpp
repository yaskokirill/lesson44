#include <iostream>

using namespace std;

void random_init(int* vector, int size, int bound);
string vector_to_string(int* vector, int size);
bool is_the_same_value(int* vector, int size);

int main() {
	int size;

	do {
		cout << "Input size of array: ";
		cin >> size;
	} while (size <= 0);

	int* vector = new int[size];

	random_init(vector, size, 10);

	cout << "Elements of vector: ";
	cout << vector_to_string(vector, size) << endl;

	bool result = is_the_same_value(vector, size);

	cout << (result ? "Yes"
		: "No") << endl;

	delete[] vector;

	return 0;
}