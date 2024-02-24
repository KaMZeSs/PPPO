#ifndef TEXT_NOTES_H
#define TEXT_NOTES_H

#include <string>
#include <vector>
#include "TextNote.h"

/// @brief Создатель текстовых заметок
class TextNotesCreator
{
public:
    /// @brief Создает новую текстовую заметку
    /// @param text текст заметки
    /// @return Объект текстовой заметки
    TextNote createTextNote(const std::string &text);
};

#endif /* TEXT_NOTES_H */
