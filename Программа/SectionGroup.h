#ifndef SECTION_GROUP_H
#define SECTION_GROUP_H

#include <string>
#include <vector>

class SectionGroup
{
public:
    // Добавляет новый раздел в группу разделов
    // Вход: название раздела (name)
    void addSection(const std::string &name);

    // Удаляет указанный раздел из группы
    // Вход: индекс раздела (index)
    void removeSection(int index);

    // Возвращает список всех разделов в группе
    // Выход: вектор строк с названиями разделов
    std::vector<std::string> getAllSections();

private:
    std::vector<std::string> sections; // Список разделов в группе
};

#endif /* SECTION_GROUP_H */
