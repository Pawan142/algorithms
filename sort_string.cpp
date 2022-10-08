#include<bits/stdc++.h>
using namespace std;
void MyString(string &SortStr)
{
   sort(SortStr.begin(), SortStr.end());
   cout << SortStr;
}
int main()
{
    string StrVal = "ProgrammingLanguage";
    MyString(StrVal);
    cout << "\n";
    return 0;
}
