#include<stdio.h>
#include<dirent.h>
void main(){
    // These are data types defined in the "dirent" header
    DIR *theFolder = opendir("C:\\Users\\SHAHZAIB AHMED\\Desktop\\temp"); //i.e. path/of/folder
    struct dirent *next_file;
    char filepath[256];
    next_file=readdir(theFolder);
     printf("%s\n",next_file->d_name);
        system("pause");
    while ( (next_file = readdir(theFolder)) != NULL ){
        // build the path for each file in the folder
        printf("%s\n",next_file);
        system("pause");
        sprintf(filepath,"%s\\%s", "C:\\Users\\SHAHZAIB AHMED\\Desktop\\temp" , next_file->d_name);
		remove(filepath);
    }
    closedir(theFolder);
}
