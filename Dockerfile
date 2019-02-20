from ubuntu:latest

run apt-get update && apt-get install -y \
vim \
git \
gcc \
build-essential

run git config --global user.email og.ginger@gmail.com

volume /home/

workdir /home/
