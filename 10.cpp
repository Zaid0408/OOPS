#include<iostream>
#include<string>
using namespace std;
template <typename T>
class ArrayOperations {
public:
    T* arr;
    T size;
    ArrayOperations(){}
    ArrayOperations(T m){
        size=m;
        arr=new T[size];
    }
    void read()
    {
        cout<<"Enter the elements:"<<endl;
        for(int i=0;i<size;i++)
        {
            cin>>arr[i];
        }
    }
    T* addArrays(ArrayOperations &a) {
        T* result = new T[size];
        for (int i = 0; i < this->size; i++) {
            result[i] = this->arr[i] + a.arr[i];
        }
        return result;
    }

    T findMax(ArrayOperations &b) {
        T max = b.arr[0];
        for (int i = 1; i < b.size; i++) {
            if (b.arr[i] > max) {
                max = b.arr[i];
            }
        }
        return max;
    }

    T findMin(ArrayOperations &b) {
        T min = b.arr[0];
        for (int i = 1; i < b.size; i++) {
            if (b.arr[i] < min) {
                min = b.arr[i];
            }
        }
        return min;
    }
};
int main()
{
    ArrayOperations <int>a1(5);
    ArrayOperations <int>a2(5);
    cout<<"for array 1:"<<endl;
    a1.read();
    cout<<"For array 2:"<<endl;
    a2.read();
    ArrayOperations <int>a3;
    int *a=a1.addArrays(a2);
    cout<<"Max Value in array 1 is: "<< a3.findMax(a1)<<endl;
    cout<<"Max Value in array 2 is: "<< a3.findMax(a2)<<endl;
    cout<<"Minimum Value in array 1 is: "<< a3.findMin(a1)<<endl;
    cout<<"Minimum Value in array 2 is: "<< a3.findMin(a2)<<endl;
    cout<<"Sum of two arrays is: "<<endl;
    for(int i=0;i<a1.size;i++)
        {
            cout<<a[i]<<", ";
        }
    return 1;
}
