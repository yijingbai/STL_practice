#include <list>
#include <iostream>

using namespace std;

void print_lists(const list<int>& l1) {
    cout << "list: ";
    copy(l1.begin(), l1.end(), ostream_iterator<int>(cout, " "));
    cout << endl;
}

int main() {
    list<int> list1, list2;

    for (int i = 0; i < 6; ++i) {
        list1.push_back(i);
        list2.push_front(i);
    }

    print_lists(list1);
    print_lists(list2);

    list<int> list3(list2);
    list<int> list4({1, 2, 0});
    list<int> list5({1, 2});

    print_lists(list3);
    print_lists(list4);
    print_lists(list5);

    cout << "Size: " << list1.size() << endl;
    cout << "Empty: " << list1.empty() << endl;
    cout << "MaxSize: " << list1.max_size() << endl;

    bool res = list2 == list3;
    cout << "list2 == list3: " << res<< endl;
    bool res2 = (list4 > list5);
    cout << "list4 < list5 " << res2 << endl;

    list<int> list6;
    cout << *(++++list6.begin());

    list1.sort();
    list2.sort();
    list1.merge(list2);
    print_lists(list1);
    list1.unique();
    print_lists(list1);
}
