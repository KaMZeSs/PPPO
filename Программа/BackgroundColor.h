#ifndef BLOCK_DISPLAY_H
#define BLOCK_DISPLAY_H

#include <vector>
#include <string>

/// @brief Позволяет пользователю выбирать и изменять цвет фона страницы для создания комфортной рабочей обстановки.
class BackgroundColor
{
public:
    /// @brief Устанавливает цвет фона страницы
    /// @param backgroundColor цвет фона
    void setBackgroundColor(const std::string &backgroundColor);

private:
    /// @brief Цвет фона страницы
    std::string bgColor;
};

#endif /* BLOCK_DISPLAY_H */
