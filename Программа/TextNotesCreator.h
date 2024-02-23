#ifndef TEXT_NOTES_H
#define TEXT_NOTES_H

#include <string>
#include <vector>
#include "TextNote.h"

class TextNotesCreator
{
public:
    // Создает новую текстовую заметку
    // Вход: текст заметки (text)
    TextNote createTextNote(const std::string &text);
};

#endif /* TEXT_NOTES_H */
