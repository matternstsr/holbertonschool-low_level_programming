#!/bin/bash

source_dirs=("/holbertonschool-shell/init_files_variables_and_expansions" "/holbertonschool-shell/io_redirections_and_filters" "/holbertonschool-shell/loops_conditions_and_parsing" "/holbertonschool-shell/permissions" "/holbertonschool-shell/processes_and_signals")
destination_dir="/holbertonschool-low_level_programming/static_libraries/libfiles"

cp /holbertonschool-low_level_programming/static_libraries/main.h /holbertonschool-low_level_programming/static_libraries/libfiles

for dir in "${source_dirs[@]}"
do
    cp -r "$dir"/* "$destination_dir"
done





gcc -Wall -pedantic -Werror -Wextra -c *.c
ar -rc libmy.a *.o
