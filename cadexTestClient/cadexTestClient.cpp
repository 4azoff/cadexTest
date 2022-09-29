#include <iostream>
#include "cadexTestLib.h"
#define _USE_MATH_DEFINES
#include <math.h>
#include <memory>
#include <vector>
#include <random>

using namespace std;

int main()
{
    std::random_device random;
    mt19937 generator(random());
    uniform_real_distribution <> distrebution_real(1, 10);
    uniform_int_distribution <> distrebution_int(1, 3);
    auto t = M_PI / 4;
    vector<shared_ptr<BaseCurve>> firstContainer;
    vector<shared_ptr<Circle>> secondContainer;
    for (int i = 0; i < 10; i++) {
        double randRadius = distrebution_real(generator);
        double randRadiusOrStep = distrebution_real(generator);
        switch (auto type = distrebution_int(generator)) {
        case 1:
            firstContainer.push_back(shared_ptr<Circle>(CreateNewCircle(t, randRadius)));
            break;
        case 2:
            firstContainer.push_back(shared_ptr<Elipse>(CreateNewEllipse(t, randRadius, randRadiusOrStep)));
            break;
        case 3:
            firstContainer.push_back(shared_ptr<Helix>(CreateNewHelix(t, randRadius, randRadiusOrStep)));
            break;
        }
    }

    cout << "############# FIRST CONTAINER ###############\n";
    for (const auto elem : firstContainer)
    {
        elem->PrintInfo();
        auto circle = dynamic_pointer_cast<Circle>(elem);
        if (circle)
        {
            secondContainer.push_back(circle);
        }
    }

    sort(secondContainer.begin(), secondContainer.end(), [](const shared_ptr<Circle> elem1, const shared_ptr<Circle> elem2) {
        return elem1->GetRadius() <= elem2->GetRadius();
        });
    cout << "############# SECOND SORTED CONTAINER ###############\n";
    double sumRadius = 0;
    for (const auto circle : secondContainer)
    {
        circle->PrintInfo();
        sumRadius += circle->GetRadius();
    }
    cout << "#####################################################\nRadius sum = " << sumRadius;
   
    
   
}