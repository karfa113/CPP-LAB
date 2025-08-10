#include<iostream>
using namespace std;

class stack{
private:
    int *arr;
    int top;
    int capacity;
public:
    stack(int size){
        capacity = size;
        arr = new int[capacity];
        top = -1;
    }

    ~stack(){
        delete[] arr;
    }

    void push(char ch){
        if(top == capacity - 1){
            cout << "Stack Overflow !" << endl;
        }else{
            arr[++top] = ch;
        }
    }

    int pop(){
        if(top == -1){
            cout << "Stack Underflow !" << endl;
            exit(1);
        }else{
            return arr[top--];
        }
    }

    void display(){
        if(top == -1){
            cout << "Stack is empty" << endl;
        }else{
            cout << "Stack elements: ";
            for(int i=top; i >= 0; i--){
                cout << arr[i] << " ";
            }
            cout << endl;
        }

    }
};

int main() {
    int size1, size2;

    // First stack
    cout << "Enter size for first stack: ";
    cin >> size1;
    stack s1(size1);

    // Second stack
    cout << "Enter size for second stack: ";
    cin >> size2;
    stack s2(size2);

    cout << "\n--- Operations on First Stack ---\n";
    s1.push(10);
    s1.push(20);
    s1.display();
    s1.pop();
    s1.display();

    cout << "\n--- Operations on Second Stack ---\n";
    s2.push(10);
    s2.push(20);
    s2.push(30);
    s2.display();
    s2.pop();
    s2.display();

    return 0;
}