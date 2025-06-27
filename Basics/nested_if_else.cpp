#include <bits/stdc++.h>
using namespace std;

/*
Problem Statement: Job Eligibility Checker (File I/O version)

You are given a text file named "input.txt" which contains three inputs in the following order:
1. Age of the candidate (integer)
2. Qualification of the candidate (string, e.g., Bachelors, Masters, Diploma)
3. Years of work experience (integer)

Write a C++ program that reads these inputs from "input.txt" and determines if the candidate is eligible for the job based on the criteria:

- The candidate must be at least 18 years old.
- The candidate must have a qualification of either Bachelors or Masters.
- The candidate must have a minimum of 2 years of work experience.

Your program should write the eligibility message to a file named "output.txt".

Eligibility messages:
- If eligible: "You are eligible for the job."
- If underage: "You must be at least 18 years old to apply."
- If qualification criteria not met: "You need at least a Bachelor's degree to apply."
- If experience criteria not met: "You need at least 2 years of experience."

Note:
- Use nested if-else statements to check these conditions sequentially.
- Make sure to read input from "input.txt" and write output to "output.txt".
*/

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int age;
    string qualification;
    int experience;

    cin>>age>>qualification>>experience;

    if (age>=18){
        if(qualification =="Bachelors" || qualification=="Masters"){
            if(experience>=2){
             cout<<"You are eligible for the job."<<endl;
            }
            else{
                cout<<"You need at least 2 years of experience."<<endl;
            }
        }
        else{
            cout<<"You need at least a Bachelor's degree to apply."<<endl;
        }
        
    }
    else {
            cout<<"You must be at least 18 years old to apply."<<endl;
        }

        return 0;
    }