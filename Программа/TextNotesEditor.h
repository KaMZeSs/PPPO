#ifndef TEXT_NOTES_H
#define TEXT_NOTES_H

#include <string>
#include <vector>
#include "TextNote.h"

class TextNotesEditor
{
public:
    // Редактирует указанную текстовую заметку
    // Вход: индекс заметки (index), новый текст (newText)
    void editTextNote(TextNote textNote, const std::string &newText);
};

#endif /* TEXT_NOTES_H */
