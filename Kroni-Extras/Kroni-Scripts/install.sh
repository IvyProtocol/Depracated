set -e

# AUR Helper
git clone https://aur.archlinux.org/yay.git && cd yay && makepkg -si

#Install AUR Packages
yay -Syu --needed - < ~/Kroni4w/Kroni-Extras/Kroni-Scripts/pkgs.sh
curl https://mirror.cachyos.org/cachyos-repo.tar.xz -o cachyos-repo.tar.xz
tar xvf cachyos-repo.tar.xz && cd cachyos-repo
sudo ./cachyos-repo.sh

mv ~/Kroni4w/Kroni-Extras/* ~/
mv ~/Kroni4w/* ~/.config/
~/Kroni-Scripts/services.sh


