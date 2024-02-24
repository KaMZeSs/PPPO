#include "FileCreation.h"
#include "FileOpening.h"
#include "FileExport.h"

/// @brief Основной поток программы
/// @return Код завершения
int main()
{
    FileCreation creation;
    creation.createFile("file");
    FileOpening opening;
    opening.openFile("file"); 
}