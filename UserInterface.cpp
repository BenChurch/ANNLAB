#include "ANNLAB.h"
#include <sstream>

int GetIntegerInput(int MinInput, int MaxInput)
{
    string UserInput;
    string::pointer InputParser= &(*UserInput.begin());        // Used to parse input
    int IntegerInput;
    bool InputValid = false;
    cin.clear();
    do
    {
        do
        {
            //InputIterator = UserInput->begin();
            cin >> UserInput;

            if(UserInput == "0" || UserInput == "1" || UserInput == "2" || UserInput == "3" || UserInput == "4")
            {
                InputParser++;
                continue;
            }
            else if(UserInput == "5" || UserInput == "6" || UserInput == "7" || UserInput == "8" || UserInput == "9")
            {
                InputParser++;
                continue;
            }
            else
            {
                cout <<  "Enter valid integer of numeric digits." << endl;
                UserInput.clear();
                InputParser = &(*UserInput.begin());
            }
        }while(InputParser != &(*UserInput.end()));

        // Assert UserInput[0:end] are all digits
        stringstream(UserInput) >> IntegerInput;
        // Figure out some error checking anyway...
        if(IntegerInput < MinInput || IntegerInput > MaxInput)
        {
            cout << "Enter integer in the range: " << MinInput << " - " << MaxInput << endl;
            UserInput.clear();
            InputParser = &(*UserInput.begin());
        }
        else InputValid = true;                 // Assert input is type integer and in valid range.

    }while(!InputValid);

    return IntegerInput;

}
