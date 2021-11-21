# include <iostream>
# include <iomanip>

using namespace std;

void insert(int *storage, int num){
	int key = 0, j;
	for(int i = 0; i < num; i++){
		key = storage[i]; // the item which be compared
		j = i - 1; // it may swap, so j = i - 1
		while(storage[j] > key && j >= 0){ // execute swap when key is smaller
			storage[j + 1] = storage[j]; //than the item which stored in array
			j--;
		}
		storage[j + 1] = key;
	} 
}

int main(){
	int num = 10;
	int array[num] = {-1, -9, 10, 5, 2, 32, -88, 7, 56, 0};
	
	cout << "Before sorting : ";
	for(int i = 0; i < num; i++)
		cout << array[i] << setw(5);
	cout << "\n";
	
	insert(array, num);
	
	cout << "After sorting : ";
	for(int i = 0; i < num; i++)
		cout << array[i] << setw(5);
	cout << "\n";
	
	system("PAUSE");
	return 0;
} 
