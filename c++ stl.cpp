#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <vector>
#include <unordered_set>
#include <unordered_map>
 
using namespace std; 
int main () {
	vector<int> a;
	vector<int> a(n); //定义长度为n的vector
	vector<int> a(n, m); //使得长度为n的vector的数均为m
	a.size() / length(); //vector的长度
	a.empty() //返回a是否为空
	a.clear() //将vector清空，什么都没有 
	a.front() a.back() //指vector的第一个和最后一个元素
	a.begin() a.end() //指vector的第一个元素指针和最后一个元素之后的一个元素的指针 
	//三种遍历方式 
	for (int i = 0; i <= a.size() - 1; i ++) cout << a[i] << " "; cout << endl; 
	for (vector<int>::iterator/auto i = a.begin(); i != a.end(); i ++) cout << *i << " "; cout << endl;
	for (auto x : a) cout << x << " ";
	//可以用> 或 < 或 == 比较vector大小（根据字典序） 
	
	pair<int, string> p;
	pair<int, pair<int, int>> 
	p.first; p.second;
	//支持比较运算（字典序）
	 
	string a, b;
	a.size(); a.empty(); a.clear();
	a += "def";
	a.substr(n); //指从n开始的所有子串 
	a.substr(n, m); //n指字符串开始的位置（指下标），m指字符串长度 
	printf("%s", a.c_str()); //printf无法输出string类型，a.c_str()返回a的首字符地址 
	int m = a.compare(b); //return a > b;
	a.find(); 
	
	queue<int> qu;
	qu.size(); qu.empty(); qu.push(); qu.pop(); qu.front(); qu.back();
	//没有clear(); 
	 
	priority_queue<int> heap; //默认为大根堆 
	priority_queue<int, vector<int>, greater<int>> qu; //小根堆;
	priority_queue<int, vector<int>, less<int>> qu; //大根堆;
	heap.push(-x); //小根堆；
	heap.push(); heap.top(); heap.pop(); heap.empty(); heap.size();
	//没有clear(); 
	
	stack<int> st;
	st.size(); st.empty(); st.push(); st.top(); st.pop();
	
	deque<int> qu;
	qu.size(); qu.empty(); qu.clear(); 
	qu.front(); / qu.back();
	qu.push_back() / qu.pop_back();
	qu.push_front() / qu.pop_front(); 
	qu.begin(); qu.end();
	//效率慢
	
	unordered_map<int, int> hash;
	unordered_map<int, int> hash;
	hash[i] += c;
	unordered_map<string, int> hash
	hash["hqj"] = 1;
	unordered_set<int> myset;
	myset.insert(num);
	myset.count(num1);//如果myset里面有num1,则返回1； 
	
	return 0;
}
