#include<iostream>
#include<string>
using namespace std;
int main(){
/*1.Input a string of size n and update all the odd positions in the string to character ‘#’. Consider 
0-based indexing.
Input : str = "Pbwcshkuiglhlds"
Output : "P#w#s#k#i#l#l#s"
input : str = "a"
Output : "a"

string sr;
cin>>sr;
for(int i=0;i<sr.length();i++){
  if(i%2==1){
    sr[i]='#';
  }
}
cout<<sr;
}
*/

/*2.Input a string of length n and count all the consonants in the given string.
Input : "pwians"
Output : 4
Input : "abdc"
Output : 37

string n;
cin>>n;
int count=0;
for(int i=0;i<n.length();i++){
    if(n[i]!='a' && n[i]!='e' && n[i]!='i' && n[i]!='o' && n[i]!='u'){
    count++;
    }
}
cout<<count;
}*/

/*3.Check whether the given string is palindrome or not.
Input : "abcde"
Output : No
Input : "abcdcba"
Output : Yes

string str="abcdcba";
int n=str.size();
bool flag=false;
int i=0,j=n-1;
while(i<=j){
    if(str[i]==str[j]){
        i++;
        j--;
        flag=true;
    }
    else{
        flag=false;
        break;
    }
}
if(flag==true){
    cout<<"it is a palindrome";
}
else{
    cout<<"not a palindrome ";
}
}
*/

/*4.Input a string of even length and reverse the second half of the string.
Input : str = "abcdefgh"
Output : abcdhgfe
Input :str = "pwians"
Output : pwisna*/


/*5.Input a string of length less than 10 and convert it into integer without using builtin function.
Input : "3244"
Output : 3244
Input : "12"
Output : 12

string str;
    cin >> str;

    int num = 0;

    for (int i = 0; i < str.length(); i++) {
        int digit = str[i] - '0'; // convert char to int
        num = num * 10 + digit;   // shift left and add digit
    }

    cout << num;
    return 0;
}*/