if not exist build64 md build64
cd build64
cmake -G "Visual Studio 17" -A x64 -DCMAKE_BUILD_TYPE=Release ..
msbuild ng.xplane.fdr.sln /p:Configuration=Release /p:Platform=x64
copy .\Release\ng.xplane.fdr.dll ..\win.xpl