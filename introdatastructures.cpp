
// This is the data type of a vector where we can store types of data in it. 
vector<string> v; 

//  we can also use an array to structure our data 
array<int, 25> arr; 

// we can use a dynamic array (vector) that resizes itself to accomadate more elements. 

vector<int> v; 
for (int i = 1; i <= 10; i++) {v.push_back(i)}

// g++ (the compiler) will allow you to make a array of variable length

int n; 
cin >> n; 
int v[n]; 

// so variable length arrays are not part of the cpp standard that's why we use
// vectors for this purpose. 

//one way 
vector<int> v(n); 

//another way 
vector<int> v; 
v.resize(n); 

// Now we can look at iteration which is the process of looking at each element
// in our data structure and applying our operation to it. 
// One way to iterate through all elements of a static or dynamic array is to
// use a regular for loop. 

vector<int> v(1, 7, 4, 5, 2); 
for (int i = 0; i < int(size(v)); i++) { cout << v[i] << " "; }

// for the second part of this for loop we have cout which means to display the
// information that is send by the vector with index i. Then we have the open
// parenthesis because we want spaces between the output numbers. Also 
// to use cout we have to #include <iostream> at the top of the program. 
// 
// But instead of using for loops we can use iterators which allow you to 
// traverse a container by pointing to an object withtin the container. 
// But they are not the same thing as pointers. 

for (vector<int>::iterator it = v.begin(); it != v.end(); ++it) {
	cout << *it << " ";
}


// another way to write this using iterators is using auto since cpp 
// automatically infers the type of an object. 

vector<int> v(1, 7, 4, 5, 2); 
for (auto it = begin(v); it != end(v); it = next(it)) {
	cout << *it << " "; 
}

//we can also use a for each loop 

for (int element: v) {
	cout << element << " "; 
}

// when we want to store pair values, maybe as coordinates in the 2D plane
// we can use this data structure. 

#include <iostream>
#include <vector>

int main() {
	pair<string, int> pair1 = make_pair("Testing", 123); 
	cout << pair1.first << " " << pair1.second << endl; 
}


// when we want to hold more than two values we can use tuples. 

tuple<int, int, int> t{3,4,5}; 
int i = 1; 
cout << get<i>(t) << endl; // not allowed! 
