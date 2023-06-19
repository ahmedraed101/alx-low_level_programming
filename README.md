`gcc -E file.c -o outfile.i` -> it does only the first step of the compilation (the preproccessing 'removes comments and the .h files) the out file is .i

`gcc -S file.c -o outfile.s` -> it moves to the second step of the compilation (compiling c code to assembly code) the out file is .s

`gcc -c file.c -o outfile.o` -> it moves to the third step of the compilation (the assembler takes the assembly code and return an object code) the out file is .o  

`gcc file.c -o outfile.exe` -> it does all the full steps of the compilation process (the last step is that the linker linkes the object code with the libraries) the out file is and excutable file
