#pragma once

#include "AComponent.hpp"

template <class T>
class C_Background : public AComponent<T> {
public:
    C_Background(T arg_n) :
        AComponent<T>(arg_n) {}

    C_Background() :
        AComponent<T>() {}

    const std::type_info& GetType() const override {
        return typeid(C_Background);
    }
    std::shared_ptr<IComponent> Clone() const override {
        return std::make_shared<C_Background>(*this);
    }
};