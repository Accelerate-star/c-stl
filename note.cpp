#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int main () {
	//��char���͵�0��Ϊ1��1��Ϊ0 �� 
	char a = '1', b = '0';
	a ^= 1; b ^= 1;
	cout << a << endl << b;
	
	//�����پ������⳵���� 
	//���Ա����������ڱ�׼����ϵ�ϵľ�������ܺ͡�
	d = abs(dx1-dx2) + abs(dy1-dy2);
	
	
	//�ؾ����㷨 =����b������תΪʮ����
	int get(string s, int b) {
		int res = 0;
		
		for (auto c : s)
			res += res*b + c - '0';
		
		return res;
	}
	
	//��ͨ��һ���������ѳ�����ȡ��flood fill : dfs/bfs 
	
	��һ�����ֵõ�����  /  ��   % 
	
	
	exit(0);//������������ָ����󣻳���ִ����ֱ���˳��� 
	//����ҹ��� 
	
	
	//���a,b�����������һ��ʣ���ô��ax+by,x >=0,y>=0���ܴճ����������
	//(a-1)(b-1) -1 
	
	
	//�ж������������Ƿ���ȣ���double a, double b;
	if (abs(a-b) > 1e-8) ���
	else ����� 
	
	//printf��ǰ��0
	printf("%019d", a);
	//ָ�����λ��Ϊ19λ�����������0,���������ķ��� 
	
	algorithm�е�next_permutation(a, a+n)�ͺ���prev_permutation(a, a+n)//���ֺ��ַ����� 
	ʵ���ֵ�������ͽ����ȫ���У�ʱ�临�Ӷ�O(n) 
	
	�����dfsʵ��ȫ���У���ʱ�临�Ӷ�O(n!) 
	
	
	//��� 
#include<iostream>
#include<cmath>
using namespace std;
const int N = 1e8 + 10;
int h[N];
int main() {
    int n;
    cin >> n;
    //����ҳ�1 - n��������ȫƽ��������֮�ͣ��������ֻ�ǵ�һ�γ��֣���ĿҪ���ҳ��ֵ���С�ģ�
    for (int i = 0; i * i * 2<= n; i++) {
        for (int j = i; j * j + i * i <= n; j++) {
            if (!h[i * i + j * j])
                h[i * i + j * j] = i + 1;//��ֹi = 0ʱ�ں����жϲ������� i = 0�����
        }
    }
    //0<= a <= b <= c <= d,���Եó�a^2 <= n / 4, a^2 + b^ 2 <= n / 2; 
    for (int i = 0; i * i * 4 <= n; i++) {
        for (int j = i; j * j + i * i <= n / 2; j++) {
            int t = n - i * i - j * j;
            if (h[t]) {
                int c = h[t] - 1;   
                //��ֹ�����ź���Ϊ���ȹ�ϵ,����ȡ��,��:25 �����ŵõ�4.99999����ȡ��Ϊ4;
                int d = (sqrt(t - c * c) + 1e-4);
                printf("%d %d %d %d", i, j, c, d);
                return 0;
            }
        }
    }
    return 0;
}

���ߣ�һ��һ����
���ӣ�https://www.acwing.com/solution/content/6927/
��Դ��AcWing
����Ȩ���������С���ҵת������ϵ���߻����Ȩ������ҵת����ע��������


�ռ任ʱ�� 

//string�����пո�,�пո������������һ��string 
	return 0;
}
