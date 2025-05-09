# LittleOS 操作系统项目

这是一个简单的操作系统项目，实现了基本的操作系统功能。

## 项目结构

### 核心文件
- `kmain.c` - 操作系统内核的主入口点，包含初始化函数和主循环
- `loader.S` - 系统引导加载器，负责加载操作系统内核
- `link.ld` - 链接器脚本，定义内存布局和段结构

### 内存管理
- `gdt.h`/`gdt.c` - 全局描述符表(GDT)的实现
- `idt.h`/`idt.c`/`idt_asm.S` - 中断描述符表(IDT)的实现
- `lgdt.S` - 加载GDT的汇编代码

### 设备驱动
- `device.h`/`device.c` - 设备抽象层
- `serial.h`/`serial.c` - 串口通信驱动
- `fb.h`/`fb.c` - 帧缓冲驱动
- `framebuffer.c` - 帧缓冲实现
- `io.h`/`io.S` - 输入输出操作

### 工具和辅助功能
- `utils.h`/`utils.c` - 通用工具函数
- `Makefile` - 项目构建脚本
- `bochsrc.txt` - Bochs模拟器配置文件

### 构建输出
- `kernel.elf` - 编译后的内核可执行文件
- `os.iso` - 可引导的ISO镜像
- `*.o` - 编译后的目标文件

## 构建说明

1. 确保已安装必要的工具链（gcc, nasm, ld等）
2. 运行 `make` 命令构建项目
3. 使用 `make run` 在Bochs模拟器中运行系统

## 功能特性

- 基本的引导加载
- 内存管理（GDT/IDT）
- 设备驱动（串口、帧缓冲）
- 简单的输入输出功能

## 开发环境

- 操作系统：Windows/Linux
- 编译器：GCC
- 汇编器：NASM
- 模拟器：Bochs 