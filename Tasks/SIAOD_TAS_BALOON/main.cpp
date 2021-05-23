#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include "Ballon.h"

using namespace std;

int main()
{
    int amount;
    int arrow;
    int count = 0;
    int temp = 0;
    vector<ballon> ballons;

    srand(time(nullptr));

    cout << "Введите кол-во шаров" << endl;
    cin >> amount;

    for (int i = 0; i < amount; i++)
    {
        ballons.push_back(ballon::generator());
    }
    cout << "Сгенерированные шары: ";

    for (auto i: ballons)
        cout << i.getStart() << " " << i.getEnd() << "; ";
    cout << endl;

    ballon::sort(ballons);




    while (temp != ballons.size() - 1)
    {
        arrow = ballons[temp].getEnd();
        while (arrow >= ballons[temp].getStart() && arrow <= ballons[temp].getEnd())
        {
            if (temp == ballons.size() - 1)
                break;

            count++;
            temp++;
        }
    }
    cout << "Минимальное количество стрел: " << count;

    return 0;
}