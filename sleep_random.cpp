#include <iostream>
#include<chrono>
#include<thread>

int main() {
    std::cout << "Starting!" << std::endl;
    int sec;
    srand(time(0));
    sec = rand() % (30 - 5 + 1) + 5; // to, from, 1, from

    std::cout << "Sleeping for " << sec << " seconds!" << std::endl;
    std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::seconds(sec));
    std::cout << "Done!" << std::endl;

    return 0;
}
