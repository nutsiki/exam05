#pragma once

#include <iostream>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include "SpellBook.hpp"

class Warlock
{
    private :
        std::string name;
        std::string title;

        Warlock();
        Warlock(Warlock const &other);
        Warlock &operator=(Warlock const &other);

        SpellBook book;
    public :
        Warlock(std::string const &name, std::string const &title);
        ~Warlock();

        std::string const GetName() const;
        std::string const GetTitle() const;

        void SetTitle(std::string const &title);

        void introduce() const;

        void learnSpell(Aspell *aspell_ptr);
        void forgetSpell(std::string name);
        void launchSpell(std::string name, ATarget const &atarget_ref);
};