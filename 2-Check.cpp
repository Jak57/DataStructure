#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, i;
    cin>> n >> i;

    if((n & (1 << i)) != 0)
        cout<< i << " th bit is set" << "\n";
    else
        cout<< i << " th bit is not set" << "\n";


    return 0;
}
/*
22 2
*/

//Another Approach

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, cnt = 0;
    cin>> n;

    while(n > 0){
        cnt++;
        n = (n & (n-1));
    }

    cout<< cnt << "\n";

    return 0;
}
