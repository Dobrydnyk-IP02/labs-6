#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    
    int user_input();
    int fact(int);
    void do_exercise(int);
    void draw_triangle(int);

    int n = user_input();
    do_exercise(n);
    
};


 int user_input() { //функція для введення к-сті рядків трикутника
    int k;
    cout << "enter size of triangle: ";
    cin >> k;
    return k;
 }

 

int fact( int k) { //рекурсивна функція для обчислення факторіала
    if (k == 0) {

        return 1;
    }

    else {

        return k * fact(k - 1);
    }

}


void draw_triangle(int number) { //обчислення комбінації для отримання трикутника
    int j, c;
    for (j = 0; j <= number; j++)
    {
        for (c = 0; c <= j; c++)
        {
            cout<< (fact(j) / (fact(c) * fact(j - c)))<<" ";
            
        };
        cout << "\n";
    }
}

void  do_exercise(int n) { //перевірка введення натурального числа

    if (n > 0) {

        draw_triangle(n);
    }
    else {
        cout << "Error!!!";
    }
}