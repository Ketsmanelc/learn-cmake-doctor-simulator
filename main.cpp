#include <iostream>
#include "coordinates.h"
#include "Instruments.h"

int main() {
    double memory_x0, memory_y0;
    std::cout << "Enter cut coordinates: ";
    input("scalpel");
    fc_scalpel(op.x_0, op.y_0, op.x_1, op.y_1);
    memory_x0 = op.x_0;
    memory_y0 = op.y_0;
    while (true) {
        std::cin >> op.cmd;
        input(op.cmd);
        if (op.cmd == op.scalpel) fc_scalpel(op.x_0, op.y_0, op.x_1, op.y_1);
        else if (op.cmd == op.tweezers) fc_tweezers(op.x_0, op.y_0);
        else if (op.cmd == op.hemostat) fc_hemostat(op.x_0, op.y_0);
        else if (op.cmd == op.suture) {
            fc_suture(op.x_0, op.y_0, op.x_1, op.y_1);
            if (memory_x0 == op.x_1 &&memory_y0 == op.y_1) return 0;
        }
    }

    return 0;
}
