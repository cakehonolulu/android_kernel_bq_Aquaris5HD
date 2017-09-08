# 3.4.67 Open Source Kernel for bq Aquaris 5 HD

## What is this?

This repo contains all the required things to compile the Linux Kernel source code for the device: bq Aquaris 5 HD

## Setting up development environment

In order to compile the source code right, we need the arm-eabi toolchain downloaded in our Hard drive (arm-eabi-4.7 preferred) and declare it as a environment variable:

```export CROSS_COMPILE=/path/to/arm-eabi-4.6/bin/arm-eabi-
```

## Compiling

To compile the source code, all we need is run the building command in our kernel's root folder:

```./makeMtk -t -o=TARGET_BUILD_VARIANT=user eastaeon89_wet_kk n k
```
Once it completes the build, you will have the kernel image named as "zImage" in the out/target/product/eastaeon89_wet_kk/KERNEL_OBJ/arch/arm/boot/ folder.