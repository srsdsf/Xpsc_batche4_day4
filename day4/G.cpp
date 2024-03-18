#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    set<char> st;
    for(char ch: s)
    {
        st.insert(ch);
    }
    for(char ch='a'; ch<='z'; ch++)
    {
        if(st.find(ch)==st.end())
        {
            cout<<ch<<'\n';
            return 0;
        }
  
    }
    cout<<"None"<<'\n';
       
}