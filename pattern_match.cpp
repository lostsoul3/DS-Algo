//Count of occurrences of a “1(0+)1” pattern in a string

#include <bits/stdc++.h>
using namespace std;


int countpattern(string s)
{
    int len = s.size();
    int c=0;
    int isone = 0;
    for(int i=0;i<len;i++)
    {
        if(s[i]=='1' && isone==0)
            isone = 1;
        if(s[i]!='0' && s[i]!='1')
            isone = 0;
        if(s[i]=='1' && isone == 1)
        {
            if(s[i-1]=='0')
                c++;
        }
    }
    return c;
}
int main() {
	string str = "100001abc101";
    cout << countpattern(str);
	return 0;
}

