#include "chrono.h"
#include "../std_lib_facilities.h"

int main() 
{
    Chrono::Date today{1978, Chrono::Month::jun, 25};
    today.add_day(1);
    Chrono::Date tomorrow = today;

    cout << tomorrow << "\n";

};
