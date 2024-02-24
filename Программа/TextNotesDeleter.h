#ifndef TEXT_NOTES_H
#define TEXT_NOTES_H

#include <string>
#include <vector>
#include "TextNote.h"

/// @brief Удаляет текстовые заметки
class TextNotesDeleter
{
public:
    /// @brief Удаляет указанную текстовую заметку
    /// @param textNote Индекс заметки
    void deleteTextNote(TextNote textNote);
};

#endif /* TEXT_NOTES_H */
