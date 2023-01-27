#include <iostream>
#include<vector>


using namespace std;


void display(vector<int>&v){
    for(int i = 0 ; i<v.size();i++){
        cout<<v[i]<<"  ";
    }
    cout<<endl;
}
int main(){    


    vector<int>v1;

    int c;
    for(int i = 0; i<4 ; i++){

        cout<<"enter the data"<<endl;
        cin>>c;
        v1.push_back(c);                     
    }

    display(v1);

return 0;
}
