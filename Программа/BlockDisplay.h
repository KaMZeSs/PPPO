#ifndef BLOCK_DISPLAY_H
#define BLOCK_DISPLAY_H

#include <vector>
#include <string>

class BlockDisplay
{
public:
    // Добавляет новый блок на страницу
    // Вход: текст блока (text)
    void addBlock(const std::string &text);

    // Удаляет указанный блок со страницы
    // Вход: индекс блока (index)
    void removeBlock(int index);

    // Возвращает все блоки на странице
    // Выход: вектор строк с текстами блоков
    std::vector<std::string> getAllBlocks();

private:
    std::vector<std::string> blocks; // Список блоков на странице
};

#endif /* BLOCK_DISPLAY_H */
