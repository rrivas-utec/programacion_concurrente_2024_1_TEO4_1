#include <iostream>
#include <thread>

void fn(int number) {
    std::cout << "Hilo " << number << std::endl;
}

void fn1() {
    std::cout << "Hilo 1\n";
}
void fn2() {
    std::cout << "Hilo 2\n";
}
void fn3() {
    std::cout << "Hilo 3\n";
}
void ejemplo_1() {
    std::thread t1;
    t1 = std::thread(fn1);
    std::cout << "Hilo Principal - Paso 1\n";
    t1.join();
}
void ejemplo_2() {
    std::thread t2 (fn2);
    std::cout << "Hilo Principal - Paso 1\n";
    t2.join();
}
void ejemplo_3() {
    std::thread t1 (fn1);
    std::thread t2 (fn2);
    std::thread t3 (fn3);
    std::cout << "Hilo Principal - Paso 1\n";
    t3.join();
    t2.join();
    t1.join();
}

void fn4() {
    std::thread t4(fn1);
    std::cout << "Hilo 4\n";
    t4.join();
}

void fn5() {
    std::thread t5(fn4);
    std::cout << "Hilo 5\n";
    t5.join();
}

void ejemplo_4() {
    std::thread t4 (fn5);
    std::cout << "Hilo Principal - Paso 1\n";
    t4.join();
}

void ejemplo_5() {
    std::thread t1 (fn, 1);
    std::thread t2 (fn, 2);
    std::thread t3 (fn, 3);
    std::cout << "Hilo Principal - Paso 1\n";
    t3.join();
    t2.join();
    t1.join();
}


int main() {
    // ejemplo_1();
    // ejemplo_2();
    // ejemplo_3();
    // ejemplo_4();
    ejemplo_5();
    return 0;
}
