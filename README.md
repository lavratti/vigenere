# Vigenère cipher

A simple C implementation of the Vigenère cipher.

## Usage

Basic usage:

```vigenere "key" "text to encode" [v](verbose, optional)```

Alternative usage (using bash):

```vigenere "key" "$( < input_text_file )" > output_text_file```

Ps. Key shoud be a-z or A-Z.

## Compiling

Compiling (using gcc) example:

```gcc path/to/vigenere/src/vigenere.c -o path/to/vigenere/build/vigenere```

## Aditional info

The Vigenère cipher  is a method of encrypting alphabetic text by using a series of interwoven Caesar ciphers, based on the letters of a keyword. It employs a form of polyalphabetic substitution. First described by Giovan Battista Bellaso in 1553, the cipher is easy to understand and implement, but it resisted all attempts to break it until 1863, three centuries later. This earned it the description le chiffrage indéchiffrable (French for 'the indecipherable cipher'). Many people have tried to implement encryption schemes that are essentially Vigenère ciphers. In 1863, Friedrich Kasiski was the first to publish a general method of deciphering Vigenère ciphers. In the 19th century the scheme was misattributed to Blaise de Vigenère (1523–1596), and so acquired its present name.

From Wikipedia https://en.wikipedia.org/wiki/Vigen%C3%A8re_cipher
