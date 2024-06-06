# 贡献指南
## API文档
请查看 [TODO.md](TODO.md)
## 约定式提交

我们遵循约定式提交规范来编写我们的提交消息。每个提交消息应该具有以下格式：

```plain-text
<类型>(<范围>): <描述>

[可选正文]

[可选页脚]
```

其中 `<类型>` 应该是以下之一：

- **feat**: 新功能
- **fix**: 修复 Bug
- **docs**: 文档更改
- **style**: 不影响代码含义的更改（如空格、格式化、缺失的分号等）
- **refactor**: 代码重构
- **test**: 添加缺失的测试或更正现有测试
- **chore**: 对构建过程或辅助工具和库的更改（如文档生成）

## 贡献

### 技术栈

- g++: gcc  10.3.0 (tdm64-1) 或以上
- cmake： 3.29.4

### 依赖项

1. 依赖项配置


   [Cmake](https://github.com/Kitware/CMake/releases/download/v3.29.4/cmake-3.29.4-windows-x86_64.msi)

   [tdm-gcc](https://github.com/jmeubank/tdm-gcc/releases/download/v10.3.0-tdm64-2/tdm64-gcc-10.3.0-2.exe)
   

2. 为更改创建一个新的分支：

   ```bash
   git checkout -b new-feature
   ```

3. 进行更改并按照约定式提交规范进行提交。
4. 将更改推送到 Fork 的仓库：

   ```bash
   git push origin new-feature
   ```

5. 向主仓库的 `main` 分支提交拉取请求。

### 项目的 构建与运行
```bash
   mkdir build
   cd build
   cmake -G "MinGW Makefiles" ..
   mingw32-make
```
## 代码风格

请注意进行 代码格式化 建议用 clang-format vscode扩展

使用 Google Style

请在设置打开 焦点离开编辑器时保存

保存时自动格式化

https://blog.csdn.net/halazi100/article/details/129007869


注意英文单词的拼写