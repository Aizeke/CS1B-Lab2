// Author: Isaac Guido
//         Noah Vaks
// Description: Hello World in C++
// =========================================

#include <iostream>
#include <string>
#include "helloOneWorld.cpp"
#include "hello2Function.cpp"

using namespace std;

int hello1Function(string name1);
int hello2Function(string name2);

int main() {

    string name1 = "Isaac Guido";
	hello1Function(name1);
    string name2 = "Noah Vaks";
	hello2Function(name2);

	cout << endl;

	return EXIT_SUCCESS;
}


//
// hello1Function.cpp
//

int hello1Function(string name1) {

	cout << "Hello World my name is " << name1 << endl;

	return 0;
}

//
// hello2Function.cpp
//

int hello2Function(string name2) {

	cout << "Hello World my name is " << name2 << endl;

	return 0;
}
