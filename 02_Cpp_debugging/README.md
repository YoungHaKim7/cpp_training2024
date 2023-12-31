# .vscode

- launch.json

```json
{
    // Use IntelliSense to learn about possible attributes.
    // Hover to view descriptions of existing attributes.
    // For more information, visit: https://go.microsoft.com/fwlink/?linkid=830387
    "version": "0.2.0",
    "configurations": [
        {
            "type": "lldb",
            "request": "launch",
            "name": "Launch",
            "program": "${workspaceFolder}/out/${fileBasenameNoExtension}",
            "args": [],
            "cwd": "${workspaceFolder}",
            // "preLaunchTask": "C/C++: clang build active file"
        },
        {
            "name": "gcc - Build and debug active file",
            "type": "cppdbg",
            "request": "launch",
            "program": "${fileDirname}/out/${fileBasenameNoExtension}",
            "args": [],
            "stopAtEntry": false,
            "cwd": "${fileDirname}",
            "environment": [],
            "externalConsole": false,
            "MIMode": "lldb",
            // "preLaunchTask": "C/C++: clang build active file"
        }
    ]
}

```

- tasks.json

```json
{
    "tasks": [
        {
            "type": "cppbuild",
            "label": "C/C++: clang build active file",
            "command": "/home/gy/Utilities/llvm16_0_4/bin/g++",
            "args": [
                "-c",
                "-fcolor-diagnostics",
                "-fansi-escape-codes",
                "-g",
                "${file}",
                "-o",
                "${fileDirname}/out/${fileBasenameNoExtension}"
            ],
            "options": {
                "cwd": "${fileDirname}"
            },
            "problemMatcher": [
                "$gcc"
            ],
            "group": {
                "kind": "build",
                "isDefault": true
            },
            "detail": "Task generated by Debugger."
        }
    ],
    "version": "2.0.0"
}

```



# code

https://github.com/vadimcn/codelldb/wiki/Data-visualization

# Debugging C/C++ with LLDB Tutorial | constref

https://youtu.be/2GV0K9Y2MKA?si=U9SSALm76cbHEo6a
