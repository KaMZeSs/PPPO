#ifndef GRAPHIC_NOTES_H
#define GRAPHIC_NOTES_H

#include <string>
#include <vector>
#include "GraphicNotes.h"

/// @brief Позволяет пользователю редактировать добавленные изображения, включая их обрезку или дополнительное рисование поверх них
class GraphicNotesEditor
{
public:
    /// @brief Редактирует указанную графическую заметку
    /// @param note Индекс заметки
    /// @param newImagePath Новый путь к изображению
    void editImageNote(GraphicNote note, const std::string &newImagePath);
};

#endif /* GRAPHIC_NOTES_H */
