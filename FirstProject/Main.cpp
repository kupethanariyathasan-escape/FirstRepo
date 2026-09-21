#include <iostream>
#include "yvals_core.h"

#ifndef yvals_core_H

#define yvals_core_H

int SlotsUsed(int items);

#endif // yvals_core_H

int main() { std::cout << SlotsUsed(4) << "\n"; return 0; }

int SlotsUsed(int items) { return items; }