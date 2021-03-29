# 0-15-file_io

## 0-read_textfile.c
> A function that reads a text file and prints it to the ``` POSIX ``` standard output.
> - Prototype: ``` ssize_t read_textfile(const char *filename, size_t letters); ```.
> - letters is the number of letters it should read and print.
> - returns the actual numbers it could read and print.
> - If file can not be opened or read, ``` 0 ``` is returned.
> - if ``` filename ``` is ``` NULL ``` the function returns ``` 0 ```.
> - if ``` write ``` fails or does not write the expected amount of bytes, the function returns ```0```.

## 1-create_file.c
> A function that creates a file.
> - Prototype: ``` int create_file(const char *filename, char *text_content); ```.
> - ``` filename ``` is te name of the file to create and ``` text_content ``` is a ``` NULL ```
terminated string to write to the file.
> - Return: ``` 1 ``` on success, ``` -1 ``` on failure.
> - Created file has the permissions ``` rw------- ```. If the file already exists, permissions are
 not changed.
> - If file aready exists, it is truncated.
> - If ``` filename ``` is ``` NULL ``` the function returns ``` -1 ```.
> - If ``` text_content ``` is ``` NULL ``` the function creates an empty file.

## holberton.h
> A header file that contains function prototypes of functions written in this project.

