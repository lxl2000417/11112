#include <iostream>
#include <math.h>
using namespace std;bool prime(int n);
bool sprime(int n);
int count(int n, int m);int main()
{
int n = 0;
int m = 0;
while(1)
{
cin>>n>>m;
if(m == 0 || n == 0)
{
break;
}
cout<<count(n, m)<<' ';
}
return 0;
}bool prime(int n)
{
if(n < 2)
{
return false;
}
int m = sqrt(n);
for(int i = 2; i <= m; ++i)
{
if(n%i == 0)
{
break;
}
}
if(i > m)
{
return true;
}
else
{
return false;
}
}bool sprime(int n)
{
int m = n;
while(m > 0)
{
if(!prime(m))
{
return false;
}
m = m/10;
}
return true;
}int count(int n, int m)
{
int nCount = 0;
for(int i = n; i <= m; ++i)
{
if(sprime(i))
{
nCount++;
}
}
return nCount;
}
