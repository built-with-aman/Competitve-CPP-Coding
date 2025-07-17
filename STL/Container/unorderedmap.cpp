// unorderted map
// basic program to ncheck underored map
#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{

    //  Step 1: Create an unordered_map named 'age' to store names and their ages
    unordered_map<string, int> age;

    //  Step 2: Insert key-value pairs into the map
    age["Anay"] = 22;
    age["Reet"] = 21;

    //  Step 3: Find "Anay" in the map using .find()
    auto it = age.find("Anay");
    // Step 4: Check if "Anay" exists in the map
    if (it != age.end())
    {
        //  Step 5: If found, print Anay's age using it->second
        cout << "anay ki nage =" << it->second << endl;
    }

    else
    {
        //  Step 6: If not found, print error message
        cout << "anay kin age nahi pata" << endl;
    }
    return 0;
}