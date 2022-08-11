

Linux kernel
============

There are several guides for kernel developers and users. These guides can
be rendered in a number of formats, like HTML and PDF. Please read
Documentation/admin-guide/README.rst first.

In order to build the documentation, use ``make htmldocs`` or
``make pdfdocs``.  The formatted documentation can also be read online at:

    https://www.kernel.org/doc/html/latest/

There are various text files in the Documentation/ subdirectory,
several of them using the Restructured Text markup notation.

Please read the Documentation/process/changes.rst file, as it contains the
requirements for building and running the kernel, and information about
the problems which may result by upgrading your kernel.

Mediatek kernel
============

To build the kernel for the bq Aquaris 5 HD's MT6589 ARM phone, we need to
feed the build system a few environment variables:

First and foremost, we need to configure the cross-compiler path:

``export PATH=path_to_your_cross_compiler/bin/:${PATH}``

``export CROSS_COMPILE=cross-compiler-prefix-``

My personal recommendation is to use arm-eabi-4.7 or any armv7-specific compiler

If you use the recomendations above; the variables should look something like this:

``export PATH=arm-eabi-4.7/bin/:${PATH}``

``export CROSS_COMPILE=arm-eabi-``

Afterwards, we need to set the target board config for compilation; in our case ``lcs89_we_jb2``:

``export TARGET_KERNEL_PRODUCT=lcsh89_we_jb2``

Then, it's as easy as: ``./build.sh``

Kernel should be left @ ``arch/arm/boot/zImage``

