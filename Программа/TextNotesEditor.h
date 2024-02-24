#ifndef TEXT_NOTES_H
#define TEXT_NOTES_H

#include <string>
#include <vector>
#include "TextNote.h"

/// @brief Редактор текстовых заметок
class TextNotesEditor
{
public:
    /// @brief Редактирует указанную текстовую заметку
    /// @param textNote Индекс заметки
    /// @param newText Новый текст
    void editTextNote(TextNote textNote, const std::string &newText);
};

#endif /* TEXT_NOTES_H */
