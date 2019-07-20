cd /usr/src/linux-2.4.20
sudo make proper
sudo make menuconfig
sudo make dep
sudo make clean
sudo make bzImage
sudo ls -l arch/i386/boot
sudo make modules
sudo make modules_install
sudo /sbin/mkinitrd -f /boot/initrd-2.4.20-10.img 2.4.20-10
sudo cp -f arch/i386/boot/bzImage /boot/bzImage-2.4.20-10
sudo cp -f System.map /boot/System.map-2.4.20-10
sudo ln -sf /boot/System.map-2.4.20-10 /boot/System.map
