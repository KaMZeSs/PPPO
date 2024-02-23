#ifndef BLOCK_DISPLAY_H
#define BLOCK_DISPLAY_H

#include <vector>
#include <string>

class BlockDisplay
{
public:
    /// @brief Добавляет новый блок на страницу
    /// @param text текст блока
    void addBlock(const std::string &text);

    /// @brief Удаляет указанный блок со страницы
    /// @param index индекс блока
    void removeBlock(int index);

    // Возвращает все блоки на странице
    // Выход: вектор строк с текстами блоков
    std::vector<std::string> getAllBlocks();

private:
    std::vector<std::string> blocks; // Список блоков на странице
};

#endif /* BLOCK_DISPLAY_H */
