from ubuntu:latest

run apt-get update && apt-get install -y \
vim \
git \
gcc \
build-essential

run git config --global user.email og.ginger@gmail.com

copy config/build /usr/local/bin/
copy config/vimrc /etc/vim/vimrc

volume /home/

workdir /home/
