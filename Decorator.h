#ifndef DECORATOR_H
#define DECORATOR_H

#include "Component.h"

class Decorator : public Component {
protected:
    Component* component_;

public:
    Decorator(Component* component);
    std::string Operation() const override;
};

class ConcreteDecoratorA : public Decorator {
public:
    ConcreteDecoratorA(Component* component);
    std::string Operation() const override;
};

class ConcreteDecoratorB : public Decorator {
public:
    ConcreteDecoratorB(Component* component);
    std::string Operation() const override;
};

#endif