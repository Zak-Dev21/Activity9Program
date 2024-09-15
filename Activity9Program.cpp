// Activity 9: Program that check for job eligibility
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // US citizen
    // Bachelors Degree without any years of experience

    bool US_Citizen = true;
    bool BAdegree = true;
    bool OtherExperience = false;

    bool EligibleApplicant = US_Citizen == true && (BAdegree == true || OtherExperience == true);

    cout << boolalpha << EligibleApplicant << endl;
}
