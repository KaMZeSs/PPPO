#ifndef BLOCK_DISPLAY_H
#define BLOCK_DISPLAY_H

#include <vector>
#include <string>

class PageScale
{
public:
    // Устанавливает масштаб отображения страницы
    // Вход: масштаб (scale)
    void setScale(int scale);

private:
    int scale;           // Масштаб отображения страницы
};

#endif /* BLOCK_DISPLAY_H */
