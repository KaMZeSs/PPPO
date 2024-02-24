#ifndef TEXT_NOTES_H
#define TEXT_NOTES_H

#include <string>
#include <vector>

/// @brief Представляет собой текстовую заметку
class TextNote
{
public:
    /// @brief Возвращает все текстовые заметки
    /// @return Вектор строк с текстами заметок
    std::vector<std::string> getAllTextNotes();

private:
    /// @brief Список текстовых заметок
    std::vector<std::string> textNotes;
};

#endif /* TEXT_NOTES_H */
