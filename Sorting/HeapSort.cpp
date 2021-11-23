# include <iostream>
# include <iomanip>

using namespace std;

void swap(int *a, int *b){
	int *temp = a;
	a = b;
	b = temp;
}

void Heapify(int *array, int number, int i){
	
	int largest = i;
	int l = 2 * i + 1;
	int r = 2 * i + 2;
	
	if(l < number && array[l] > array[largest]) // change largest value for root
		largest = l;
	if(r < number && array[r] > array[largest]) // change largest value for root
		largest = r;
		
	if(largest != i){ // recursive execution
		
		swap(array[largest], array[i]);
		
		Heapify(array, number, largest);	
	}
}

void HeapSort(int *storage, int num){
	for(int i = (num / 2) - 1; i >= 0; i--) // build max heap
		Heapify(storage, num, i);
	
	for(int i = num - 1; i > 0; i--){ // delete root, inset the last node into root
		
		swap(storage[0], storage[i]);
		
		Heapify(storage, i, 0);	// build max heap
	}
}

void printArray(int *storage, int num){
	for(int i = 0; i < num; i++)
		cout << storage[i] << setw(5);
	cout << "\n";
}

int main(int argc, char *argv[]){
	int number = 10;
	int array[number] = {-1, 23, 4, -8, 2, 24, 0, -11, 66, 100};
	
	cout << "Before : ";
	printArray(array, number);
		
	HeapSort(array, number); // Heap sort
	
	cout << "After : ";
	printArray(array, number);
	
	system("PAUSE");
	return 0;
}
