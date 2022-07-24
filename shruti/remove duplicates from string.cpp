#include<iostream>
using namespace std;
int main()
{
    string str;
    cin>>str;

    int freq[26] = {0};
    string ans = "";


    for(int i=0; i<str.length(); i++)
    {
       char ch = str[i];
       int index = ch - 'a';

       if(freq[index] == 0)
       {
           ans = ans + ch;
       }

       freq[index]++;
    }

    cout<<ans;
    return 0;
}



// print values that occurs only once
/*
#include <iostream>
using namespace std;
int main()
{
    string str;
    cin >> str;
    string ans = "";

    int freq[26] = {0};

    for(char ch : str)
    {
        freq[ch - 'a']++;
    }

    for(char ch : str)
    {
        if(freq[ch - 'a'] == 1)
        {
            ans = ans + ch;
        }
    }

    cout << ans;
}
*/
