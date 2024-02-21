#ifndef SECTION_H
#define SECTION_H

#include <string>
#include <vector>

class Section
{
public:
    // Добавляет новую заметку в раздел
    // Вход: текст заметки (text)
    void addNote(const std::string &text);

    // Удаляет указанную заметку из раздела
    // Вход: индекс заметки (index)
    void removeNote(int index);

    // Возвращает все заметки в разделе
    // Выход: вектор строк с текстами заметок
    std::vector<std::string> getAllNotes();

private:
    std::vector<std::string> notes; // Список заметок в разделе
};

#endif /* SECTION_H */
