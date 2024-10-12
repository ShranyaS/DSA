#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;
int main(){
    unordered_map<string, int> m;

    //insertion 1
    pair<string, int> p = make_pair ("Shranya", 19);
    m.insert(p);

    //2
    pair<string, int> pair2("Singla", 20);
    m.insert(pair2);

    m["Shranya"] = 21;
    cout<<m["Singla"]<<endl;
    cout<<m.at("Shranya")<<endl;
//if we access first by line 21 then an entry will be made for the key corresponsind to 0
//but if we access first by line 22 then it will show error
    cout<<m["UnknownKey"]<<endl;
    cout<<m.at("UnknownKey")<<endl;

    //size
    cout<<m.size()<<endl;

    //count
    cout<<m.count("hi")<<endl;

    //erase
    m.erase("Singla");
    cout<<m.size();
}