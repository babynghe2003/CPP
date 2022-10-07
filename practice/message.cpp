#include <iostream>
using namespace std;
int main(){
    string runner1,
           runner2,
           runner3;

    int runner1_time,
        runner2_time,
        runner3_time;

    cout << "Enter the name of runner1: ";
    cin >> runner1;

    cout << "The time runner1 took to complete: ";
    cin >> runner1_time;


    cout << "Enter the name of runner2: ";
    cin >> runner2;

    cout << "The time runner2 took to complete: ";
    cin >> runner2_time;


    cout << "Enter the name of runner3: ";
    cin >> runner3;

    cout << "The time runner3 took to complete: ";
    cin >> runner3_time;

    cout << endl;
    
    if (runner1_time < 0 || 
        runner2_time < 0 || 
        runner3_time < 0)
    {
        cout << "Error. The times of runner must be greater than 0."
             << endl;
    }
    else
    {
        if (runner1_time > runner2_time)
        {
            if (runner1_time > runner3_time)
            {
                cout << "First Place: "  << runner1 << " @ "  << runner1_time << endl;
                if (runner2_time > runner3_time)
                {
                    cout << "Second Place: " 
                         << runner2 << " @ " 
                         << runner2_time 
                         << endl;
                    cout << "Third Place: " 
                         << runner3 << " @ " 
                         << runner3_time 
                         << endl;
                }
                else
                {
                    cout << "Second Place: " 
                         << runner3 << " @ " 
                         << runner3_time 
                         << endl;
                    cout << "Third Place: " 
                         << runner2 << " @ " 
                         << runner2_time 
                         << endl;
                }
            }
        }
        if (runner2_time > runner3_time)
        {
            if (runner2_time > runner1_time)
            {
                cout << "\nFirst Place: " 
                     << runner2 << " @ " 
                     << runner2_time 
                     << endl;
                if (runner1_time > runner3_time)
                {
                    cout << "Second Place: " 
                         << runner1 << " @ " 
                         << runner1_time 
                         << endl;
                    cout << "Third Place: " 
                         << runner3 << " @ " 
                         << runner3_time 
                         << endl;
                }
                else
                {
                    cout << "Second Place: " 
                         << runner3 << " @ " 
                         << runner3_time 
                         << endl;
                    cout << "Third Place: " 
                         << runner1 << " @ " 
                         << runner1_time 
                         << endl;
                }
            }
        }
        if (runner3_time > runner2_time)
        {
            if (runner3_time > runner1_time)
            {
                cout << "\nFirst Place: " 
                     << runner3 << " @ " 
                     << runner3_time 
                     << endl;
                if (runner1_time > runner2_time)
                {
                    cout << "Second Place: " 
                         << runner1 << " @ " 
                         << runner1_time 
                         << endl;
                    cout << "Third Place: " 
                         << runner2 << " @ " 
                         << runner2_time 
                         << endl;
                }
                else
                {
                    cout << "Second Place: " 
                         << runner2 << " @ " 
                         << runner2_time 
                         << endl;
                    cout << "Third Place: " 
                         << runner1 << " @ " 
                         << runner1_time 
                         << endl;
                }
            }
        }
    }

    cout << endl;

    return 0;
}