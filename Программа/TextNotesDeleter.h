#ifndef TEXT_NOTES_H
#define TEXT_NOTES_H

#include <string>
#include <vector>
#include "TextNote.h"

class TextNotesDeleter
{
public:
    // Удаляет указанную текстовую заметку
    // Вход: индекс заметки (index)
    void deleteTextNote(TextNote textNote);
};

#endif /* TEXT_NOTES_H */
