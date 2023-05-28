
#include <iostream>
using namespace std;
 void learn_pointer_with_waled ()
 {



     int a=96;
     int* pointer;
     pointer=&a;

     cout<<" the value in a is ="<<a<<endl;
     cout<<" the address of a is ="<<&a<<endl;
     cout<<" the pointer value  is ="<<pointer<<endl;
     cout<<" the pointer value  is ="<<*pointer<<endl;




 }

 int square1(int n){
     cout<<"the address in function" <<&n;
     return n*n;
 }

 int square2(int *n){
     cout << " the address of n in function"<<&n<<endl;

     *n *= *n;
 }
// Driver program

// pointer with array

void ptr_array()
{
     int arr[5]={1,2,3,4,5};

     //declar the pointer

     int * ptr;

     ptr = arr;

     cout<< &ptr[0]<<endl<<&ptr[1]<<endl<<&ptr[2]<<endl<<ptr[3];
}
int main()
{
     ptr_array();
    // int n=6;


   //  learn_pointer_with_waled ();
    // square1(n);
    // cout<<endl;
    // cout<<"the address of n in the main"<<&n<<endl;
    // square2(&n);
    // cout<<"the address of n in the main"<<&n<<endl;
    // cout << &n;

     return 0;
}
