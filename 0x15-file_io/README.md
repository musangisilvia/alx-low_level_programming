# 0-15-file_io

## 0-read_textfile.c
> A function that reads a text file and prints it to the ``` POSIX ``` standard output.
> - Prototype: ``` ssize_t read_textfile(const char *filename, size_t letters); ```.
> - letters is the number of letters it should read and print.
> - returns the actual numbers it could read and print.
> - If file can not be opened or read, ``` 0 ``` is returned.
> - if ``` filename ``` is ``` NULL ``` the function returns ``` 0 ```.
> - if ``` write ``` fails or does not write the expected amount of bytes, the function returns ```0```.


## holberton.h
> A header file that contains function prototypes of functions written in this project.

