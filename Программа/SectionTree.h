#ifndef SECTION_TREE_H
#define SECTION_TREE_H

#include <vector>
#include <string>

/// @brief Группирует разделы для более удобной навигации и организации заметок, содержит название группы разделов и список разделов, входящих в нее
class SectionTree
{
public:
    /// @brief Добавляет новый раздел в дерево разделов
    /// @param name Название раздела
    void addSection(const std::string &name);

    /// @brief Удаляет указанный раздел из дерева
    /// @param index Индекс раздела
    void removeSection(int index);

    /// @brief Возвращает список всех разделов
    /// @return Вектор строк с названиями разделов
    std::vector<std::string> getAllSections();

private:
    /// @brief Список разделов
    std::vector<std::string> sections;
};

#endif /* SECTION_TREE_H */
