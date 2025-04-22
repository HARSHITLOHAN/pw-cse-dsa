#include<iostream>
#include<vector>
using namespace std;
int main()
/*{
//1.Count the number of elements strictly greater than x.
  int x;
    cout<<"the value of x is ";
    cin>>x;
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(7);
    v.push_back(4);
    v.push_back(8);
    v.push_back(1);
    int count=0;
    for(int i=0;i<6;i++){
        if(v[i]>x){
          count++;
          cout<<"element greater are = "<<v[i]<<" ";
        }
    }
        cout<<endl<<"total no of element greater then x is "<<count;
}*/

/*
//2.WAP to find the largest three elements in the array.
{
  vector<int>v;
  v.push_back(4);
  v.push_back(5);
  v.push_back(1);
  v.push_back(7);
  v.push_back(2);
  int max=INT_MIN;
  int secmax=INT_MIN;
  int thirdmax=INT_MIN;
  for(int i=0;i<v.size();i++){
    if(max<v[i]){
        thirdmax=secmax;
        secmax=max;
        max=v[i];
    }
    if(max>v[i] && secmax<v[i]){
        thirdmax=secmax;
        secmax=v[i];
    }
    if(secmax>v[i] && thirdmax<v[i]){
        thirdmax=v[i];
    }
  }
  cout<<max<<" "<<secmax<<" "<<thirdmax;
}*/

/*
//3.Check if the given array is sorted or not
{
  int arr[]={6,23,1,2,6,4,0};
  int n=sizeof(arr)/sizeof(arr[0]);
  bool asen=true,des=true;
  for(int i=0;i<n;i++){
    if(arr[i]>arr[i+1]){
      asen=false;
    }
    else{
      if(arr[i]<arr[i+1])
      des=false;
    }
  }
  if(asen){
    cout<<"are is sorted on aascending order ";
  }
  else if(des){
    cout<<"array is sorted in descending order";
  }
  else{
    cout<<"array is not sorted ";
  }
  return 0;
}
*/

/*
//4.Find the difference between the sum of elements at even indices to the sum of elements at odd 
indices.
{
int arr[]={1,2,3,4,5,6,7,8};
int n=sizeof(arr)/sizeof(arr[0]);
int even,odd,sum;
for(int i=0;i<n;i++){
  if(arr[i]%2==0){
    even=even+arr[i];
  }
  else{
    odd=odd+arr[i];
  }
}
sum=odd-even;
cout<<sum;
}
*/

/*
//5.Given an array of integers, change the value of all odd indexed elements to its second multiple 
and increment all even indexed values by 10.
{
  int arr[]={1,2,3,4,5,6,7,8};
  int n=sizeof(arr)/sizeof(arr[0]);
  for (int i = 0; i < n; i++) {
    if (i % 2 == 0) {  // Even index
        arr[i] = arr[i] + 10;
    } else {  // Odd index
        arr[i] = arr[i] * 2;
    }
}
// Printing the modified array
for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
}
return 0;
}*/

/*
//6.Find the unique number in a given Array where all the elements are being repeated twice with one 
value being unique.
{
  
  int arr[]={1,1,3,7,5,3,7};
  int n=sizeof(arr)/sizeof(arr[0]);
  int i;
  bool flag;
  for(i=0;i<n-1;i++){
    flag=true;                //every element is unique
    for(int j=i+1;j<n;j++){
      if(arr[i]==arr[j]){
      flag=false;         
      }
  }
  if(flag){     //if flag means -->it is true some num uniqe print it.
    cout<<arr[i];
  }
}
}
*/

/*
//Words: madam, racecar, level                        this are palindrome
//Numbers: 121, 1331, 12321
//7.If an array arr contains n elements, then check if the given array is a palindrome or not.
{
int arr[7]={1,2,3,4,3,2,1};
int n=sizeof(arr)/sizeof(arr[0]);
int *ptr=&arr[0];
int *ptr1=&arr[n-1];
bool flag=true;
for(int i=0;i<n;i++){
  if(*ptr!=*ptr1){
    flag=false;
    break;                     //as break applied its come out from loop
  }
  ptr++;                   //it is for if == then ++ and --;
  ptr1--;
}
if(flag==true){
  cout<<"palindrome";
}
else{
  cout<<"not a palindrome";
}
}*/
