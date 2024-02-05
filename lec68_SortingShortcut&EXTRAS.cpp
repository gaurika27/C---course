#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    
    int arr[] = {4,2,1};

    sort(arr, arr+3);
    
    cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2];
    
    return 0;
}

//
/*
1) 
sort(a, a+n);

2)
sort(v.begin(), v.end());

3)
sort(a+2,a+4);

4)
sort(a, a+n, greater<int>); //in order to sort it in descending order. we use this

5)
sort it according to the second element. if second element is same, then sorrt it according to the first element but in desscending order.

pair<int,int> a[]={{1,2},{2,1},{4,1}}; 
sort(a, a+n, comp) 
output: {4,1},{2,1},{1,2}

//now what is comp?
bool comp(pair<int, int> p1, pair<int, int> p2){
  if(p1.second<p2.second) return true;
  if(p1.second>p2.second) return true;

  //they are same
  if(p1.first>p2.first) return true;
  return false
}

7)
int num=7;
int cnt=__builtin_popcount();
//returns the counts of 1's in the binary form of the given number

long long num=122324289899;
int cnt=__builtin_popcountll();
//returns the count of number of 1's in the binary from the given long long

8)
string s="123";
//you should use sorteed string before finding out all its permutations
sort(s.begin(), s.end());

do{
  cout<<s<<endl;
}while(next_permutation(s.begin(), s.end()));

9)
to find the max element in the given data structure
int maxi=*max_element(a,a+n);


*/