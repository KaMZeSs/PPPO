#ifndef GRAPHIC_NOTES_H
#define GRAPHIC_NOTES_H

#include <string>
#include <vector>
#include "GraphicNotes.h"

/// @brief Позволяет пользователю добавлять существующие изображения на страницу в качестве графических заметок
class GraphicNotesImporter
{
public:
    /// @brief Импортирует изображение в виде заметки
    /// @param imagePath Путь к изображению
    /// @return Графическая заметка
    GraphicNote importImageNote(const std::string &imagePath);
};

#endif /* GRAPHIC_NOTES_H */
