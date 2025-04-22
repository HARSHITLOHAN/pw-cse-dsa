#include<iostream>
#include<string> 
#include<sstream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
//stringstream class        1 and 2nd question 


/*1.Given a string ,split every single word of the sentence and print in a new line.
{
string s="harshit is a student";
stringstream hi(s);        //s stored inside hi variable
string temp;
while(hi>>temp){           //take input from hi to temp and print temp
    cout<<temp<<endl;
}*/  

/*2.most occuring word in a string
{
string s="harshit is a ram bhakt .then is a student";
stringstream ss(s);
string temp;
vector<string>v;
int i=0,j=i+1;
while(ss>>temp){
   v.push_back(temp);      //v me storing value in v
}
sort(v.begin(),v.end());   //sorting so that get same value together
int count=1,max=0,maxcount=1;
for(int i=0;i<v.size();i++){
    if(v[i]==v[i-1]) count++;   //i uska phla vala same h then count++
    else count=1;
    if(count>maxcount){
        maxcount=count;
    }
}
//cout<<maxcount<<endl;  //here printing direct maximum count
for(int i=0;i<v.size();i++){
    if(v[i]==v[i-1]) count++;   
    else count=1;
    if(count==maxcount){     //here checking more then 1 element is same
        cout<<v[i]<<" "<<maxcount<<endl;         //then print that element to
    }
}
}*/


//stoi vs stoll built in function
{
//string s="12345678";
//int x=stoi(s);     //stoi means->string to intiger
//cout<<x;

//if the string value no is to big we use long long its size is 63 intiger size=31
//string s="1285799843275934";
//long long x=stoll(s);
//cout<<x;

/*1.given n string consisting of digits from 0 to 9 .Return the index of string which has
max value.(take 0 base indexing)
Input: 0123,0023,456,00182,940,2901
Output:5*/
string arr[]={"0123","0023","456","00182","940","2901"};
int max=stoi(arr[0]);
for(int i=1;i<=5;i++){
    int x=stoi(arr[i]);
if(x>max) max=x;
}
cout<<max;
}


