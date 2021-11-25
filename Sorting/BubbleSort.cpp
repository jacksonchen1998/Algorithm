# include <iostream>
# include <iomanip>

using namespace std;

void swap(int *a, int *b){
	int *temp = a;
	a = b;
	b = temp;
}

void BubbleSort(int *storage, int number){
	for(int i = 0; i < number; i++){
		for(int j = i + 1; j < number; j++){
			if(storage[i] > storage[j]){
				swap(storage[i], storage[j]);
			}
		}
	}
}

void printArray(int *storage, int number){
	for(int i = 0; i < number; i++){
		cout << storage[i] << setw(5);
	}
	cout <<"\n";
}

int main(int argc, char* argv[]){
	int num = 10;
	int array[num] = {1, 2, -8, 10, 23, -9, 22, 45, -87, 0};
	
	cout << "Before sorting : ";
	printArray(array, num);
	
	BubbleSort(array, num);
	
	cout << "After sorting : ";
	printArray(array, num);
	
	system("PAUSE");
	return 0;
}
