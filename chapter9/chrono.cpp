#include "chrono.h"

namespace Chrono {

Month operator++(Month& m) 
{
    m = (m == Month::dec) ? Month::jan : Month(int(m) + 1);
    return m;
}

vector<string> month_tbl = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

ostream& operator<<(ostream& os, const Month& m) 
{
    return os << month_tbl[int(m) - 1];
}

Date::Date(int yy, Month mm, int dd)
    : y{yy}, m{mm}, d{dd}
{
    if (!is_date(yy, mm, dd)) throw Invalid{};
}

const Date& default_date()
{
    static Date dd{2001, Month::jan, 1};
    return dd;
}

Date::Date()
    :y{default_date().year()},
    m{default_date().month()},
    d{default_date().day()}
{
}

void Date::add_day(int n)
{
    // TODO: this 
    d += n;
}

void Date::add_month(int n)
{
    for (int i = 0; i < n; i++) {
        ++m;
        i++;
    }
}

void Date::add_year(int n)
{
    if (m == Month::feb && d == 29 && !leapyear(y+n)) {
        m = Month::mar; // use Mar 1 instead of Feb 29
        d = 1;
    }
    y+=n;
}

bool is_date(int y, Month m, int d) 
{
    if (y<=0) return false;
    if (d<=0) return false;
    if (m<Month::jan || Month::dec<m) return false;

    int days_in_month = 31;

    switch (m) {
    case Month::feb:
        days_in_month = (leapyear(y)) ? 29:28;
        break;
    case Month::apr: case Month::jun: case Month::sep: case Month::nov:
        days_in_month = 30;
        break;
    }
    
    if (days_in_month < d) return false;

    return true;
}

bool leapyear(int y)
{
    if (y % 4 == 0 && y % 100 != 0) {
        return true;
    }
    return false;
}

bool operator==(const Date& a, const Date& b)
{
    return a.year() == b.year()
        && a.month() == b.month()
        && a.day() == b.day();
}

bool operator!=(const Date& a, const Date& b)
{
    return !(a==b);
}

ostream& operator<<(ostream& os, const Date& d)
{
    return os << '(' << d.year()
            << ',' << d.month()
            << ',' << d.day() << ')';
}

istream& operator>>(istream& is, Date& dd)
{
    int y, m, d;
    char ch1, ch2, ch3, ch4;
    is >> ch1 >> y >> ch2 >> m >> ch3 >> d >> ch4;
    if (!is) return is;
    if (ch1 != '(' || ch2 != ',' || ch3 != ',' || ch4 != ')') { // format error
        is.clear(ios_base::failbit);
        return is;
    }

    dd = Date(y, Month(m), d);

    return is;
}



}
