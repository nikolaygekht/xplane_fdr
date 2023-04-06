New-Item -ItemType Directory -Force -Path ./cmake
Invoke-WebRequest -Uri 'https://raw.githubusercontent.com/onqtam/ucm/master/cmake/ucm.cmake' -OutFile 'cmake/ucm.cmake'
Invoke-WebRequest -Uri 'https://developer.x-plane.com/wp-content/plugins/code-sample-generation/sample_templates/XPSDK401.zip' -OutFile 'XPSDK401.zip'
Expand-Archive -Force '.\XPSDK401.zip' '.\'
Remove-Item .\XPSDK401.zip