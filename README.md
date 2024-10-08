# The Legend of Zelda: Spirit Tracks

Note: currently this is mostly a "trying out dsd" repo, it will be cleaned up later once everything works.
Also I want to automate the setup process, i.e running the `dsd rom extract` and `dsd init` commands automatically from running `configure.py`. 

My goal is to provide a working template repository for DS decomps.

---

A work-in-progress decompilation of The Legend of Zelda: Spirit Tracks.

Supported versions:
- `st-j`: Spirit Tracks - Japan

Currently the decompilation mainly targets the `st-j` version.

## Building

### Requirements

You will need the following dependencies:
* git
* ninja
* python3
* wine (for macOS or non-x86 Linux)
* clang-format (optional)

#### Ubuntu/Debian/Windows (WSL)

You can install the dependencies with the following commands:

```
sudo apt-get update
sudo apt-get install git ninja-build python3
```

#### macOS

You can install dependencies via Homebrew with the following command:

```
brew install git ninja python3
brew install --cask --no-quarantine gcenx/wine/wine-crossover
```

#### Windows (Native)

You will need the following dependencies:
- [ninja.exe](https://github.com/ninja-build/ninja/releases/latest)
- Python (make sure to add it to your PATH during the installation)
- [Git for Windows](https://www.git-scm.com/downloads)

You need to add ``C:\Program Files\Git\bin`` to your system's PATH (not the user one) in order to execute bash scripts properly.

To get objdiff to work properly you also need to add the path to the folder containing ``ninja.exe`` to the system's PATH.

### Instructions

1. Clone the repo using `git clone https://github.com/yanis42/st`.

2. Get the ARM7 bios and place it inside `orig/arm7/arm7.bin`

3. Run `python tools/setup.py`

### TODO: automate this

4. Run `dsd.exe rom extract -r orig/VERSION/game.nds -7 orig/arm7/arm7.bin -o test/`

## Development Tools

### objdiff

For local decompilation testing, start the [objdiff](https://github.com/encounter/objdiff) GUI and open this directory as the project directory.

## License

This project is licensed under CC0. Some tools might have their own license.
