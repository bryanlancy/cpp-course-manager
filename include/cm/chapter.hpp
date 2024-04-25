#ifndef CHAPTER_HPP
#define CHAPTER_HPP

#include <string>
#include <ftxui/component/component.hpp>         // for Menu
#include <ftxui/component/component_base.hpp>    // for ComponentBase
#include <ftxui/component/component_options.hpp> // for MenuOption
#include <ftxui/screen/color.hpp>                // for Color, Color::Blue, Color::Cyan, Color::Green, Color::Red, Color::Yellow

namespace cm
{
    class Chapter
    {
    public:
        std::string title;
        int difficulty;
        ftxui::Component entry;

        Chapter(const std::string &t = "No title", int d = -1) {}
    };
}

#endif
