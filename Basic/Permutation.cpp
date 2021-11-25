# include <iostream>
# include <bits/stdc++.h>
 
 using namespace std;
 
 void swap(char *a, char *b){
 	char *temp = a;
 	a = b;
 	b = temp;
 }
 
void permutation(string str, int left, int right){
	if(right == left){
		cout << str <<"\n";
	}else{
		for(int i = left; i <= right; i++){
			swap(str[left], str[i]);
			permutation(str, left + 1, right);
			swap(str[left], str[i]);	
		}
	}
}

int main(int argc, char *argv[]){
	string str = "abcd";
	int size = str.size();

	permutation(str, 0, size - 1);

	system("PAUSE");
	return 0;
}
