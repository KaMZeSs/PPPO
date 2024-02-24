#ifndef QUICK_NOTE_WINDOW_H
#define QUICK_NOTE_WINDOW_H

#include <string>

/// @brief Предоставляет мини-окно, доступное из панели инструментов, для быстрого создания заметок без необходимости переключения между разделами
class QuickNoteWindow
{
public:
    /// @brief Открывает мини-окно для быстрого создания заметки
    void openQuickNoteWindow();

    /// @brief Сохраняет созданную заметку из мини-окна
    /// @param noteText Текст заметки
    /// @return Идентификатор созданной заметки
    int saveQuickNote(const std::string &noteText);

private:
    /// @brief Счетчик для уникальных идентификаторов заметок
    int noteIdCounter;
};

#endif /* QUICK_NOTE_WINDOW_H */