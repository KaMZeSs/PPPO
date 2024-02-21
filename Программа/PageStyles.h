#ifndef PAGE_STYLES_H
#define PAGE_STYLES_H

#include <string>

class PageStyles
{
public:
    // Устанавливает цвет фона страницы
    // Вход: цвет фона (backgroundColor)
    void setBackgroundColor(const std::string &backgroundColor);

    // Добавляет сетку на страницу
    // Вход: шаг сетки (gridStep)
    void addGrid(int gridStep);

    // Устанавливает масштаб отображения страницы
    // Вход: масштаб (scale)
    void setScale(int scale);

private:
    std::string bgColor; // Цвет фона страницы
    int gridStep;        // Шаг сетки
    int scale;           // Масштаб отображения страницы
};

#endif /* PAGE_STYLES_H */
