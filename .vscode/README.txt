The project is created in Visual Studio Code, so you need to configure some of the builtin files for this project to run in VSC.

The three files namely c_cpp_properties.json, launch.json and task.json are the main one whereas settings.json is not compulsory I just 
pushed it to this project so you can look the way I use VSC with a bit handy customization.

c_cpp_properties.json :-> It is for confiquring browse and include paths for and I configured only for windows as I am using that but you  can easily configure it for linux and mac, process goes similar to windows. Also you should browse th path of c++ according to where it is placed in your PC, like mine is C:\\MinGW\\mingw32\\lib\\gcc\\i686-w64-mingw32\\8.1.0\\include\\c++. Remember to point double slashes for escape character reasons.

task.json :-> It is configured to pass all cpp files as argument to g++. Remember we are only needed to pass .cpp files and not .h because
only .cpp files are needed to be compiled via g++. And you can give any label to the log mine is  <DooRA />.
              
launch.json :-> This file is to enable debugger in VSC. Provide appropriate path to gdb debugger and also you can set any preLaunchTask
like I set <DooRA /> you can also set PowerShell or bash but in those cases especially for bash you need to have everything already there required for c++.               
