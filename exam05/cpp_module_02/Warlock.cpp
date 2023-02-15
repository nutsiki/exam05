#include "Warlock.hpp"

Warlock::Warlock(std::string const &name, std::string const &title):name(name), title(title)
{
    std::cout << this->name <<": This looks like another boring day.\n";
}

Warlock::~Warlock()
{
    std::cout << this->name << ": My job here is done!\n";
}

std::string const Warlock::GetName() const { return(this->name);}
std::string const Warlock::GetTitle() const { return(this->title);}

void Warlock::SetTitle(std::string const &title){this->title = title;}
void Warlock::introduce() const {std::cout << this->name << ": I am " << this->name << ", " << this->title << "!\n";}

void Warlock::learnSpell(Aspell *aspell_ptr){book.learnSpell(aspell_ptr);}