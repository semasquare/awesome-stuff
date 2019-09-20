FROM ubuntu:18.04

RUN apt-get update -qq \
    && apt-get install -qq -y \
    g++ \
    && rm -rf /var/lib/apt/lists/*

WORKDIR /app

COPY main.cpp /app

RUN g++ main.cpp -o /usr/bin/app

CMD ["app"]
