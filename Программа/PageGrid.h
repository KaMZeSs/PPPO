#ifndef BLOCK_DISPLAY_H
#define BLOCK_DISPLAY_H

#include <vector>
#include <string>

class PageGrid
{
public:
    // Добавляет сетку на страницу
    // Вход: шаг сетки (gridStep)
    void addGrid(int gridStep);

private:
    int gridStep;        // Шаг сетки
};

#endif /* BLOCK_DISPLAY_H */
