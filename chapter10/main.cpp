#include "../std_lib_facilities.h"


struct Point {
    int x;
    int y;
};

bool operator==(const Point& a, const Point& b) 
{
    return a.x == b.x && a.y == b.y;
}

bool operator!=(const Point& a, const Point& b) 
{
    return !(a == b);
}

int main() {
    cout << "Please enter input: x y" << endl;
    int x, y;
    vector<Point> original_points;
    while (cin >> x >> y) {
        Point p = Point{x, y};
        original_points.push_back(p);
    }

    ofstream ost {"mydata.txt"};
    if (!ost) error("can't open output file");

    for (int i = 0; i < original_points.size(); ++i) {
        ost << original_points[i].x << " " << original_points[i].y << endl;
    }

    ifstream ist {"mydata.txt"};
    if (!ist) error("can't open output file");

    vector<Point> processed_points;
    while (ist >> x >> y) {
        Point p = Point{x, y};
       processed_points.push_back(p);
    }

    for (int i = 0; i < original_points.size(); ++i) {
        if (original_points[i] != processed_points[i]) {
            cout << "Something's wrong!" << endl;
        }
    }
}
