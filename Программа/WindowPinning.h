#ifndef WINDOW_PINNING_H
#define WINDOW_PINNING_H

#include <vector>

class WindowPinning
{
public:
    // Закрепляет указанное окно поверх других окон
    // Вход: идентификатор окна (windowId)
    void pinWindow(int windowId);

    // Открепляет указанное окно от верхнего положения
    // Вход: идентификатор окна (windowId)
    void unpinWindow(int windowId);

    // Возвращает список закрепленных окон
    // Выход: вектор с идентификаторами закрепленных окон
    std::vector<int> getPinnedWindows();

private:
    std::vector<int> pinnedWindows; // Список идентификаторов закрепленных окон
};

#endif /* WINDOW_PINNING_H */
