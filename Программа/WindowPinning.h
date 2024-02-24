#ifndef WINDOW_PINNING_H
#define WINDOW_PINNING_H

#include <vector>

/// @brief Обеспечивает возможность закрепления окна поверх других, что позволяет пользователю удобно работать с несколькими окнами одновременно, не теряя нужной информации
class WindowPinning
{
public:
    /// @brief Закрепляет указанное окно поверх других окон
    /// @param windowId Идентификатор окна (windowId)
    void pinWindow(int windowId);

    /// @brief Открепляет указанное окно от верхнего положения
    /// @param windowId Идентификатор окна (windowId)
    void unpinWindow(int windowId);

    /// @brief Возвращает список закрепленных окон
    /// @return Вектор с идентификаторами закрепленных окон
    std::vector<int> getPinnedWindows();

private:
    /// @brief Список идентификаторов закрепленных окон
    std::vector<int> pinnedWindows;
};

#endif /* WINDOW_PINNING_H */
