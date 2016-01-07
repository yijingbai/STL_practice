#include <deque>
#include <iostream>
#include <algorithm>
#include <iterator>

using namespace std;

int main() {
    deque<string> coll;
    coll.assign(3, "string");

    coll.push_back("last string");
    coll.push_front("first");

    copy(coll.begin(), coll.end(),
         ostream_iterator<string>(cout, " "));

    cout << endl;

    for (uint32_t i = 1; i < coll.size(); ++i) {
        coll[i] = "another" + coll[i];
    }

    copy(coll.begin(), coll.end(),
         ostream_iterator<string>(cout, " "));

}
