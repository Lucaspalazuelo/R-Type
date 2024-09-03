#pragma once

#include "AComponent.hpp"

template <class T>
class C_Sprite : public AComponent<T> {
    public:
        C_Sprite(T arg_n) :
            AComponent<T>(arg_n) {}

        C_Sprite() :
            AComponent<T>() {}

        const std::type_info& GetType() const override {
            return typeid(C_Sprite);
        }

        std::shared_ptr<IComponent> Clone() const override {
            return std::make_shared<C_Sprite>(*this);
        }
};