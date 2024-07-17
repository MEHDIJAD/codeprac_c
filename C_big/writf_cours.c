#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>  // file control header : have fuctions that allows you to control files

int main()
{
    int fd = open("file.txt", O_RDWR | O_CREAT, 0600); // this will creat a file in my working diractory
    // open(it open a file ,  (0_RDWR | 0_CREAT)flags that open the file in reading and writing mode , (0600) permission for te file)

    // understand fd concept
    write(fd, "hello",5);

    printf("%d\n",fd);

//  this code will send the bytes from the buffer to a "file.txt" file and not into the display
//  it will write what we give it in file.txt
}

