/*#include <iostream>
//using namespace std;

int rec(int number, int sum) {
    if (number != 0) {
        sum += number % 10;
        number /= 10;
        rec(number, sum);
    } else {
        return sum;
    }
}

int rec1(int number) {
    if (number ==0 ) {
        return 0;
    } else {
        int y = rec1(number / 10);
        return y + number % 10;
    }
}

int main(){
    setlocale(LC_ALL, "rus");
    //в идеале вынести все в отдельные функции: ввод, обработка, вывод
    int x = 0;
    int s=0;
    std::cout << "введите натуральное число: "<<std::endl;
    std::cin >> x;
    //проверка на число
    if (x <= 0) {
        std::cerr << "ошибка: х < 0";
        return 1;
    }

    s = rec(x,s);
    std::cout <<std::endl<<"сумма цифр натурального числа:" << s;
    return 0;
}*/


#include <iostream>

int input(int number) {
    std::cout << "введите натуральное число:" << std::endl;
    std::cin >> number;
    return number;
}

int rec(int num, int min) {
    if (num == 0) {
        return min;
    } else {
        if (num % 10 < min) {
            min = num % 10;
        }
        rec(num / 10, min);
    }
}

int rec1(int num, int min) {
    if (num < 10) {
        return num;
    }
    else {
        int y = rec1(num /10, min);
        int digit = num % 10;
        i
    }
}

int main(){
    setlocale(LC_ALL, "rus");
    int num = 0;
    int min = 9;
    input(num);
    if (num <= 0) {
        std::cerr << "ошибка: х < 0";
        return 1;
    }
    rec(num, min);
    std::cout << std::endl << "минимальное число на спуске:" << min;
    min = 9;
    rec1(num, min);

}