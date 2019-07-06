# Working with Strings

## Char

Built in type that holds ordinary characters as defined by the implementation

## wchar_t

Built-in type intended to hold "wide characters" which are big enough to hold characters for languages such as japanese

## String Type

An object of type string.
contains a sequence of zero or more characters

If n is an **integer**, c is a **char**, **is** is an input stream, and os is an output stream, then the string operations include

## std::string s;

Defines s as a variable type std::string that is empty

## std::string t=s;

Defines t of type std::string that initially contains a copy of the characters in s

## std::string z(n, c);

Defines z that contains n copies of the c character. c must be a char not a string

## os << s

Writes the characters contained in s, without any formatting changes

## is >> s

Reads and discards characters from the stream denoted by is until encountering a character that is not whitespace.

## s + t

The result of this expression is an std::string that contains a copy of the characters is s followed by a copy of the chars in t. Either s or t may be a string literal but not both.

## s.size()

the number of chars in s.

```c++
  // Build the second and fourth lines of the output
  // By using the () we are telling spaces to CONSTRUCT the variable with expressions.
  // .size() is a Member function of std::size, and return an integer of the number of chars in greeting.
  // ' ' - This is a character literal.
  // When we construct a string with an integer and a char, the value is given as many chars as the integer.
  const std::string spaces(greeting.size(), ' '); // Contains as many spaces as the number of characters in greeting
  const std::string second = "* " + spaces + " *";
```

# Variables

## Can be defined in one of three ways

std::string hello = "Hello" // Define the variable with an explicit initial
std::string start(100, '\*') // Construct the variable according to its type and the given expression
std::string name; // define the variable with an implicit initialization which depends on its type
