#include "Pull.h"

Pull::Pull() : back(""), bicep("") {}
Pull::Pull(std::string b, std::string bi) : back(b), bicep(bi) {}

std::string Pull::getBack() const { return back; }
void Pull::setBack(const std::string& b) { back = b; }

std::string Pull::getBicep() const { return bicep; }
void Pull::setBicep(const std::string& bi) { bicep = bi; }
