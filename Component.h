#ifndef COMPONENT_H
#define COMPONENT_H

#include <string>

class Component {
public:
    virtual ~Component() {}
    virtual std::string Operation() const = 0;
};

class ConcreteComponent : public Component {
public:
    std::string Operation() const override;
};

#endif