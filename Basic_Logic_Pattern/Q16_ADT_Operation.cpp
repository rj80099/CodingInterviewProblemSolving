
#include <bits/stdc++.h>
using namespace std;

//In c language
// struct Array  
// {
//     int *A;
//     int length;
//     int size;
// };

//c++
class Array  
{
private:
    int *A;
    int length;
    int size;
    void swap(int *x, int *y); // to be used by other function.
public:
    Array()
    {
        size=10;
        length=0;
        A= new int[size];
    }
    Array(int sz)
     {
        size=sz;
        length=0;
        A= new int[size];
    }

    ~Array(){
        delete []A;
    }
//operation on array
void displayData();
void addData(int x);
int deleteData(int index);
void insertData(int index, int x);

//search
int linearSearch(int key);
int binarySearch(int key);
int RBinarySearch( int low, int high, int key);

//
int get(int index);
void set(int index, int x); 
int max();
int min();
float avg();
int sum();
void reverseUsingArray();
void reverseUsingSwap();
void leftShift();
void rightShift();
void insertSort(int x);
bool isSorted();
void rearrangeElem();
Array* Merge(Array arr2); //first array is itself
Array* Union(Array arr2);
Array* Intersection(Array arr2);
Array* Difference(Array arr2);

};




void Array::addData( int x)
{
    if(length < size)
    {
        A[length++]=x;
    }
}

void Array::insertData( int index, int x)
{
    if(index >= 0 && index<=length)
    {
        for(int i=length; i>index;i--)
        {
            A[i]=A[i-1];
        }
        A[index]=x;
        length++;
    }
}
int Array::deleteData(int index)
{
    int x=-1;
    if(index>=0 && index <= length)
    {
        x=A[index];
        for(int i=index; i<length-1;i++)
        {
            A[i]=A[i+1];
        }
        length--;
    }
    return x;
}
void Array::displayData()
{
    for(int i=0;i<length;i++)
        cout <<A[i]<<" ";
}

int Array::linearSearch(int key)
{
    for(int i=0;i<length;i++)
    {
        if(A[i]== key)
        {
            swap(&A[i],&A[0]);
            return i;
        }
    }
    return -1;
}

int Array::binarySearch( int key)
{
    int low=0,high=length-1;
    while(low<=high)
    {
        int mid = (low+high)/2;
        if(A[mid]==key)
            return mid;
        else if (key<mid)
            high =mid-1;
        else
            low = mid+1;
    }
    return -1;
}

int Array::RBinarySearch(int low, int high, int key )
{
    if(low<=high)
    {
        int mid =(low+high)/2;
        if(A[mid]==key)
            return mid;
        else if (key<A[mid])
            return RBinarySearch(low,mid-1,key);
        else 
            return RBinarySearch(mid+1,high,key);
    }
    return -1;
}
void swap(int *x, int *y)
{
    int temp = *x;
    *x=*y;
    *y=temp;
}

int Array::get(int index)

{
    if(index>=0 && index<length)
        return A[index];
}
void Array::set(int index,int x)

{
    if(index>=0 && index<length)
        A[index]=x;
}

int Array::max()
{
    int max = A[0];
    for(int i=0;i<length;i++)
    {
        if(A[i]>max)
            max=A[i];
    }
    return max;
}

int Array::min()
{
    int min = A[0];
    for(int i=0;i<length;i++)
    {
        if(A[i]<min)
            min=A[i];
    }
    return min;
}
int Array::sum()
{
    int sum=0;
    for(int i=0;i<length;i++)
    {
        sum+=A[i];
    }
    return sum;
}
float Array::avg()
{
    return (float)sum()/length;
}

void Array::reverseUsingArray()
{
    int *B = new int[length];
    for(int i=length-1,j=0;i>0;i--,j++)
        B[j]=A[i];
    for(int i=0;i<length;i++)
        A[i]=B[i];
}

void Array::reverseUsingSwap()
{
    for(int i=0,j=length-1;i<j;i++,j--)
    {
        int temp=A[i];
        A[i]=A[j];
        A[j]=temp;
    }
}
void Array::leftShift()
{
    for(int i=0;i<length-1;i++)
        A[i]=A[i+1];
    length--;
}

void Array::rightShift()
{
    if(length<size)
    {
        for(int i=length;i>0;i++)
            A[i]=A[i-1];
        length++;
    }
}

void Array::insertSort(int x)
{
    int i=length-1;
    if(length==size)
        return;
    while(i>=0 && A[i]>x)
    {
        A[i+1]=A[i];
        i--;
    }
    A[i+1]=x;
    length++;
}

bool Array::isSorted()
{

    for(int i=0;i<length-1;i++)
    {
        if(A[i]>A[i+1])
            return false;
    }
    return true;
}

void Array::rearrangeElem()
{
    int i=0;
    int j= length -1;
    while(i<j)
    {
        while(A[i]<0)
            i++;
        while(A[j]>=0)
            j--;
        if(i<j) 
            swap(&A[i],&A[j]);
    }
}
Array* Array::Merge( Array arr2)
{
    int i,j,k;
    struct Array *arr3 = new Array(length + arr2.length);

    while(i<length && j<length)
    {
        if(A[i]<A[j])
            A[k++]=A[i++];
        else
            A[k++]=A[j++];
    }
    for(;i<length;i++)
    {
        A[k++]=A[i];
    }
    
    for(;j<length;j++)
    {
        A[k++]=A[j];
    }

    length=length+arr2.length;
    size=size+arr2.length;

    return arr3;
}

Array* Array::Union( struct Array arr2)
{
    int i,j,k;
    i=j=k=0;

    struct Array *arr3 = new Array[size+arr2.length];
    while (i<j)
    {
        if(A[i]==A[j])
        {
            A[k++]=A[i];
            i++;
            j++;
        }
        else if (A[i]<A[j])
             A[k++]=A[i++];
        else
            A[k++]=A[j++];
        
        while (i<length)
        {
            A[k++]=A[i++];
        }
        while (j<length)
        {
            A[k++] = A[j++];
        }
        length=k;
        size= size + arr2.size;

    }

    return arr3;
}

Array* Array::Intersection( struct Array arr2)
{
    int i,j,k;
    i=j=k=0;

    struct Array *arr3 = new struct Array;
    while (i<j)
    {
        if(A[i]==A[j])
        {
            A[k++]=A[i];
            i++;
            j++;
        }
        else if (A[i]<A[j])
             i++;
        else
            j++;
        
        length=k;
        size=size + arr2.size;

    }

    return arr3;
}

Array* Array::Difference( Array arr2)
{
    int i,j,k;
    i=j=k=0;

    struct Array *arr3 = new Array[size+arr2.size];
    while (i<j)
    {
        if(A[i]==A[j])
        {
            i++;
            j++;
        }
        else if (A[i]<A[j])
             A[k++]=A[i++];
        else
             j++;
        
        while (i<length)
        {
            A[k++]=A[i++];
        }
        length=k;
        size= size + arr2.size;

    }

    return arr3;
}
int main() 
{
 Array *arr1;
 int ch,sz;
 int x, index;
 cin>>sz;
 arr1= new Array(sz);
 //write code for different operation.
    return 0;
}