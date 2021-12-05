#include <iostream>
using std::cout;

int main(){
	int i =6;
	// giving another name j to the address.
	// i and j are the name of same address where 6 is stored.
	int &j = i;
	
	
	int *k;
	
	// its pointing to address of k's value's value, i.e pointing to k's value
	cout<<&*k<<'\n';
	
	// its pointing to value of k's value
	cout<<*k<<'\n';
	
	//its pointing to k's value
	cout<<k<<'\n';
	
	// its pointing to value of k's address value, i.e pointing to k's value
	cout<<*&k<<'\n';
	
	// its pointing k's address
	cout<<&k<<'\n';
	
	// it'll not work
	//cout<<**k<'\n'; // *k acts like a address in **k, but *k is itself a value(of any type) so it cant be an address. since its not an address, it'll not contain any value.
	//cout<<&&k<'\n'; // &k acts like a value in &&k, and its not stored anywhere in memory, so cant print out
	
	// *(address) -> gives value inside of that address
	// &(variable/label) -> gives address of that variable/label
	// *(const) -> error
	
	return 0;
}