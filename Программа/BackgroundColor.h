#ifndef BLOCK_DISPLAY_H
#define BLOCK_DISPLAY_H

#include <vector>
#include <string>

class BackgroundColor
{
public:
    // Устанавливает цвет фона страницы
    // Вход: цвет фона (backgroundColor)
    void setBackgroundColor(const std::string &backgroundColor);

private:
    std::string bgColor; // Цвет фона страницы
};

#endif /* BLOCK_DISPLAY_H */
