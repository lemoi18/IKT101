#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
#include <list>
#include <string>

using namespace std;

int main() {
    int num;
    vector<int> list;
    int n = 0;
    while ((cin >> num) && num != 0) {
        list.push_back(num);
        n++;
    }

    cout<<endl;
    int sum = std::accumulate(list.begin(), list.end(), 0);
    double average = double(sum)/double(n);
    cout<<"Average : "<<average<<endl;

    sort(list.begin(), list.end());


cout<< endl;

    if (list.size() % 2 == 0)
        std::cout << "Median : "
                  << (list[list.size()/2] + list[list.size()/2 - 1]) / 2.00
                  << std::endl;
    else
        std::cout << "Median : " << list[list.size()/2]
                  << std::endl;

    cout << "Descending : ";
    reverse(list.begin(), list.end());
    for(int i : list) {
        cout << i << " ";
    }






    return 0;
}
