//Replace 'AB' with 'C'

#include <bits/stdc++.h>
using namespace std;

string translate(string s)
{
    int n = s.length();
    for(int i=0;i<n-1;i++)
    {
        if(s[i]=='A' && s[i+1]=='B')
        {
            s[i]='C';
            for(int j=i+1;s[j]!='\0';j++)
            {
                s[j] = s[j+1];
            }
        }
    }
    return s;
}

int main() {
	string str = "helloABworldABGfG";
    cout<<translate(str);
	return 0;
}

