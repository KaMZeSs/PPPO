#ifndef TEXT_NOTES_H
#define TEXT_NOTES_H

#include <string>
#include <vector>

class TextNote
{
public:
    // Возвращает все текстовые заметки
    // Выход: вектор строк с текстами заметок
    std::vector<std::string> getAllTextNotes();

private:
    std::vector<std::string> textNotes; // Список текстовых заметок
};

#endif /* TEXT_NOTES_H */
