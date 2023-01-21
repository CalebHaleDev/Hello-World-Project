/*It has been several years since I've used C++, and I'm going to be doing
a module on it in this class, so I made this Hello World program using C++
to refresh myself on it.
*/
#include <iostream> //this is how you include a library, according to the first YouTube video referenced in README
//using namespace std;    //this is how you select a namespace to be used
using std::cout;
using std::endl;

int main() {
   // cout << "Hello World\n";    //note that the \n makes a new line
    cout << "Hello World!\n" << endl;     //not sure if I need to use this format or not.
    system("pause");    //this should wait and prompt the user for a key to be pressed to continue,
    //allowing the user to see the message before the program closes
    return 0;
}