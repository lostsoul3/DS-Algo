//wildcard matching

#include <iostream>
using namespace std;
/*
For each element in s
If *s==*p or *p == ? which means this is a match, then goes to next element s++ p++.
If p=='*', this is also a match, but one or many chars may be available, so let us save this *'s position and the matched s position.
If not match, then we check if there is a * previously showed up,
       if there is no *,  return false;
       if there is an *,  we set current p to the next element of *, and set current s to the next saved s position.

e.g.

abed
?b*d**

a=?, go on, b=b, go on,
e=*, save * position star=3, save s position ss = 3, p++
e!=d,  check if there was a *, yes, ss++, s=ss; p=star+1
d=d, go on, meet the end.
check the rest element in p, if all are *, true, else false;
*/
bool ismatch(string s, string p)
{
    int m = s.length();
    int n = p.length();
    int i=0,j=0,asterik = -1,match;
    while(i<m)
    {
        if(j<n && p[j]='*')
        {
            asterik = j;
            j++;
            match = i;
        }
        else if(j<n && (s[i]==p[j] || p[j]='?'))
        {
            i++;j++;
        }
        else if(asterik>=0)
        {
            i=++match;
            j=asterik++;
        }
        else
            return false;
    }
    while(p[i]=='*') i++;
    return j==n;
}

int main() {
	
	return 0;
}

