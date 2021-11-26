# include <iostream>

using namespace std;

int FibR(int n){
	if(n == 0){
		return 0;
	}else if(n == 1){
		return 1;
	}else{
		return FibR(n - 1) + FibR(n - 2); // recursive version
	}
} 

int Fib(int num){
	if(num == 0){
		return 0;
	}else if(num == 1){
		return 1;
	}else{
		
		int a = 0, b = 1, c = 0;
		
		for(int i = 1; i < num; i++){
			c = a + b; // iterative version
			a = b;
			b = c;
		}
		
		return c;
	}
}

int main(int argc, char *argv[]){
	int number = 0;
	
	cout << "Count Fib : ";
	cin >> number;
	
	cout << "Recursive version : \n";
	cout << FibR(number) << "\n";
	
	cout << "Iterative version : \n";
	cout << Fib(number) << "\n";
	
	system("PAUSE");
	return 0;
}
