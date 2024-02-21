#ifndef SECTION_EDITOR_H
#define SECTION_EDITOR_H

#include <vector>
#include <string>

class SectionEditor
{
public:
    // Редактирует название указанного раздела
    // Вход: индекс раздела (index), новое название (newName)
    void editSectionName(int index, const std::string &newName);

private:
    std::vector<std::string> sections; // Список разделов для редактирования
};

#endif /* SECTION_EDITOR_H */
