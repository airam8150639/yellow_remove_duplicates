#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

template <typename T>
void RemoveDuplicates(vector<T>& elements) {
    sort(elements.begin(), elements.end());             // сортируем в порядке возрастания
    auto it = unique(elements.begin(), elements.end()); // если есть подряд идущие одинаковые элементы -
                                                        // то оставляем только уникальный
    elements.erase(it, end(elements));                  // вырезаем из вектора все повторы, отброшеные 
                                                        // в конец вектора методом unique
};

int main() {
    vector<int> v1 = { 6, 4, 7, 6, 4, 4, 0, 1 };
    RemoveDuplicates(v1);
    for (int x : v1) {
        cout << x << " ";
    }
    cout << endl;

    vector<string> v2 = { "C", "C++", "C++", "C", "C++" };
    RemoveDuplicates(v2);
    for (const string& s : v2) {
        cout << s << " ";
    }
    cout << endl;
    return 0;
}
