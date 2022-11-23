#include <iostream>
#include <fstream>

using namespace std;
int main(void) {
    
    try {
        int person = 0;
        if (person == 0) {
            throw person;
        }
        else {
            throw 'c';
        }
    }  // 다중 catch 문장, multiple exception handling
    catch (int e) {
        cout << "Exception: catched!!" << endl;
    }

    catch (char c) {
        cout << "Character exception catched!!" << endl;
    }

    return 0;
}
