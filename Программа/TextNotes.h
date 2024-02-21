#ifndef TEXT_NOTES_H
#define TEXT_NOTES_H

#include <string>
#include <vector>

class TextNotes
{
public:
    // Создает новую текстовую заметку
    // Вход: текст заметки (text)
    void createTextNote(const std::string &text);

    // Редактирует указанную текстовую заметку
    // Вход: индекс заметки (index), новый текст (newText)
    void editTextNote(int index, const std::string &newText);

    // Удаляет указанную текстовую заметку
    // Вход: индекс заметки (index)
    void deleteTextNote(int index);

    // Возвращает все текстовые заметки
    // Выход: вектор строк с текстами заметок
    std::vector<std::string> getAllTextNotes();

private:
    std::vector<std::string> textNotes; // Список текстовых заметок
};

#endif /* TEXT_NOTES_H */
