g++ -c -DSUM stod.c
g++ -shared -o stod.dll stod.o -Wl,--out-implib,stod.a