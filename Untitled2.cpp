#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
using namespace std;
string s;
int main(int argc,char * argv[])
{
    int n;
    while(cin>>n)
    {
        s="";
        for(int a = n; a ;a = a/2)
        {
		//������ֻ����������������ת�������ȽϷ��㣬����ת��Ϊ�������ƿ���ʹ��switch�ṹ
                s=s+(a%2?'1':'0');
        }
        //�ַ�����ת
        //s.begin() ����ַ����Ŀ�ʼλ��
        //s.end() ����ַ����Ľ�βλ��
        std::reverse(s.begin(),s.end());
 
 
        cout<<s<<endl;
         //c_str() ��string���͵��ַ���ת��Ϊchar*
        //const char *sss=s.c_str();
        //cout.width(11);
        //cout<<n<<(n<0?"-->-":"-->")<<sss<<"\n";
 
 
    }
    return 0;
}


