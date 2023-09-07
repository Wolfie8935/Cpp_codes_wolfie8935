#include <iostream>

#include <map>

using namespace std;

int main (){

    cout<<"This is a Test program"<<endl;

    map <int,string> m;
    m[100] = "Aman";
    m[3] = "Dhruv";
    m.insert({2,"Ayushi"});
    m[7] = "Jayanth";
    m[6] = "Rishaan";

    cout<<"The dictionary made is: ";
    for (auto i:m){
        cout<<i.first<<"-->"<<i.second<<endl;
    }cout<<endl;

    m.erase(7);
    cout<<"The dictionary made after erase command is: ";
    for (auto i:m){
        cout<<i.first<<"-->"<<i.second<<endl;
    }cout<<endl;

    auto itr = m.find(3);
    for (auto i=itr; i!=m.end(); i++){
        cout<<(*i).first<<"-->"<<(*i).second<<endl;
    }cout<<endl;

    cout<<"Is 2 key present in the code: "<<m.count(1)<<endl;

    return 0;
}