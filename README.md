
# 🎯 猜数字游戏 (Guess Number Game)

[![](https://img.shields.io/badge/%E4%B8%BB%E9%A1%B5-Si--Yang--ME%2Fguess--number--game-orange)](https://github.com/Si-Yang-ME/guess-number-game)
[![](https://img.shields.io/badge/%E8%AE%B8%E5%8F%AF%E8%AF%81-AGPL--3.0-blue)](https://www.gnu.org/licenses/agpl-3.0.html)
[![](https://img.shields.io/badge/%E8%AF%AD%E8%A8%80-C-green)](https://github.com/Si-Yang-ME/guess-number-game)
[![](https://img.shields.io/badge/Version-1.0.0-orange)](https://github.com/Si-Yang-ME/guess-number-game)

一个用 C 语言编写的经典猜数字小游戏。

## 目录

- [背景](#背景)
- [安装](#安装)
- [用法](#用法)
- [主要项目负责人](#主要项目负责人)
- [参与贡献方式](#参与贡献方式)
    - [贡献人员](#贡献人员)
- [开源协议](#开源协议)

## 背景
```
这是我学习 C 语言时写的第一个小项目，用来练习指针、随机数生成、输入验证等基础知识。项目灵感来源于经典的猜数字游戏，玩家需要在有限的尝试次数内猜出计算机随机生成的数字。

项目完全开源，遵循 AGPL-3.0 许可证，欢迎各位开发者参考、学习和改进。

```
- 项目源码：[https://github.com/Si-Yang-ME/guess-number-game](https://github.com/Si-Yang-ME/guess-number-game)
- 参考标准 README 格式：[RichardLitt/standard-readme](https://github.com/RichardLitt/standard-readme)

## 安装

### 环境要求

```
- C 编译器（GCC / Clang）
- 支持 C99 标准的操作系统（Windows / Linux / macOS）
```
### 下载源码

```bash
git clone https://github.com/Si-Yang-ME/guess-number-game.git
cd guess-number-game
```

编译运行

```bash
gcc main.c -o guess
./guess
```

或者直接运行（如果已编译）：

```bash
./guess
```

用法

游戏规则

```
1. 程序启动后，会随机生成一个 1~100 之间的整数
2. 玩家输入猜测的数字
3. 程序会提示：
   · "大了" → 猜的数字比答案大
   · "小了" → 猜的数字比答案小
   · "对了" → 猜中答案，游戏结束
4. 每次猜测都会显示当前尝试次数
5. 输入非 1~100 的数字会提示错误并要求重新输入

```
运行示例

```
欢迎来到猜数字游戏
请输入数字1-100
50
不对,小了.请再次输入
尝试次数：1
75
不对,大了.请再次输入
尝试次数：2
63
对了.尝试次数：3
```

注意事项

```
· 程序只接受 1~100 范围内的整数
· 输入非数字字符（如字母、符号）会让你重新输入，不计入猜测次数

```
主要项目负责人

@许思阳 (Si-Yang-ME)

参与贡献方式

```
欢迎提交 Issue 和 Pull Request！

https://github.com/Si-Yang-ME/guess-number-game
```
贡献步骤
```
1. Fork 本项目
2. 创建功能分支 (git checkout -b feature/AmazingFeature)
3. 提交改动 (git commit -m 'Add some AmazingFeature')
4. 推送到分支 (git push origin feature/AmazingFeature)
5. 提交 Pull Request
```
贡献人员
```

感谢所有贡献的人！

@许思阳 (Si-Yang-ME)
```

开源协议
```
AGPL-3.0 © 许思阳 (Si-Yang-ME)

本项目是自由软件：您可以自由软件基金会发布的 GNU Affero 通用公共许可证的条款重新分发和/或修改它，无论是许可证的第 3 版，还是（根据您的选择）任何更高版本。

本程序的分发是希望它会有用，但没有任何担保；甚至没有对适销性或特定用途适用性的暗示担保。详情请参见 GNU Affero 通用公共许可证。
```
### ***在这个AI横行的时代，老一辈艺术家依旧坚持手搓.***
