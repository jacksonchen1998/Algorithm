# include <iostream>
# include <iomanip> 

using namespace std;

void Merge(int *storage, int left, int middle, int right){
	int small = middle - left + 1;
	int large = right - middle;
	
	int S[small], L[large];
	
	for(int i = 0; i < small; i++)
		S[i] = storage[left + i];
		
	for(int j = 0; j < large; j++)
		L[j] = storage[middle + j + 1];
		
	int i = 0, j = 0, k = left;
	
	while(i < small && j < large){
		if(S[i] <= L[j]){
			storage[k] = S[i];
			i++;
		}else{
			storage[k] = L[j];
			j++;
		}
		k++;
	}
	
	while(i < small){ // put smaller item into array
		storage[k] = S[i];
		i++;
		k++;
	}
	
	while(j < large){ // put larger item into array
		storage[k] = L[j];
		j++;
		k++;
	}
}

void MergeSort(int *storage, int left, int right){
	if(left < right){
		int middle = left + (right - left) / 2; // prevent overflow
		MergeSort(storage, left, middle);
		MergeSort(storage, middle + 1, right);
		Merge(storage, left, middle, right);	
	}
}

int main(int argc, char *argv[]){
	int number = 10;
	int array[number] = {-1, 23, 4, -8, 2, 24, 0, -11, 66, 100};
	
	cout << "Before : ";
	for(int i = 0; i < number; i++)
		cout << array[i] << setw(5);
	cout << "\n";
		
	MergeSort(array, 0, number - 1); // Merge sort
	
	cout << "After : ";
	for(int i = 0; i < number; i++)
		cout << array[i] << setw(5);
	cout << "\n";
	
	system("PAUSE");
	return 0;
}
