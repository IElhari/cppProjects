#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

// Goal: Stopwatch program to track study session lengths.
// Records the day and time of start and day and time of end for each session.
// At EOD, sessions added up and exported to CSV file. 2 CSV files: 1 for each session and 1 for each day.

int main()
{
    short minutes, seconds;
    int time;

    string indication;

    // Measure time taken
    clock_t start, end;
    double timeTaken;

    cout << "Welcome to study session." << endl;
    cout << "This is a simple measure of how long you study/do deep work each session" << endl;

    cout << "Type in 'start' to start the stop watch." << endl;
    cout << "Type in 'end' whenever you want to finish the session" << endl;

    cout << "Whenever you're ready, type 'start'" << endl;
    cin >> indication;

    if (indication == "start")
    {
        start = clock();
    }

    return 0;
}