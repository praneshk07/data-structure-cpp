#include<iostream>
#include<stack>
using namespace std;

// two way to implement stack 
// 1st using array, using linked list
class Stack{
   public:
   int *arr;
   int top;
   int size;
   Stack(int size){ 
       this->size=size;
       arr=new int[size];
       top=-1; 
   }
 void push(int ele){
   if(size-top>1)
   {
    top++;
    arr[top]=ele;
   }
   else{
    cout<<"stack  overflow"<<endl;
   }
 }
 void pop(){
    if(top>=0)
    {
        top--;
    }
    else{
        cout<<"stack underflow"<<endl;
    }

 }
 int peek()
 {
    if(top>=0)
    {
       return arr[top];
    }
    else{
        cout<<"element is not present"<<endl;
        return -1;
    }
 }
 void ismpty()
 {
    if(top== -1)
    {
        cout<<"stack is empty";
        
    }
    else{
        cout<<"stack is not empty";
        //return false;
    }
 }

};




int main(){
    
    Stack st(5);
    st.push(22);
    st.push(43);
    st.push(44);
    cout<<st.peek();
    cout<<endl;

    st.pop();
    cout<<st.peek();

    cout<<endl;
    st.ismpty();

    //int size=sizeof(arr)/sizeof(arr[0]);

    return 0;
}