#ifndef SECTION_EDITOR_H
#define SECTION_EDITOR_H

#include <vector>
#include <string>

/// @brief Позволяет пользователю редактировать список разделов, включая добавление, удаление и перемещение разделов для более удобной организации заметок
class SectionEditor
{
public:
    /// @brief Редактирует название указанного раздела
    /// @param index Индекс раздела
    /// @param newName Новое название
    void editSectionName(int index, const std::string &newName);

private:
    /// @brief Список разделов для редактирования
    std::vector<std::string> sections;
};

#endif /* SECTION_EDITOR_H */
