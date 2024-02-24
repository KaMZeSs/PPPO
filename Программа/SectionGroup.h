#ifndef SECTION_GROUP_H
#define SECTION_GROUP_H

#include <string>
#include <vector>

/// @brief Группирует разделы для более удобной навигации и организации заметок, содержит название группы разделов и список разделов, входящих в нее
class SectionGroup
{
public:
    /// @brief Добавляет новый раздел в группу разделов
    /// @param name Название раздела
    void addSection(const std::string &name);

    /// @brief Удаляет указанный раздел из группы
    /// @param index Индекс раздела
    void removeSection(int index);

    /// @brief Возвращает список всех разделов в группе
    /// @return Вектор строк с названиями разделов
    std::vector<std::string> getAllSections();

private:
    /// @brief Список разделов в группе
    std::vector<std::string> sections;
};

#endif /* SECTION_GROUP_H */
