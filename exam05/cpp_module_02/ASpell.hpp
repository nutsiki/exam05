#pragma once

#include <iostream>
#include "ATarget.hpp"
class ATarget;

class ASpell
{
    private:
        std::string name;
        std::string effects;
    public:
        ASpell();
        ASpell(std::string const &name, std::string const &effects);
        ASpell(ASpell const &other);
        ASpell &operator=(ASpell const &other);
        virtual ~ASpell();

        std::string const &GetName() const;
        std::string const &GetEffects() const;

        void launch(ATarget const &atarget_ref) const;
        
        virtual ASpell *clone() const = 0;
}