
#include <iostream>
#include <string>
#include <vector>

#include "Piece.h"
#include "King.h"
#include "Color.h"
#include "Position.h"
#include "Board.h"

using namespace std;


void Move(Piece* p) {
	Position pos = { 'e',2 };
	cout << p->Move(pos);
}


#include <iostream>
#include <thread>
#include <chrono>

void printLoop(int id, int delayMs) {
    for (int i = 1; i <= 20; i++) {
        //std::cout << "Thread " << id << " - loop " << i << " (before sleep) - " << (i - 1)*delayMs << " ms\n";
        std::this_thread::sleep_for(std::chrono::milliseconds(delayMs));
        std::cout << "Thread " << id << " - loop " << i << " - " << i * delayMs << " ms\n";
    }
}

int main() {
    std::thread t1(printLoop, 1, 300);  // sleeps 300ms each iteration
    std::thread t2(printLoop, 2, 500);  // sleeps 500ms each iteration

    t1.join();
    t2.join();

    std::cout << "Both threads finished\n";
    return 0;
}

