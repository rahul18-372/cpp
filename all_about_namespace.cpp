#include <iostream>
//using namespace std;

namespace A {
	int val = 2;
	void func(){
	std::cout<<"Hello World!";
	}
}


//this is bad practice because we are injecting all code declation inside namespace in our global scope,
// so incase if we want to decalre our own global varibale and if it matches with the namsescape variable, then you're fuckedup.
// we can restrict its scope to local scope instead of global scope by using it inside a function.
//using namespace A;

//this is good practice but, still not too good because name can conflict here also the only thing is good is that we're not injecting all code, and
// since we know what variable or function we're importing to global scope, so we know that we shouldn't use the same name in our global scope
//using A::func;
using A::val;

// when using same variable name or function name as of namespace we can have an error, 
// because the scope of namespace is global and scope of our variable is also global. 
// so we have actually declared same variable 2 times in the same scope.
//int val = 5;

int main(){
	
	// here we can decalre the variable of same name as it is in namsescape, because scope isn't same.
	//int val =7;
	
	
	// without using "using namespace NAME_OF_NAMESPACE", 
	// we can use namespace name followed by scope resolution operator then the function or varibale that we want to execute.
	//A::func();
	//cout<<A::val;
	
	// if we use "using namespace NAME_OF_NAMESPACE" explicitly above main function, 
	//than we dont need to add namespace before function or variable that are inside of that NAME_OF_NAMESPACE.
	//func();
	cout<<val;
	return 0;
}