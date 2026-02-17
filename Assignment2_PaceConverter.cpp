#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double mph;
    // PACE calculation
    /* write your code */
    cout << "Enter your MPH speed!\n";
    cin >> mph;
    double pace;
    pace = 60.0/mph;
    int minutes = pace;
    double seconds = (pace - minutes) * 60;

    //express pace in minutes and seconds
  /* write your code here */
  
    cout << "Your pace is "
       << minutes<< " minutes and "
       <<seconds<< " seconds per mile."
       << endl;
  //express your output in 1 decimal points


}
