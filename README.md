# laba1
Создание репозитория на github
Клонирование репозитория с помощью Git Brash: git clone https://github.com/kamilakurskaa/laba1.git
cd laba1 - получение доступа к локальному репозиторию
Создаём директорию (папку) src и в ней создаём файлы main.cpp utils.cpp 
В корне файл CMakeLists.txt, который содержит имя проекта, имя папки, сами файлы и др.
Проверка успешной сборки с помощью CMake
Добавляем файлы в репозиторий с помощью git add src/main.cpp src/utils.cpp 
git commit -m "Initial commit: CMake project setup"
Создаём новую ветку: git branch feature-utils
Переключаемся на неё: git checkout feature-utils
Добавляем функцию умножения и фиксируем коммит: git add src/main.cpp src/utils.cpp 
git commit -m "feat: Add multiplication function to utils"
Переключаемся обратно и проделываем изменения с веткой main, также добавляем их и фиксируем коммит
При попытке слить ветки git merge feature-utils возникают конфликты. Решаем их вручную, оставляя нужный вариант.
git commit -m "Fixed merging conflicts"
Пушим в github: git push --all origin
