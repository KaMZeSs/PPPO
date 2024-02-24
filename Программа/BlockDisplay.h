#ifndef BLOCK_DISPLAY_H
#define BLOCK_DISPLAY_H

#include <vector>
#include <string>

/// @brief Предоставляет области для содержимого заметок на странице, которые могут иметь разную форму и располагаться в разных частях страницы
class BlockDisplay
{
public:
    /// @brief Добавляет новый блок на страницу
    /// @param text текст блока
    /// @return Номер файла
    int addBlock(const std::string &text);

    /// @brief Удаляет указанный блок со страницы
    /// @param index индекс блока
    void removeBlock(int index);

    // Возвращает все блоки на странице
    // Выход: вектор строк с текстами блоков

    /// @brief Возвращает все блоки на странице
    /// @return Массив строк содержимого блоков
    std::vector<std::string> getAllBlocks();

private:
    /// @brief Список блоков на странице
    std::vector<std::string> blocks;
};

#endif /* BLOCK_DISPLAY_H */
