#include "Push.h"

Push::Push() : chest(""), tricep("") {}
Push::Push(std::string c, std::string t) : chest(c), tricep(t) {}

std::string Push::getChest() const { return chest; }
void Push::setChest(const std::string& c) { chest = c; }

std::string Push::getTricep() const { return tricep; }
void Push::setTricep(const std::string& t) { tricep = t; }
