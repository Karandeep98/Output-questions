#include <bits/stdc++.h>

using namespace std;
struct student{
    string name;
    int marks;
};
bool compare(student a,student b){
    if(a.marks!=b.marks) return a.marks>b.marks;
    else return (a.name<b.name);
}
int main()
{
    student ob[5];
    for(int i=0;i<5;i++){
    cin>>ob[i].name>>ob[i].marks;
  }
  sort(ob,ob+5,compare);
  cout<<"Name\tMarks\n";
  for(int i=0;i<5;i++){
    cout<<ob[i].name<<"\t"<<ob[i].marks<<"\n";
  }
    return 0;
}
