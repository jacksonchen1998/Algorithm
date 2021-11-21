# include <iostream>

using namespace std;

int BinarySearch(int* storage, int x, int num, int low, int high){
	int middle = low + (high - low) / 2; // prevent from overflow
	if(low > high)
		return -1;
		
	while(low <= high){ // boundary
		if(storage[middle] == x){
			cout << "Found " << x <<" in the index " << middle <<"\n";
			return middle;
		}else if(storage[middle] > x){
			return BinarySearch(storage, x, num, low, middle - 1);
		}else{
			return BinarySearch(storage, x, num, middle + 1, high);
		}
	}
} 

int main(char *argv[], int argc){
	int number = 10, x;
	int storage[number] = {-15, -5, 0, 1, 3, 5, 7, 9, 13, 14};
	for(int i = 0; i < number; i++)
		cout << storage[i] <<" ";
	cout << "\n";
	cout << "Find : ";
	cin >> x;
	BinarySearch(storage, x, number, 0, number - 1);
	system("PAUSE");
	return 0;
}
