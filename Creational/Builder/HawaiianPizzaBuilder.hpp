#ifndef HAWAIIANPIZZABUILDER_H
#define HAWAIIANPIZZABUILDER_H
#include "PizzaBuilder.hpp"
class HawaiianPizzaBuilder:public PizzaBuilder
{
    public:
	~HawaiianPizzaBuilder() override = default;
        void buildDough() override;
        void buildSauce() override;
        void buildTopping() override;
};
#endif
