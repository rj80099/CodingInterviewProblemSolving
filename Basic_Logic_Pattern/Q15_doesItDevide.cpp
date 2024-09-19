#include <bits/stdc++.h>
using namespace std;


//ADT
/*
Data:


*/

struct Array
{
    int *A;
    int size;
    int length;
};

void append(struct Array *arr,int x)
{
    if(arr->length<arr->size)
        arr->A[arr->length++]=x;

}

void insert(struct Array *arr,int index,int x)
{
    if(index>=0 && index<=arr->length)
    {
        int i=0;
        for( i=arr->length;i>index;i--)
        {
            arr->A[i]=arr->A[i-1];
        }
        arr->A[index]=x;
        arr->length++;
    }
}


void display(struct Array arr)
{
    int i;
    cout<<"\nElement are\n";
    for(i=0;i<arr.length;i++)
        cout<<arr.A[i]<<endl;

}
int Delete(struct Array *arr, int index)
{
    int x=0;
    if(index>=0 && index<arr->length)
    {
        x= arr->A[index];
        for(int i= index;i<arr->length-1;i++)
        {
            arr->A[i]=arr->A[i+1];
        }
        arr->length--;
        return x;
    }
    return 0;
}
int main()
{
 struct Array arr;
 int n,i;
 //cout<<"Enter the size of an array";
 cin>>arr.size;
 arr.A = new int[arr.size];
 arr.length=0;

 //cout<<"Enter number of numbers";
 cin>>n;

//cout<<"Enter all elements"<<endl;
for(i=0;i<n;i++)
    cin>>arr.A[i];
arr.length=n;

append(&arr,10);
insert(&arr,0 ,54);
Delete(&arr,3);
display(arr);
 return 0;
}