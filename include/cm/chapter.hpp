#ifndef CHAPTER_HPP
#define CHAPTER_HPP

#include <string>
#include <ftxui/component/component.hpp>         // for Menu
#include <ftxui/component/component_base.hpp>    // for ComponentBase
#include <ftxui/component/component_options.hpp> // for MenuOption
#include <ftxui/screen/color.hpp>                // for Color, Color::Blue, Color::Cyan, Color::Green, Color::Red, Color::Yellow

// Define a special style for some menu entry.
ftxui::MenuEntryOption Colored(ftxui::Color c)
{
    ftxui::MenuEntryOption option;
    option.animated_colors.foreground.enabled = true;
    option.animated_colors.background.enabled = true;
    option.animated_colors.background.active = c;
    option.animated_colors.background.inactive = ftxui::Color::Black;
    option.animated_colors.foreground.active = ftxui::Color::White;
    option.animated_colors.foreground.inactive = c;
    return option;
}

namespace cm
{
    class Chapter
    {
    public:
        std::string title;
        int difficulty;
        ftxui::Component entry;

        Chapter(const std::string &t = "No title", int d = -1)
        {
            title = t;
            difficulty = d;

            int i = 0;
            std::string option_text = std::to_string(i) + ". " + title;

            switch (difficulty)
            {
            case 0:
                entry = MenuEntry(option_text, Colored(ftxui::Color::Green));
                break;
            case 1:
                entry = MenuEntry(option_text, Colored(ftxui::Color::Yellow));
                break;
            case 2:
                entry = MenuEntry(option_text, Colored(ftxui::Color::Red));
                break;
            default:
                break;
            }
        }
    };
}

#endif
