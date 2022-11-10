# Reverse-Engineering 101

Thanks a lot for subscribing to our reverse-engineering training aimed at beginners! This page contains all materials you will need to follow the course and will guide you through the steps needed to set up your work environment.

### Preparing your virtual machine

The first thing you will need is a virtual machine running Windows – official images can be downloaded freely from [this page](https://developer.microsoft.com/en-us/windows/downloads/virtual-machines/).. You can choose whichever hypervisor you prefer (VirtualBox, VMware, etc.) or already have installed, it doesn't matter.
Importing a virtual machine is usually as simple as double-clicking on the .OVF file contained in the downloaded archive.

Virtual machines distributed by Microsoft already contain most of the development tools we need (such as Visual Studio, Git, etc.), but we still need to add the reverse-engineering tools used throughout the course.
Before you're able to move on with the videos, you will have to download and install the following software inside the VM:

| Program | Download page | Description
| --- | --- | --- |
| IDA Free | https://hex-rays.com/ida-free/#download | Disassembler, used to display the assembly instructions contained in analyzed programs |
| x64dbg | https://sourceforge.net/projects/x64dbg/files/snapshots/ | Debugger, runs programs instruction by instruction and displays the contents of registers and memory |
| 010 Editor | https://www.sweetscape.com/download/010editor/ | Hexadecimal editor (30 day trial) |
| Rust & Cargo | https://www.rust-lang.org/tools/install | Toolchain used to compile Rust programs, for Track 8 of the course |
| Manalyze | https://manalyzer.org/static/manalyze_x64.zip | Static analyzer, displays information contained in the various headers of PE files |
| setdllcharacteristics | https://blog.didierstevens.com/2010/10/17/setdllcharacteristics/ | Utility that allows you to easily disable ASLR in compiled programs |

### Getting the samples used in the course

The samples used in this training are hosted in this repository and can be downloaded directly as a [ZIP archive](https://github.com/KasperskyLab/xtraining-re101/archive/refs/heads/main.zip), or with the following command:

```bash
git clone https://github.com/KasperskyLab/xtraining-re101.git
```

This repository contains one folder for each of the course's track, with all the corresponding source code and exercises.
Please note that the sample for Track 9, which is a (fake) malware to analyze, is stored in a password-protected archive to prevent triggering security solutions. As is tradition, the password for this archive is `infected`.

### Troubleshooting

Virtual machines being deployed on student hardware outside of our control, we will not be able to provide assistance related to the use of your hypervisor – whichever it is.
Please **only** open GitHub tickets to report issues with these instructions or the files distributed for the course.
Inquiries regarding the videos, exercises and solutions to the exercises should be directed to the Xtraining support staff directly.
