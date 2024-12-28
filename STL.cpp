// Ekramul-Haque
// In The Name of Almighty ALLAH
#include <bits/stdc++.h>
using namespace std;

void print(auto container){
	for(auto item : container){
		cout<<item<<" ";
	}
	cout<<endl;
}

// <-------------------------------------------------------------->
void Pair(){
// Pair <type, type> variable_name = {value, value}; utility library

	// Single Pair
	pair<string, int> p = {"age", 22};
	cout<< p.first << " is: "<<p.second<<endl;

	// Nested Pair
	pair<string, pair<double, int>> student = {"Ekramul", {3.99, 22}};
	cout<< "Student Name: "<<student.first
	<<", CGPA: "<<student.second.first
	<<", Age: "<<student.second.second<<endl;

	// Pair Array
	pair<string, string> persons[] = {{"person1", "Ekramul"}, {"person1", "Enjamul"}, {"person3", "Rahim"}, {"person4", "Karim"}};
	cout<< persons[0].first << ": " << persons[0].second << " || "
		<< persons[3].first << ": " << persons[3].second;
}

void Vector(){
	vector<int> nums;
	nums.push_back(1);
	nums.emplace_back(2);
	
	vector<pair<int, int>> points;
	points.push_back({1,2});
	points.emplace_back(1, 2);  // Directly constructs the Point object in place

	//          marks(size_of_container(vector), element filled with)
	vector<int> marks(5, 100 ); // fill out first 5 element with 100 {100, 100, 100, 100, 100}
	vector<int> marks_(2); // fill out first 2 element with garbage_value {garbage_value, garbage_value}
	for(int i=0; i<5; cout<< marks[i++]<< " ");
		cout<<endl;

	vector<int> marks2(marks); // Copy of marks in marks2 {100, 100, 100, 100, 100}
	for(int i=0; i<5; cout<< marks2[i++]<< " ");
		cout<<endl;

	// Access vector elements same as array: marks[index]
	cout<< marks[1]<<endl;
	// Access vector elements with method: marks.at(index)
	cout<< marks.at(1)<<endl;
}

void Vector_Methods(){
// Vector Necessary Methods

	vector<int> marks;
	marks.push_back(10);
	marks.push_back(20);
	marks.push_back(30);
	marks.push_back(40); 
	marks.push_back(50); 

	// iterator points to the memory
	vector<int>::iterator copyMarks = marks.begin(); // .begin() returns address of first element not value
	cout<<*++copyMarks<<endl; // copyMarks is address to get value, use pointer *
	cout<<*marks.begin()<<endl;
	// {1,2,3}* .end() will points in address of star position. Outside of vector.
	cout<<*--marks.end()<<endl; // To get last value we have to decrement address by 1.
	
	cout<<*--marks.rend()<<endl; // *{1,2,3} points in address of star position. before the vector.
	// {1,2,3} .rbegin() will point in address of 3;
	cout<<*marks.rbegin()<<endl;
	cout<<*++marks.rbegin()<<endl; // ++ will get the pointer in address of 2 of {1,2,3}

	cout<<marks[0]<< " "<< marks.at(0)<<endl; // return value at index 0
	cout<<marks[marks.size()-1]<< " "<< marks.back()<<endl; // return value at last index


	// Printing in vector
	for(int i=0; i<marks.size(); cout<<marks[i++]<<" "); cout<<endl;

	for(vector<int>::iterator i = marks.begin(); i!=marks.end(); i++){
		cout<<*i<<" ";
	}cout<<endl;

	// auto identify vector<int>::iterator || auto a=5; int a=5; same. auto identify type
	for(auto i = marks.begin(); i!=marks.end(); i++){
		cout<<*i<<" ";
	}cout<<endl;
	
	for(int mark : marks){ // for each loop
		cout<< mark << " ";
	}cout<<endl;


	// Deleting in vector
	vector<int> nums = {1,2,3,4,5,6,7,8};
	nums.erase(nums.begin()+1); // delete 2. update: {1,3,4,5,6,7,8}
	nums.erase(nums.begin(), nums.begin()+3); // Delete 1,3,4 not 5. [start, end]. end is not included in deleting. delete: start to <end. start<=delete<end
	nums.clear(); // Delete all item in vector nums

	// Inserting in vector
	vector<int> n = {1,2,3,4,5}; // {1,2,3,4,5}
	n.insert(n.begin(), 0); // {0,1,2,3,4,5}
	n.insert(n.begin()+2, 3, 50); // {0,1,50,50,50,2,3,4,5} insert 3 item of 50
	
	vector<int> a = {1,2,3};
	vector<int> b = {4,5,6};
	b.insert(b.begin(), a.begin(), a.end()); // Insert all item of a into begin(0th index) position of vector b.

	// Others methods
	nums.clear();
	nums = {1,2,3,4}; // vector<int> nums = {1,2,3,4}
	nums = {5,6}; // Now it become nums = {5,6};

	cout<<"Size of Vector: "<< nums.size()<<endl;
	nums.pop_back(); // remove the last element of vector

	a = {1,2,3};
	b = {4,5,6};

	a.swap(b); // swap the items inside them

	cout<<"Is vector Empty(true/false-1/0): "<<a.empty()<<""<<endl;
	a.clear();
	cout<<"Is vector Empty(true/false-1/0): "<<a.empty()<<""<<endl;


	a = {1,2,3,4,5};
	// a.push_front(0); // Not available in vector
	cout<<"Front Item is: "<<a.front()<<endl;
	cout<<"Front Item is: "<<a.back()<<endl;
}

void List(){
	list<int> ls;
	ls.push_back(1); // {1}
	ls.emplace_back(2); // {1, 2}

	ls.push_front(0); // {0, 1, 2}
	ls.emplace_front(-1); // {-1, 0, 1, 2}

	cout<<"Front Item is: "<<ls.front()<<endl;
	cout<<"Front Item is: "<<ls.back()<<endl;

	// Rest functions are same as vector
	// begin, end, rbegin, rend, clear, insert, size, swap
}

void Deque(){
	deque<int> dq;

	dq.push_back(1); // {1}
	dq.emplace_back(2); // {1, 2}

	dq.push_front(0); // {0, 1, 2}
	dq.emplace_front(-1); // {-1, 0, 1, 2}

	cout<<"Front Item is: "<<dq.front()<<endl;
	cout<<"Front Item is: "<<dq.back()<<endl;

	// Rest functions are same as vector
	// begin, end, rbegin, rend, clear, insert, size, swap
}

void Stack(){ // LIFO: Last In First Out
	stack<int> st;

	st.push(1);
	st.push(2);
	st.emplace(3);

	cout<<"Top item in stack is: "<<st.top()<<endl; // 3

	st.pop(); // remove the top element
	cout<<"Top item in stack is: "<<st.top()<<endl; // 2

	cout<<"Size of stack is: "<<st.size()<<endl; // 2
	st.push(100);
	cout<<"Size of stack is: "<<st.size()<<endl; // 3

	cout<<"Is stack is empty?: "<<st.empty()<<endl; // 0

	stack<int> a; a.push(1); a.push(2); a.push(3);
	stack<int> b; b.push(4); b.push(5); b.push(6);
	cout<<a.top()<<endl;
	cout<<b.top()<<endl;

	a.swap(b); // Swap all the stack elements
	
	cout<<a.top()<<endl;
	cout<<b.top()<<endl;
}

void Queue(){ // FIFO: First In First Out
	queue<int> qu;

	qu.push(1); // {1}
	qu.push(2); // {1,2}
	qu.emplace(3); // {1,2,3}
	cout<<"Back item of Queue is: "<<qu.back()<<endl; // 3
	qu.back()+=2; // 3 becomes 5;
	cout<<"Back item of Queue is: "<<qu.back()<<endl; // 5

	cout<<"Front item in Queue is: "<<qu.front()<<endl; // 1

	qu.pop(); // remove the first element. {2,5}
	cout<<"Front item in Queue is: "<<qu.front()<<endl; // 2

	cout<<"Size of Queue is: "<<qu.size()<<endl; // 2
	qu.push(100);
	cout<<"Size of Queue is: "<<qu.size()<<endl; // 3

	cout<<"Is Queue is empty?: "<<qu.empty()<<endl; // 0/false

	queue<int> a; a.push(1); a.push(2); a.push(3);
	queue<int> b; b.push(4); b.push(5); b.push(6);
	cout<<a.front()<<endl;
	cout<<b.front()<<endl;

	a.swap(b); // Swap all the queue elements
	
	cout<<a.front()<<endl;
	cout<<b.front()<<endl;
}

void Priority_Queue(){
	
}

int main(){
	// Pair();
	// Vector();
	// Vector_Methods();
	// List();
	// Deque();
	// Stack();
	// Queue();
	Priority_Queue();
}
