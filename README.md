# Process Memory Inspector

A Linux-based system programming tool that inspects and analyzes process-level information and memory layout using the `/proc` filesystem. The application provides a structured view of how a process is organized in memory, including code, data, heap, stack, and other kernel-mapped regions. It is designed to offer practical insight into operating system concepts and low-level memory management.

## Features
- Retrieves essential process details such as name, PID, state, and thread count
- Parses and displays memory mappings from `/proc/<pid>/maps`
- Classifies memory regions into TEXT, DATA, HEAP, STACK, VDSO, VVAR, and anonymous segments
- Calculates and presents memory region sizes in kilobytes
- Handles unnamed (anonymous) mappings for clearer understanding
- Modular design with separation of interface and implementation

## Project Structure
.
├── main.c                          Entry point and user interaction  
├── process.c                       Core implementation logic  
├── ProcessMemoryInspector_header.h Function declarations  

## Working Principle
The program reads system-generated files from the Linux `/proc` filesystem:
- `/proc/<pid>/status` for process metadata  
- `/proc/<pid>/maps` for memory layout  

It parses this information and organizes it into a readable format for analysis.

## Compilation and Execution
Compile the program:
gcc ProcessMemoryInspector_main.c ProcessMemoryInspector_process.c -o myexe

Run the executable:
./myexe

Enter a valid process ID when prompted (use `ps` to list active processes).

## Concepts Covered
- Linux process management
- `/proc` filesystem internals
- Memory segmentation (text, data, heap, stack)
- File handling and parsing in C
- Modular programming and header usage

## Use Cases
- Understanding internal memory structure of processes
- Studying operating system concepts through practical implementation
- Academic learning and technical interviews
- Basic process-level debugging and inspection

## Notes
- Designed for Linux-based environments only
- Requires a valid and active process ID
- Access to certain processes may require elevated permissions

## Author
Varad Muley  
