<div align="center">

# C语言学习仓库

这个仓库是专门存放在三职学习 C 语言时上课（以及课后）所创建的 C 语言文件。

<br>

<a href="http://www.tgc.edu.cn">
  <img src="https://img.shields.io/badge/三职官网-blue" alt="三职官网">
</a>
&nbsp;&nbsp;&nbsp;
<a href="https://v.douyin.com/BNZKom-4MRs/">
  <img src="https://img.shields.io/badge/抖音主页-鱼子酱-red?style=flat-square&logoColor=white" alt="抖音主页+鱼子酱">
</a>
&nbsp;&nbsp;&nbsp;
<a href="#">
  <img src="https://img.shields.io/badge/Made%20with-C语言-black" alt="Made with C语言">
</a>

<br><br>

</div>

- 包含课程作业、课后练习以及练手的小程序
- 文件均为 C 语言源码，便于学习和复习
- 欢迎参考，但请勿用于商业用途
- 因为我不知道我写的啥

---

## 🛠️ 编译与运行（CMake + Ninja）

本项目使用 CMake 构建，所有程序可通过以下步骤编译运行：

```bash
# 1. 克隆仓库
git clone https://github.com/你的用户名/你的仓库名.git
cd 你的仓库名

# 2. 创建构建目录并生成 Ninja 脚本
mkdir build && cd build
cmake .. -G Ninja

# 3. 一键编译所有程序
ninja

# 4. 运行指定程序（例如 test1）
./test1
