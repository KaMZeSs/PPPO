#ifndef GRAPHIC_NOTES_H
#define GRAPHIC_NOTES_H

#include <string>
#include <vector>

/// @brief Позволяет пользователю добавлять и редактировать графические элементы на странице, такие как изображения и рисунки
class GraphicNote
{
private:
    /// @brief Список путей к изображениям
    std::vector<std::string> imageNotes;

    /// @brief Список пикселей изображения
    std::vector<std::byte> pixels;
};

#endif /* GRAPHIC_NOTES_H */
