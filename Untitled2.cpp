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
		//二进制只有两个基数，所以转换起来比较方便，若是转换为其他进制可以使用switch结构
                s=s+(a%2?'1':'0');
        }
        //字符串反转
        //s.begin() 获得字符串的开始位置
        //s.end() 获得字符串的结尾位置
        std::reverse(s.begin(),s.end());
 
 
        cout<<s<<endl;
         //c_str() 将string类型的字符创转化为char*
        //const char *sss=s.c_str();
        //cout.width(11);
        //cout<<n<<(n<0?"-->-":"-->")<<sss<<"\n";
 
 
    }
    return 0;
}


