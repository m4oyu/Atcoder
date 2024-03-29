# Atcorder
2021 5/1 start as [MAOYU](https://atcoder.jp/users/MAOYU)

## Usage
`ctrl + shift + B`の後に
```
~/Atcorder$ ./problem.out < problem.in
```


## WSL2/GitHub/VSCode

### 5/3 以下のURLを参照してSSHキーの作成を行った.
[Generating a new SSH key and adding it to the ssh-agent](https://docs.github.com/en/github/authenticating-to-github/generating-a-new-ssh-key-and-adding-it-to-the-ssh-agent#adding-your-ssh-key-to-the-ssh-agent)

### 5/9 VSCodeの設定を行った.
Ctrl + Shift + B → コンパイル \
F5 → debug \
[Using C++ on Linux in VS Code](https://code.visualstudio.com/docs/cpp/config-linux)\
[Variables Reference](https://code.visualstudio.com/docs/editor/variables-reference)\
[WSL2とVSCodeでC++環境構築した](https://ntk-ta01.hatenablog.com/entry/2020/09/09/181155)

```
sudo apt update
sudo apt upgrade
sudo apt install gcc-9 g++-9
```

### clang-format install and config
vscodeの拡張機能からはうまく動作しなかったため
```
sudo apt install clang-format
clang-format -dump-config -style=Google > .clang-format
```
- 左クリック→format with..で選択
- 設定よりdefault formatterを選択

### debug
```
sudo apt install gdb -y
```


### Atcorder Library
以下はAtcorderLibraryの関連ファイル・フォルダ

- atcorder
- document_en
- document_ja
- expander.py