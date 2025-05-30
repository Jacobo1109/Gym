#include "Legs.h"

Legs::Legs() : legs(""), calves("") {}
Legs::Legs(std::string l, std::string c) : legs(l), calves(c) {}

std::string Legs::getLegs() const { return legs; }
void Legs::setLegs(const std::string& l) { legs = l; }

std::string Legs::getCalves() const { return calves; }
void Legs::setCalves(const std::string& c) { calves = c; }
