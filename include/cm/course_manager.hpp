#ifndef COURSE_MANAGER_HPP
#define COURSE_MANAGER_HPP

#include <vector>
#include "chapter.hpp"
#include "lesson.hpp"

namespace cm
{
    class CourseManager
    {
    private:
        std::vector<cm::Chapter> chapters;

    public:
        CourseManager(std::string cn, std::vector<pair<std::string, int>> ch){};
        ftxui::Components get_chapters_as_entries() {}
    };
}

#endif
