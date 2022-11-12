#include<bits/stdc++.h>
using namespace std;

int main ()
{
    unordered_map<string,int>student;
    student["rayhan"]= 4278;
    student["sakib"]= 4365;
    student["shibly"]= 4258;
    student.insert({{"shahin",3243},{"samin",3456}});

    student["rayhan"]= 1278;
    //map<string,int> :: iterator it;
    for (auto it = student.begin(); it!= student.end();it++)
    {
        cout<<(*it).first << " "<<(*it).second <<endl;
    }
    return 0;
}
