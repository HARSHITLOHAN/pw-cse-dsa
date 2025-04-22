    #include<iostream>
    using namespace std;
    int main(){
/*  
//5. find the element x in the array .take array and x as input; (linear search)
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    int x=5;
    bool flag=false;
    for(int i=0;i<=n-1;i++){
        if(arr[i]==x)
            flag=true;}
            cout<<"hurrae we got element";
        }
        else{
            cout<<"x is not present ";       //it is printing multiple time i want only onw time
        }
        if(flag==true)
            cout<<"element found";
        else
            cout<<"element not found in an array";
*/

/*
//6. find the maximum value out of all the elements in the array.

     int arr[6]={8,2,9,1,23,5};
     //int max=arr[0];
     int max=INT_MIN;
     for(int i=1;i<=5;i++){
        if(max<arr[i]){
            max=arr[i];
        }
     }
     cout<<max;
*/

/*
//7. Second largest element in an array.
    int arr[6]={8,2,9,1,23,5};
     int max={INT_MIN};
     for(int i=0;i<=5;i++){
        if(max<arr[i]){
            max=arr[i];      //keep puting value greater then max until the loop end
        }
     }
     int secmax=INT_MIN;
     for(int i=0;i<=5;i++){
        if(arr[i]!=max && secmax<arr[i]){
            secmax=arr[i];
        }
     }
     cout<<max<<endl;
     cout<<secmax;
*/

/*
//8.count no of element in given array greater than a given no x;
int arr[]={1,2,3,4,4,5};
int n=sizeof(arr)/sizeof(arr[0]);
int count=0,x=3;
for(int i=0;i<n;i++){
    if(arr[i]>=x){
        count++;
        cout<<"element greater then "<<x<<"; "<<arr[i]<<endl;
    }
}
cout<<"total element greater then x is "<<count;*/
}