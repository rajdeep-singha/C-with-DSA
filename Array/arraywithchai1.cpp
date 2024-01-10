#include<iostream>
using namespace std;

class Array
{
    private: 
    int capacity;
    int lastIndex;
    int *ptr;
    public:
      void createArray(int);
      void insertInArray(int,int);
};

void Array::createArray(int cap)
{capacity=cap;
lastIndex=-1;
int *ptr=new int[cap];
}

void Array::insertInArray(int index,int data)
{
    if(index<0 || index>lastIndex+1)
    {cout<<"Invalid Index";}
    else if(lastIndex==capacity-1)
    {
        cout<<"Overflow";
    }
}

int main()
{
    int marks[100];
 marks[2]=data
    return 0;
}