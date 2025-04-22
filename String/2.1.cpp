#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
/*1.input a string and return the no of times the neighbouring characters
are different from each other.
string s;
cin>>s;
int n=s.size();
int count=0;
for(int i=0;i<n;i++){
    if(n==1){
        break;
    }
    if(n==2 && s[0]!=s[1]){
        count=1 ;
        break;
    }
    if(i==0){
    if(s[i]!=s[i+1]) count++;
    }
    else if (i==n-1){
        if(s[i]!=s[i-1]) count++;
    }
    else if(s[i]!=s[i+1] && s[i]!=s[i-1])
    count++;
}
cout<<count;
}*/

/*
//sorting a string using built in function
string s="hars+*#hit";
sort(s.begin(),s.end());
cout<<s;
}*/

/*2.given two string s and t ,return tue if t is an anagram of s,and false otherwise
input: s = physicswallah, t=wallahphysics;

string s = "physicswallah";
sort(s.begin(),s.end());
cout<<s<<endl;
string t =  "wallahphysics";
sort(t.begin(),t.end());
cout<<t<<endl;
if(s==t) cout<<"true";
else cout<<false;
}*/

/*
given a string consisting of lowercase engls alphabts.print the char that is 
occuring most no of times.

string s = "radhashyam";
int max=0;
char mostfrequencychar='\0';
for(int i=0;i<s.size();i++){
    int count = 1;
    for(int j=i+1;j<s.size();j++){
        if(s[i]==s[j]){
            count++;
        }
    }
    if(count>max){
        max=count;
        mostfrequencychar=s[i];

    }
}
cout<<mostfrequencychar<<endl;  
cout<<max<<endl;
}*/

/*or*/
string s;
vector<int>ar(26,0);
for(int i=0;i<s.length();i++){
char ch=s[i];
int ascii=(int)ch;
ar[ascii-97]++;
}
int mx=0;
for(int i=0;i<26;i++){
    if(ar[i]>mx) mx=ar[i];
}
for(int i=0;i<26;i++){
    if(ar[i]==mx){
        int ascii=i+97;
        char ch=(char)ascii;
        cout<<ch<<" "<<endl;
    }
}

}



