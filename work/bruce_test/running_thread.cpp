#include <iostream>
#include <thread>
#include <chrono>

int main() {
    while (true) {
        auto start_time = std::chrono::high_resolution_clock::now();
        auto end_time = start_time + std::chrono::seconds(5);
        std::cout << "Running..." << std::endl;

        // 持续进行计算，确保CPU使用
        while (std::chrono::high_resolution_clock::now() < end_time) {
            double result = 0.0;
            for (int i = 0; i < 100000; ++i) {
                result += i * i;
            }
        }

        std::cout << "Sleeping..." << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(5)); // 休眠5秒
    }
    return 0;
}

