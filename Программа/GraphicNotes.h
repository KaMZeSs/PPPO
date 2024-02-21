#ifndef GRAPHIC_NOTES_H
#define GRAPHIC_NOTES_H

#include <string>
#include <vector>

class GraphicNotes
{
public:
    // Создает новую графическую заметку изображения
    // Вход: путь к изображению (imagePath)
    void createImageNote(const std::string &imagePath);

    // Редактирует указанную графическую заметку
    // Вход: индекс заметки (index), новый путь к изображению (newImagePath)
    void editImageNote(int index, const std::string &newImagePath);

    // Удаляет указанную графическую заметку
    // Вход: индекс заметки (index)
    void deleteImageNote(int index);

    // Возвращает все графические заметки
    // Выход: вектор строк с путями к изображениям
    std::vector<std::string> getAllImageNotes();

private:
    std::vector<std::string> imageNotes; // Список путей к изображениям
};

#endif /* GRAPHIC_NOTES_H */
