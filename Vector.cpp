#include<iostream>
#include<algorithm>
using namespace std;
class Vector{
    public:
    int *arr;
    int size;
    int capacity;
Vector(){
    size=0;
    capacity=1;
    arr=new int[1];
}

void push_back(int val){
    if(size==capacity){
     
     capacity*=2;
     int *arr2=new int [capacity];
     for(int i=0;i<size;i++){
        arr2[i]=arr[i];
     }
     arr=arr2;

    }
    arr[size]=val;
    size++;
}
void pop_back(){
    if(size==0){
        cout<<"size is empty";
        return ;
    }
    size--;
}
void print(){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int  get(int idx){
    if(size==0){
        cout<<"array is empty";
        return -1;
    }
 if(idx>=size){
    cout<<"index out of bound";
    return -1 ;
 }
 return arr[idx];
}
};
int main(){
    
int *arr=new int[20];
arr[0]=1;

Vector *v=new Vector;
v->push_back(10);
v->print();
v->push_back(20);
v->print();
v->push_back(30);
v->print();

v->push_back(40);
v->push_back(50);
v->print();
cout<<v->size;
cout<<v->capacity;
cout<<endl;
cout<<v->get(10);

}