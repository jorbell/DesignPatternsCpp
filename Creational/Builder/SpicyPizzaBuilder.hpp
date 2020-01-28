#ifndef SPICYPIZZABUILDER_H
#define SPICYPIZZABUILDER_H
#include "PizzaBuilder.hpp"
class SpicyPizzaBuilder:public PizzaBuilder
{
    public:
	~SpicyPizzaBuilder() override = default;
        void buildDough() override;
        void buildSauce() override;
        void buildTopping() override;
};
#endif
