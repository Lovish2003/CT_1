//name:lovish
//roll no:2010990429
#include <bits/stdc++.h>
using namespace std;
bool checkPair(int arr[], int size, int target) {
for (int i=0;i<(size-1);i++) {
	for (int j=i+1;j<size;j++) {
	if (arr[i]+arr[j]==target) {
		cout << "Pair found"  <<"(" << arr[i] << ", " << arr[j] << ")" <<endl;
		return 1;
	}
	}
}
return 0;
}
int main() {
int arr[6]={8,7,2,5,3,1};
int target=13;
int size=sizeof(arr)/sizeof(arr[0]);
if(checkPair(arr,size,target)) {
	cout << "" << endl;
} else {
	cout <<"Pair Not Found"<< endl;
}
return 0;
}

