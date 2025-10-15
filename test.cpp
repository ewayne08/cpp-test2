#include <iostream>
using namespace std;

class HelloWorld {
public:
    // Constructor
    HelloWorld() {
        cout << "HelloWorld object created!" << endl;
    }

    // Method to print Hello World
    void sayHello() {
        cout << "Hello, World!" << endl;
    }
};

int main() {
    HelloWorld hw;   // Create an object of HelloWorld
    hw.sayHello();   // Call the method
    return 0;
}
