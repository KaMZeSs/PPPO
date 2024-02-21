#ifndef QUICK_NOTE_WINDOW_H
#define QUICK_NOTE_WINDOW_H

#include <string>

class QuickNoteWindow
{
public:
    // Открывает мини-окно для быстрого создания заметки
    // Вход: нет
    void openQuickNoteWindow();

    // Сохраняет созданную заметку из мини-окна
    // Вход: текст заметки (noteText)
    // Выход: идентификатор созданной заметки (noteId)
    int saveQuickNote(const std::string &noteText);

private:
    int noteIdCounter; // Счетчик для уникальных идентификаторов заметок
};

#endif /* QUICK_NOTE_WINDOW_H */