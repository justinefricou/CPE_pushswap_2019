/*
** EPITECH PROJECT, 2019
** error_detection.c
** File description:
** pushswap : functions to detect errors
*/

int detect_errors(int argc, char **argv)
{
    if (argc < 2)
        return (84);
    for (int i = 1; i < argc; i++) {
        if (!is_int(argv[i]))
            return (84);
    }
}