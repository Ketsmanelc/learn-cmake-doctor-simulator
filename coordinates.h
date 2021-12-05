#pragma once

struct operate{
    std::string cmd;
    double x_0 = 0;
    double x_1 = 0;
    double y_0 = 0;
    double y_1 = 0;
    const std::string scalpel = "scalpel";
    const std::string hemostat = "hemostat";
    const std::string tweezers = "tweezers";
    const std::string suture = "suture";

};

operate op;

void input(std::string cmd)
{
    if (cmd == op.scalpel || cmd == op.suture)
    {
        std::cin >> op.x_0 >> op.y_0;
        std::cin >> op.x_1 >> op.y_1;
    } else if (cmd == op.hemostat || cmd == op.tweezers)
    {
        std::cin >> op.x_0 >> op.y_0;
    }
}

void output(std::string cmd)
{
    if (cmd == op.scalpel || cmd == op.suture)
    {
        std::cin >> op.x_0 >> op.y_0;
        std::cin >> op.x_1 >> op.y_1;
    } else if (cmd == op.hemostat || cmd == op.tweezers)
    {
        std::cin >> op.x_0 >> op.y_0;
    }
}

//bool isEqual (op)
//{
//    if (op.)
//}

