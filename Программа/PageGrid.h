#ifndef BLOCK_DISPLAY_H
#define BLOCK_DISPLAY_H

#include <vector>
#include <string>

/// @brief Обеспечивает возможность добавления сетки или линий на фон страницы для удобства выравнивания элементов
class PageGrid
{
public:
    /// @brief Добавляет сетку на страницу
    /// @param gridStep шаг сетки
    void addGrid(int gridStep);

private:
    /// @brief Шаг сетки
    int gridStep;
};

#endif /* BLOCK_DISPLAY_H */
