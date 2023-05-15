#include <iostream>
#include <ctime>
#include <unistd.h>

void startTimer(int seconds) {
    time_t startTime = time(nullptr);
    time_t endTime = startTime + seconds;

    while (time(nullptr) < endTime) {
        system("clear");  
        std::cout << "Timer: " << (endTime - time(nullptr)) << " seconds remaining\n";
        sleep(1);  
    }

    system("clear");
    std::cout << "Timer finished!\n";
}

int main() {
    int seconds;
    std::cout << "Enter the number of seconds for the timer : ";
    std::cin >> seconds;

    startTimer(seconds);

    return 0;
}
