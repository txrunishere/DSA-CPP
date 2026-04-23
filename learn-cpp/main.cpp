// #include <bits/stdc++.h> // import all libraries
// #include <math.h> // for mathematics related functions

#include <iostream> // library provided by c++ for input and output operations only
#include <vector>		// takes vector to the file
#include <list>			// takes list to the file
#include <stack>
#include <queue>
#include <set>
#include <unordered_set>
#include <map>

using namespace std;

void input_number()
{
	int x;
	cout << "Enter the value of x : ";
	cin >> x;

	cout << "Value of x is: " << x << "\n";
}

void sum_of_two_numbers()
{
	int a, b;
	cout << "Enter the value of 'a' and 'b': ";
	cin >> a >> b;
	cout << "Sum of " << a << " and " << b << " is: " << a + b << "\n";
}

void string_input()
{
	string greet;
	// getline function is used to take whole line as input
	getline(cin, greet);
	cout << greet << "\n";
}

void conditional_statements()
{
	int age;
	cout << "Enter your age: ";
	cin >> age;

	if (age >= 18)
	{
		cout << "You are adult" << "\n";
	}
	else
	{
		cout << "You are not adult" << "\n";
	}
}

void conditional_problem()
{
	int marks;
	cout << "Enter your marks: ";
	cin >> marks;

	// if (marks < 25) {
	// 	cout << "F" << "\n";
	// } else if (marks >= 25 && marks <= 44) {
	// 	cout << "E" << "\n";
	// } else if (marks >= 45 && marks <= 49) {
	// 	cout << "D" << "\n";
	// } else if (marks >= 50 && marks <= 59) {
	// 	cout << "C" << "\n";
	// } else if (marks >= 60 && marks <= 79) {
	// 	cout << "B" << "\n";
	// } else if (marks >= 80 && marks <= 100) {
	// 	cout << "A" << "\n";
	// }

	/*
		OPTIMIZED
	*/

	if (marks < 25)
	{
		cout << "F" << "\n";
	}
	else if (marks <= 44)
	{
		cout << "E" << "\n";
	}
	else if (marks <= 49)
	{
		cout << "D" << "\n";
	}
	else if (marks <= 59)
	{
		cout << "C" << "\n";
	}
	else if (marks <= 79)
	{
		cout << "B" << "\n";
	}
	else if (marks <= 100)
	{
		cout << "A" << "\n";
	}
}

void switch_problem()
{
	int day;
	cout << "Enter a day index (0-6): ";
	cin >> day;

	switch (day)
	{
	case 1:
		cout << "Monday" << "\n";
		break;
	case 2:
		cout << "Tuesday" << "\n";
		break;
	case 3:
		cout << "Wednesday" << "\n";
		break;
	case 4:
		cout << "Thursday" << "\n";
		break;
	case 5:
		cout << "Friday" << "\n";
		break;
	case 6:
		cout << "Saturday" << "\n";
		break;
	case 0:
		cout << "Sunday" << "\n";
		break;
	default:
		cout << "Not a valid day" << "\n";
	}
}

void learn_pairs()
{
	pair<int, int> p = {1, 3};
	cout << p.first << " " << p.second << "\n";

	pair<int, pair<string, string>> nested_pair = {1, {"name", "tarun"}};
	cout << nested_pair.second.second << "\n";

	pair<int, string> users[] = {
			{1, "tarun"},
			{2, "raman"},
			{3, "sukha"},
			{4, "bhalu"}};

	for (int i = 0; i < size(users); i++)
	{
		cout << users[i].first << ": " << users[i].second << "\n";
	}
}

void learn_vectors()
{
	vector<int> v = {100, 2, 3, 4, 5};
	// v.push_back(6);

	// cout << v[v.size() - 1] << endl;

	// vector<int> v1(5, 100);
	// cout << v1[0] << endl;
	// cout << v1.size() << endl;

	// vector<int>::iterator it = v.begin();
	// for (int i = 0; i < v.size(); i++) {
	// 	cout << *(it) << endl;
	// 	it++;
	// }

	// --------- PRINT ---------
	// vector<int>::iterator it = --v.end(); // v.end() gives v.size() index
	// cout << *(it) << endl;

	// for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
	// 	cout << *(it) << endl;
	// }

	// for (auto it = v.begin(); it != v.end(); it++) {
	// 	cout << *(it) << " ";
	// }

	// --------- ERASE ---------
	// v.erase(v.begin() + 2, v.begin() + 4);

	// for (auto it = v.begin(); it != v.end(); it++) {
	// 	cout << *(it) << " ";
	// }
	// cout << "\n";

	// --------- INSERT ---------
	// vector<int> v1(5, 10);
	// for (auto i: v1) {
	// 	cout << i << " ";
	// }
	// cout << "\n";

	// v.insert(v.begin(), 300);
	// for (auto it = v.begin(); it != v.end(); it++) {
	// 	cout << *(it) << " ";
	// }
	// cout << "\n";

	// v.insert(v.begin(), 2, 300);
	// for (auto it = v.begin(); it != v.end(); it++) {
	// 	cout << *(it) << " ";
	// }
	// cout << "\n";

	// vector<int>copy(2, 50);
	// v.insert(v.begin() + 1, copy.begin(), copy.end());
	// for (auto it = v.begin(); it != v.end(); it++) {
	// 	cout << *(it) << " ";
	// }
	// cout << "\n";

	// --------- OTHER OPERATIONS ---------

	// returns size of the vector
	cout << v.size() << endl;

	// remove the last element in the vector
	v.pop_back();
	cout << v[v.size() - 1] << endl;

	// returns boolean values on the basis of is vector is empty or not
	cout << v.empty() << endl;

	// get last and front element
	cout << "Last element " << v.back() << endl;
	cout << "Front element " << v.front() << endl;

	// clear the entire vector or remove all elements in an vector
	v.clear();
}

void learn_list()
{
	list<int> l;

	l.push_back(2);
	l.emplace_back(4);

	l.push_front(1);

	for (list<int>::iterator it = l.begin(); it != l.end(); it++)
	{
		cout << *(it) << endl;
	}
}

void learn_stack()
{
	stack<int> st;

	// push values in stack
	// in stack, values always insert from top
	st.push(1);
	st.push(2);
	st.push(3);
	st.push(4);
	// {4, 3, 2, 1}

	// returns top element or element at st[0]
	cout << st.top() << endl;

	// remove value from stack
	st.pop();
	cout << st.top() << endl;

	// returns size of the stack
	cout << "Size of stack: " << st.size() << endl;

	cout << st.empty() << endl;
}

void learn_queue()
{
	queue<int> q;
	q.push(10); // {10}
	q.push(20); // {10, 20}
	q.push(12); // {10, 20, 12}

	cout << q.back() << endl;
	cout << q.front() << endl;

	q.pop(); // {20, 12}

	cout << q.front() << endl;
}

void learn_priority_queue()
{
	// maximun heap
	priority_queue<int> pq;
	pq.push(5);	 // {5}
	pq.push(2);	 // {5, 2}
	pq.push(8);	 // {8, 5, 2}
	pq.push(10); // {10, 8, 5, 2}
	cout << pq.top() << endl;

	// minimum heap
	priority_queue<int, vector<int>, greater<int>> mpq;
	mpq.push(5);	// {5}
	mpq.push(2);	// {2, 5}
	mpq.push(8);	// {2, 5, 8}
	mpq.push(10); // {2, 5, 8, 10}

	cout << mpq.top() << endl;
}

void learn_set()
{
	// store only unique element in sorted order
	set<int> s;
	s.insert(10);
	s.insert(12);
	s.emplace(12);
	s.insert(32);
	s.insert(24);
	s.insert(115);

	auto it = s.find(10); // returns a iterator which points to the passed element if the element is not found it returns set.end()
	// cout << *(it) << endl;

	s.erase(12);

	// for (auto it = s.begin(); it != s.end(); it++) {
	// 	cout << *(it) << endl;
	// }

	// multiset can store multiple same values
	multiset<int> ms;
	ms.insert(1);
	ms.insert(1);
	ms.insert(1);
	ms.insert(10);

	// ms.erase(1); // erase / remove all occurence

	// for (auto it = ms.begin(); it != ms.end(); it++) {
	// 	cout << *(it) << endl;
	// }

	// cout << ms.count(1) << endl;

	// unordered_set are store unique elements but not in sorted order positions are random
	unordered_set<int> us;
}

void learn_map()
{
	// map store uniques keys in sorted order
	map<int, int> m;
	// map<int, pair<int, int>> m;
	// map<pair<int, int>, int> m;

	m[1] = 10;
	m.emplace(3, 6);
	m.emplace(2, 40);
	m.insert({2, 44});

	for (auto i : m)
	{
		cout << i.first << " - " << i.second << endl;
	}
}

int main()
{
	// input_number();
	// sum_of_two_numbers();
	// string_input();
	// conditional_statements();
	// conditional_problem();
	// switch_problem();

	// string name = "john";
	// cout << &name << endl;

	/*
		// ------------ find length of array ------------
		int arr[] = {1, 2, 3};
		cout << size(arr) << "\n";

		// ------------ find length of string ------------
		string name = "sukha singh";
		cout << name.length() << "\n";
	*/

	// string arr[] = {"tarun", "john", "sukha", "pappu"};

	// for (auto name: arr) {
	// 	cout << name << " ";
	// }
	// cout << "\n";

	// learn_pairs();
	// learn_vectors();
	// learn_list();
	// learn_stack();
	// learn_queue();
	// learn_priority_queue();
	// learn_set();
	// learn_map();

	cout << "Hello World" << endl;

	return 0;
}
