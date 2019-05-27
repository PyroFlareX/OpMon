/*
AnimationCtrl.cpp
Author : Cyriel
File under GNU GPL 3.0 license
*/
#include "AnimationCtrl.hpp"
#include "../view/Window.hpp"

namespace OpMon {
    namespace Controller {
        AnimationCtrl::AnimationCtrl(std::unique_ptr<View::Animations::Animation> view)
          : view(std::move(view)) {}

        GameStatus AnimationCtrl::update(sf::RenderWindow &frame) {
            return (*view)(frame);
        }
    } // namespace Controller
} // namespace OpMon
