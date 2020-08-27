In C programming language, programmers can specify their name to a variable, array, pointer, function, etc... An identifier is a collection of characters which acts as the name of variable, function, array, pointer, structure, etc... In other words, an identifier can be defined as the user-defined name to identify an entity uniquely in the c programming language that name may be of the variable name, function name, array name, pointer name, structure name or a label.

>The identifier is a user-defined name of an entity to identify it uniquely during the program execution

Example
```c 
int marks;
char studentName[30];
```

Here, `marks` and `studentName` are identifiers.

### Rules for Creating Identifiers
1. An identifier can contain <strong>Letters</strong> (UPPERCASE and lowercase), numerics & underscore symbol only.
2. An identifier should not start with a numerical value. It can start with a letter or an underscore.
3. We should not use any special symbols in between the identifier even whitespace. However, the only underscore symbol is allowed.
4. Keywords should not be used as identifiers.
5. There is no limit for the length of an identifier. However, the compiler considers the first 31 characters only.
6. An identifier must be unique in its scope.


### Rules for Creating Identifiers for better programming
The following are the commonly used rules for creating identifiers for better programming...
1. The identifier must be meaningful to describe the entity.
2. Since starting with an underscore may create conflict with system names, so we avoid starting an identifier with an underscore.
3. We start every identifier with a lowercase letter. If an identifier contains more than one word then the first word starts with a lowercase letter and second word onwards first letter is used as an UPPERCASE letter. We can also use an underscore to separate multiple words in an identifier.