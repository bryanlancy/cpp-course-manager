#include <iostream>
#include <vector>
#include "chapter.cpp"
#include "lesson.cpp"

namespace cm
{
    class CourseManager
    {
    private:
        std::vector<Chapter> chapters;

    public:
        std::string course_name;

        CourseManager(std::string cn, std::vector<std::pair<std::string, int>> ch)
        {
            std::cout << "New course manager! - " << cn;
            course_name = cn;

            for (auto &chapter : ch)
            {
                chapters.push_back(Chapter(std::get<0>(chapter), std::get<1>(chapter)));
            }
        };

        // Create vector of MenyEntry from chapters for use with FTXUI Menu
        ftxui::Components get_chapters_as_entries()
        {
            ftxui::Components components = {};

            int i = 1;
            for (auto &chapter : chapters)
            {
                ftxui::Color color = ftxui::Color::Blue;
                switch (chapter.difficulty)
                {
                case 0:
                    color = ftxui::Color::Green;
                    break;
                case 1:
                    color = ftxui::Color::Yellow;
                    break;
                case 2:
                    color = ftxui::Color::Red;
                    break;
                default:
                    break;
                }
                std::string option_text = std::to_string(i) + ". " + chapter.title;
                components.push_back(ftxui::MenuEntry(option_text, Colored(color)));
                i++;
            }
            return components;
        };
    };
}
