### Summary ###

<img src='http://farm5.static.flickr.com/4026/5160508755_0889f7f22f.jpg' alt='' />

Pure C++ Simple Polygon Library **version 0.04**

Linux natively + Win MinGW

In source **comments** now only **in Russian**

**License** allows you to use polypuch **freely in commercial** programs as long as you link with its library.

### Overview on Windows ###

Download && run http://polypuch.googlecode.com/files/polypuchWin.zip

### Overview on Ubuntu ###

Download && run http://polypuch.googlecode.com/files/polypuchLinux.zip

### Dependences ###

**zlib, libpng, sdl, sdl\_image, boost\_math\_tr1**

### Build on Linux ###

`svn checkout http://polypuch.googlecode.com/svn/trunk/ polypuch`

`cd polypuch/builds/linux`

`make clean && make`

if errors:

`rm -rf 'find . -name *.o'`

`rm -rf 'find . -name *.a'`

`make`

### Build on Windows ###

download ready to build MinGW http://polypuch.googlecode.com/files/MinGW.7z

un7zip it to disk **C:** (it is important)

add to your system PATH **;C:\MinGW\bin;C:\MinGW\msys\1.0\bin**

`svn checkout http://polypuch.googlecode.com/svn/trunk/ polypuch`

`cd polypuch/builds/win`

`make clean && make`

if errors:

`rm -rf 'find . -name *.o'`

`rm -rf 'find . -name *.a'`

`make`

### Run on Linux ###

`cd examples/example_name/`

`./example_binary_name`

### Run on Windows ###

do this once:
`cp _mingw_dependences/* /c/Windows/System32/`

`cd examples/example_name/`

`./example_binary_name`



enjoy `(-___w___-)`