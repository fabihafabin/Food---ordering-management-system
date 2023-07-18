#include<iostream>
#include <cmath>
#include <windows.h>
#include <shellapi.h>
void timewaster();
using namespace std;
void whatsmyresult()
{
    cout<<"\n\tPredicting your result in ";
   for(int i=5;i>0;i--){
    cout<<i<<" ";
    timewaster();
   }
   cout<<"--------"<<endl;



    ShellExecute(0, 0, "https://tinyurl.com/25a6wt63", 0, 0, SW_SHOW );

}
void timewaster()
{

    for(long long int i=0; i<100000000; i++){
            int j=10*i;
    }
}
int main()
{

    cout<<"\t\t ! Your Probability of Getting A+ in 207 (based on your previous results)!"<<endl;

    string name,id;


    cout<<"\n\t Please Enter you name:";
    getline(cin,name);
    cout<<"\n\t\t Please Enter your id:";
    getline(cin,id);

    whatsmyresult();



}
