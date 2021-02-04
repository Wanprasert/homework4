#include<iostream>
using namespace std;
int main()
{
    int s1, s2, s3, mi, fi;
    cout << "==========QUIZZES==========" <<endl;
    cout << "Enter first quizz  (10) : ";
    cin >> s1;
    cout << "Enter second quizz (10) : ";
    cin >> s2;
    cout << "Enter third quizz  (10) : ";
    cin >> s3;
    cout << "==========MID-TERM==========" <<endl;
    cout << "Enter mid-term (40) : ";
    cin >> mi;
    cout << "==========FINAL==========" <<endl;
    cout << "Enter final-term (50) : ";
    cin >> fi;

    float total1 = static_cast<float>(s1+s2+s3)/3;
    cout << "Quizz Total :"<<total1 <<endl;
    cout << "Mid term :"<<mi <<endl;
    cout << "Final :"<<fi <<endl;

    float total2 = total1+mi+fi;
    cout << "Total :"<<total2 <<endl;
    cout << "Your Score is " << ((total2>=50) ? "PASS " : "FAILED ") <<endl;

return(0);
}