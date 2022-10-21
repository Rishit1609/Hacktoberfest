#include <iostream>
using namespace std;

int main() {
	//code
	int n;
	cin>>n;
	for (int i = 0; i < n; i++) {
	    int size;
	    cin>>size;
	    int arr[size], rev[size];
	    for(int j = 0; j < size; j++) {
	        cin>>arr[j];
	        rev[size-j-1]=arr[j]; 
	    }
	    for(int j = 0; j < size; j++) {
	        cout << rev[j] << " ";
	    }
	    cout << endl;
	}
	return 0;
}
