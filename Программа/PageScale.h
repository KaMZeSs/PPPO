#ifndef BLOCK_DISPLAY_H
#define BLOCK_DISPLAY_H

#include <vector>
#include <string>

/// @brief Позволяет пользователю изменять масштаб отображения содержимого страницы для лучшего просмотра и работы
class PageScale
{
public:
    /// @brief Устанавливает масштаб отображения страницы
    /// @param scale Масштаб
    void setScale(int scale);

private:
    /// @brief Масштаб отображения страницы
    int scale;
};

#endif /* BLOCK_DISPLAY_H */
