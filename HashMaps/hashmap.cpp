#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main()
{
 
 unordered_map<string , int>m;

 //insertion 1
 pair<string , int>p = make_pair("shubham" , 19);
 m.insert(p);

 //2 method

 pair<string , int>pair2("singh" , 2);
 m.insert(pair2);

 //3 method

 m["mera"] = 1;
 
 //searching 

cout<<m["mera"]<<endl;
cout<<m.at("shubham")<<endl;

// cout<<m.at("unknow")<<endl;

cout<<m["unknown"]<<endl;
cout<<m.at("unknown")<<endl;

//size

cout<<m.size()<<endl;

//to check presence

cout<<m.count("myname")<<endl; // Absent return 0

cout<<m.count("shubham")<<endl; //Present return 1


//erase

m.erase("mera");

cout<<m.size()<<endl;

//Printing complete data using itreator

unordered_map<string , int> :: iterator it = m.begin();

while (it != m.end())
{
    cout<<it->first<<" "<<it->second<<endl;
    it++;
}



 
 return 0;
}