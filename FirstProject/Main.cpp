#include <iostream>
#include "item.h"
#include "inventory.h"
#include "colours.h"
#include "palette.h"

int main()
{
	std::cout << slotfree(4) << "\n"; return 0;
}

int main2()
{
	item sword;
	sword.weight = 5;
	std::cout << sword.weight << "\n"; return 0;
}