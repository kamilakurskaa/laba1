# laba1
1) Создание репозитория на github
2) Клонирование репозитория с помощью Git Brash: git clone https://github.com/kamilakurskaa/laba1.git
3) cd laba1 - получение доступа к локальному репозиторию
4) Создаём директорию (папку) src и в ней создаём файлы main.cpp utils.cpp
5)  В корне файл CMakeLists.txt, который содержит имя проекта, имя папки, сами файлы и др.
6)  Проверка успешной сборки с помощью CMake
7)  Добавляем файлы в репозиторий с помощью git add src/main.cpp src/utils.cpp
8)  git commit -m "Initial commit: CMake project setup" Создаём новую ветку: git branch feature-utils
9)  Переключаемся на неё: git checkout feature-utils
10)  Добавляем функцию умножения и фиксируем коммит: git add src/main.cpp src/utils.cpp
11)  git commit -m "feat: Add multiplication function to utils"
12)  Переключаемся обратно и проделываем изменения с веткой main, также добавляем их и фиксируем коммит
13)  При попытке слить ветки git merge feature-utils возникают конфликты. Решаем их вручную, оставляя нужный вариант.
14)  git commit -m "Fixed merging conflicts"
15)  Пушим в github: git push --all origin
