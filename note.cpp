#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int main () {
	//把char类型的0变为1，1变为0 ； 
	char a = '1', b = '0';
	a ^= 1; b ^= 1;
	cout << a << endl << b;
	
	//哈曼顿距离或出租车几何 
	//用以标明两个点在标准坐标系上的绝对轴距总和。
	d = abs(dx1-dx2) + abs(dy1-dy2);
	
	
	//秦九韶算法 =》将b进制数转为十进制
	int get(string s, int b) {
		int res = 0;
		
		for (auto c : s)
			res += res*b + c - '0';
		
		return res;
	}
	
	//连通块一般用搜索搜出来存取，flood fill : dfs/bfs 
	
	从一个数字得到坐标  /  和   % 
	
	
	exit(0);//可以用来调试指针错误；程序执行完直接退出； 
	//打表找规律 
	
	
	//如果a,b均是正整数且互质，那么由ax+by,x >=0,y>=0不能凑出的最大数是
	//(a-1)(b-1) -1 
	
	
	//判断两个浮点数是否相等，则double a, double b;
	if (abs(a-b) > 1e-8) 相等
	else 不相等 
	
	//printf补前导0
	printf("%019d", a);
	//指输出的位数为19位，如果不足则补0,包括负数的符号 
	
	algorithm中的next_permutation(a, a+n)和函数prev_permutation(a, a+n)//数字和字符都可 
	实现字典序升序和降序的全排列，时间复杂度O(n) 
	
	如果用dfs实现全排列，则时间复杂度O(n!) 
	
	
	//打表 
#include<iostream>
#include<cmath>
using namespace std;
const int N = 1e8 + 10;
int h[N];
int main() {
    int n;
    cin >> n;
    //打表，找出1 - n，所有完全平方数两两之和，如果存在只记第一次出现（题目要求找出字典序小的）
    for (int i = 0; i * i * 2<= n; i++) {
        for (int j = i; j * j + i * i <= n; j++) {
            if (!h[i * i + j * j])
                h[i * i + j * j] = i + 1;//防止i = 0时在后面判断查找跳过 i = 0的情况
        }
    }
    //0<= a <= b <= c <= d,可以得出a^2 <= n / 4, a^2 + b^ 2 <= n / 2; 
    for (int i = 0; i * i * 4 <= n; i++) {
        for (int j = i; j * j + i * i <= n / 2; j++) {
            int t = n - i * i - j * j;
            if (h[t]) {
                int c = h[t] - 1;   
                //防止开根号后因为精度关系,向下取整,例:25 开根号得到4.99999向下取整为4;
                int d = (sqrt(t - c * c) + 1e-4);
                printf("%d %d %d %d", i, j, c, d);
                return 0;
            }
        }
    }
    return 0;
}



空间换时间 

//string不能有空格,有空格代表输入了下一个string 
	return 0;
}
