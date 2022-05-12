//edited by: Kaitlin White

#include <iostream>
#include "stomach.h"
#include "person.h"
#include "heart.h"

int main() {
    Person bountyGuy("Greef Karga", 55);
    std::cout << bountyGuy.getName() << " is " << (bountyGuy.isHealthy() ? "ok" : "not doing well") << std::endl;
    bountyGuy.punch();
    std::cout << bountyGuy.getName() << " is " << (bountyGuy.isHealthy() ? "ok" : "not doing well") << std::endl;
	bountyGuy.heartOK();
	std::cout << bountyGuy.getName() << "'s heart rate is " << (bountyGuy.heartOK() ? "greater than 50" : "less than 50") << std::endl;
    return 0;
}
	
