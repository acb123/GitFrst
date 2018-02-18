#include<stdio.h>
#include<iostream>
#include<stack>
#include<string.h>
using namespace std;

int main()
{
int n,k=0;
stack<char> s;
char str[100];
fgets(str,100,stdin);
int x=strlen(str);
cout<<x<<endl;
for(int i=0;i<=strlen(str);i++)
{
  if(str[i]==' ' || (i==(x-1)))
 {
   n=i-1;
   for(int j=k;j<=n;j++)
   s.push(str[j]);
   for(int j=k;j<=n;j++)
     {
	cout<<s.top();
	s.pop();
     }
     cout<<' ';
       k=i+1;
  }
}
cout<<endl;

}
