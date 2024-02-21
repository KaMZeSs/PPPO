#ifndef SECTION_TREE_H
#define SECTION_TREE_H

#include <vector>
#include <string>

class SectionTree
{
public:
    // Добавляет новый раздел в дерево разделов
    // Вход: название раздела (name)
    void addSection(const std::string &name);

    // Удаляет указанный раздел из дерева
    // Вход: индекс раздела (index)
    void removeSection(int index);

    // Возвращает список всех разделов
    // Выход: вектор строк с названиями разделов
    std::vector<std::string> getAllSections();

private:
    std::vector<std::string> sections; // Список разделов
};

#endif /* SECTION_TREE_H */
