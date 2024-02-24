#ifndef SECTION_H
#define SECTION_H

#include <string>
#include <vector>

/// @brief Представляет собой отдельный раздел в дереве разделов, содержащий его название, цвет закладки и ссылку на соответствующую страницу с заметками
class Section
{
public:
    /// @brief Добавляет новую заметку в раздел
    /// @param text Текст заметки
    void addNote(const std::string &text);

    /// @brief Удаляет указанную заметку из раздела
    /// @param index Индекс заметки
    void removeNote(int index);

    /// @brief Возвращает все заметки в разделе
    /// @return Bектор строк с текстами заметок
    std::vector<std::string> getAllNotes();

private:
    /// @brief Список заметок в разделе
    std::vector<std::string> notes;
}; 

#endif /* SECTION_H */
