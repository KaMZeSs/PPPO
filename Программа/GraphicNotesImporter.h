#ifndef GRAPHIC_NOTES_H
#define GRAPHIC_NOTES_H

#include <string>
#include <vector>
#include "GraphicNotes.h"

class GraphicNotesImporter
{
public:
    // Создает новую графическую заметку изображения
    // Вход: путь к изображению (imagePath)
    GraphicNote createImageNote(const std::string &imagePath);
};

#endif /* GRAPHIC_NOTES_H */
