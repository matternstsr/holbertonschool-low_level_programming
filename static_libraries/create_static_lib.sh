#!/bin/bash
#!/bin/bash
echo "Enter the path of the directory you want to copy files from:"
read source_dir
echo "Enter the path of the directory you want to copy files to:"
read destination_dir

cp -r "$source_dir"/* "$destination_dir"
gcc -Wall -pedantic -Werror -Wextra -c *.c
ar -rc libmy.a *.o
