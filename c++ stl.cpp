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
	vector<int> a(n); //���峤��Ϊn��vector
	vector<int> a(n, m); //ʹ�ó���Ϊn��vector������Ϊm
	a.size() / length(); //vector�ĳ���
	a.empty() //����a�Ƿ�Ϊ��
	a.clear() //��vector��գ�ʲô��û�� 
	a.front() a.back() //ָvector�ĵ�һ�������һ��Ԫ��
	a.begin() a.end() //ָvector�ĵ�һ��Ԫ��ָ������һ��Ԫ��֮���һ��Ԫ�ص�ָ�� 
	//���ֱ�����ʽ 
	for (int i = 0; i <= a.size() - 1; i ++) cout << a[i] << " "; cout << endl; 
	for (vector<int>::iterator/auto i = a.begin(); i != a.end(); i ++) cout << *i << " "; cout << endl;
	for (auto x : a) cout << x << " ";
	//������> �� < �� == �Ƚ�vector��С�������ֵ��� 
	
	pair<int, string> p;
	pair<int, pair<int, int>> 
	p.first; p.second;
	//֧�ֱȽ����㣨�ֵ���
	 
	string a, b;
	a.size(); a.empty(); a.clear();
	a += "def";
	a.substr(n); //ָ��n��ʼ�������Ӵ� 
	a.substr(n, m); //nָ�ַ�����ʼ��λ�ã�ָ�±꣩��mָ�ַ������� 
	printf("%s", a.c_str()); //printf�޷����string���ͣ�a.c_str()����a�����ַ���ַ 
	int m = a.compare(b); //return a > b;
	a.find(); 
	
	queue<int> qu;
	qu.size(); qu.empty(); qu.push(); qu.pop(); qu.front(); qu.back();
	//û��clear(); 
	 
	priority_queue<int> heap; //Ĭ��Ϊ����� 
	priority_queue<int, vector<int>, greater<int>> qu; //С����;
	priority_queue<int, vector<int>, less<int>> qu; //�����;
	heap.push(-x); //С���ѣ�
	heap.push(); heap.top(); heap.pop(); heap.empty(); heap.size();
	//û��clear(); 
	
	stack<int> st;
	st.size(); st.empty(); st.push(); st.top(); st.pop();
	
	deque<int> qu;
	qu.size(); qu.empty(); qu.clear(); 
	qu.front(); / qu.back();
	qu.push_back() / qu.pop_back();
	qu.push_front() / qu.pop_front(); 
	qu.begin(); qu.end();
	//Ч����
	
	unordered_map<int, int> hash;
	unordered_map<int, int> hash;
	hash[i] += c;
	unordered_map<string, int> hash
	hash["hqj"] = 1;
	unordered_set<int> myset;
	myset.insert(num);
	myset.count(num1);//���myset������num1,�򷵻�1�� 
	
	return 0;
}
