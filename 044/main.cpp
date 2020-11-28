#include <bits/stdc++.h>

using namespace std;
class Student{
public:
    string name;
    int marks;
};
bool compare(Student a,Student b){
    if(a.marks!=b.marks)
    return (a.marks>b.marks);
    for(int i=0;i<a.name.size();i++){
        if(!islower(a.name[i])){
            a.name[i] += 'a'-'A';
        }
    }
    for(int i=0;i<b.name.size();i++){
        if(!islower(b.name[i])){
            b.name[i] += 'a'-'A';
        }
    }
    return (a.name<b.name);
}
int main()
{
    int n;
    cin>>n;
     Student s[n];
     for(int i=0;i<n;i++){
        cin>>s[i].name>>s[i].marks;
     }
    sort(s,s+n,compare);
    for(int i=0;i<n;i++){
        cout<<s[i].name<<" "<<s[i].marks<<endl;
    }




    return 0;
}
