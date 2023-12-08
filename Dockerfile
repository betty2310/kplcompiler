FROM ubuntu:22.04

WORKDIR /compiler

RUN apt-get update && apt-get install -y build-essential gdb lsof

COPY . /compiler

VOLUME /compiler

CMD ["bash"]
