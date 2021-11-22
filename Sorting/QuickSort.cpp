# include <iostream>
# include <iomanip> 

using namespace std;

void swap(int *a, int *b){ // swap function
	int *temp = a;
	a = b;
	b = temp;
}

void QuickSort(int *storage, const int left, const int right){
	if(left < right){
		int i = left;
		int j = right + 1;
		int pivot = storage[left]; // choose the position for pivot
		do{
			do{
				i++;
			}while(storage[i] < pivot); // move i pointer if pivot smaller than it
			do{
				j--;
			}while(storage[j] > pivot); // move j pointer if pivot smaller than it
			if(i < j) // if find something storage[i] > pivot > storage[j], swap it
				swap(storage[i], storage[j]);
		}while(i < j);
		
		swap(storage[left], storage[j]);
		
		QuickSort(storage, left, j - 1);
		QuickSort(storage, j + 1, right); 
	}
} 

int main(int argc, char* argv[]){
	int number = 10;
	int array[number] = {-1, 23, 4, -8, 2, 24, 0, -11, 66, 100};
	
	cout << "Before : ";
	for(int i = 0; i < number; i++)
		cout << array[i] << setw(5);
	cout << "\n";
		
	QuickSort(array, 0, number - 1); // Quick sort
	
	cout << "After : ";
	for(int i = 0; i < number; i++)
		cout << array[i] << setw(5);
	cout << "\n";
	
	system("PAUSE");
	return 0;
}
