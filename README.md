<div align="center">
  This project has been created as part of the 42 curriculum by mifranci.
</div>

<h1 align="center">Libft</h1>
<h2 align="center"> 📑 Table of Contents</h2>

1. [Description](#description)
2. [Technical Considerations](#technical-considerations)
3. [Library Details](#library-details)
   - [Part 1 - Libc Functions](#part-1---libc-functions)
   - [Part 2 - Additional Functions](#part-2---additional-functions)
   - [Part 3 - Linked List Functions](#part-3---linked-list-functions)
4. [Instructions](#instructions)
5. [Resources](#resources)
6. [AI Usage](#ai-usage)
7. [Example Usage](#example-usage)

<h2 align="center">Description</h2>

This project implements **Libft**, my very first custom C library.  
Its goal is to recreate standard C library functions with my own versions, and extend functionality with additional utility and linked list functions.  
This library demonstrates understanding of **memory management, string manipulation, and data structures** in C.  

<h2 align="center">Technical Considerations</h2>

- Declaring global variables is strictly forbidden.
- Helper functions for complex functions must be `static` to restrict scope.
- All files must be placed at the **root** of the repository.
- Submitting unused files is not allowed.
- Every `.c` file must compile with the flags: `-Wall -Wextra -Werror`.
- Use the `ar` command to create the library; **libtool is forbidden**.
- `libft.a` library must be at the root of the repository.
  `Some of the function prototypes I need to reimplement use the
’restrict’ qualifier. This keyword is part of the C99 standard.
Therefore, it is forbidden to include it in my own prototypes and
to compile my code with the -std=c99 flag.`

<h2 align="center">Library Details</h2>

## Part 1 - Libc Functions
You must reimplement standard C library functions with the `ft_` prefix:

- **Character classification**: `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`  
- **String & memory**: `ft_strlen`, `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_strlcpy`, `ft_strlcat`, `ft_toupper`, `ft_tolower`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_memchr`, `ft_memcmp`, `ft_strnstr`, `ft_atoi`  
- **Memory allocation**: `ft_calloc`, `ft_strdup`  

> Notes: `calloc` must return a unique pointer if `nmemb` or `size` is 0.  
> Functions like `strlcpy`, `strlcat`, and `bzero` may require `<bsd/string.h>` and `-lbsd` on GNU/Linux.

## Part 2 - Additional Functions

| Function | Prototype | Description |
|----------|-----------|-------------|
| `ft_substr` | `char *ft_substr(char const *s, unsigned int start, size_t len)` | Returns a substring from `s`. |
| `ft_strjoin` | `char *ft_strjoin(char const *s1, char const *s2)` | Concatenates `s1` and `s2`. |
| `ft_strtrim` | `char *ft_strtrim(char const *s1, char const *set)` | Removes characters from `set` at the start and end of `s1`. |
| `ft_split` | `char **ft_split(char const *s, char c)` | Splits `s` by delimiter `c`. |
| `ft_itoa` | `char *ft_itoa(int n)` | Converts integer to string. |
| `ft_strmapi` | `char *ft_strmapi(char const *s, char (*f)(unsigned int, char))` | Applies `f` to each character and returns a new string. |
| `ft_striteri` | `void ft_striteri(char *s, void (*f)(unsigned int, char *))` | Applies `f` to each character in place. |
| `ft_putchar_fd` | `void ft_putchar_fd(char c, int fd)` | Writes a character to a file descriptor. |
| `ft_putstr_fd` | `void ft_putstr_fd(char *s, int fd)` | Writes a string to a file descriptor. |
| `ft_putendl_fd` | `void ft_putendl_fd(char *s, int fd)` | Writes a string followed by newline to fd. |
| `ft_putnbr_fd` | `void ft_putnbr_fd(int n, int fd)` | Writes an integer to fd. |

## Part 3 - Linked List Functions

typedef struct s_list
{
    void *content;
    struct s_list *next;
} t_list;
| Function        | Prototype                                                                 | Description                                |
| --------------- | ------------------------------------------------------------------------- | ------------------------------------------ |
| ft_lstnew       | `t_list *ft_lstnew(void *content)`                                        | Creates a new node.                        |
| ft_lstadd_front | `void ft_lstadd_front(t_list **lst, t_list *new)`                         | Adds a node to the front.                  |
| ft_lstsize      | `int ft_lstsize(t_list *lst)`                                             | Counts nodes in a list.                    |
| ft_lstlast      | `t_list *ft_lstlast(t_list *lst)`                                         | Returns the last node.                     |
| ft_lstadd_back  | `void ft_lstadd_back(t_list **lst, t_list *new)`                          | Adds a node to the end.                    |
| ft_lstdelone    | `void ft_lstdelone(t_list *lst, void (*del)(void *))`                     | Deletes a single node.                     |
| ft_lstclear     | `void ft_lstclear(t_list **lst, void (*del)(void *))`                     | Deletes all nodes.                         |
| ft_lstiter      | `void ft_lstiter(t_list *lst, void (*f)(void *))`                         | Applies a function to each node’s content. |
| ft_lstmap       | `t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))` | Creates a new list applying `f`.           |

<h1 align="center">Instructions</h1>

Clone the repository:

git clone <repository_url>

Navigate to the project folder:

cd <project_folder>

Compile library:

make

The libft.a library will be created at the root.

Include it in your projects using #include "libft.h" and link with -L. -lft.

<h1 align="center">Resources</h1>

C Standard Library Documentation

GNU libc

[42 School Libft PDF]

<h1 align="center">AI Usage</h1>

AI was used for drafting README structure, formatting, and examples.

Core function logic, memory management, and linked list implementation were written manually.

<h1 align="center">Example Usage</h1>
#include "libft.h"
#include <stdio.h>

int main() {
    char *s = ft_strjoin("Hello, ", "World!");
    printf("%s\n", s);
    free(s);
    return 0;
}



z
