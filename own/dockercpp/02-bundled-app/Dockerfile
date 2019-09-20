FROM ubuntu:18.04 AS builder

RUN apt-get update -qq \
    && apt-get install -qq -y \
    g++ \
    && rm -rf /var/lib/apt/lists/*

WORKDIR /app

COPY main.cpp /app

RUN g++ -static main.cpp -o /usr/bin/app

FROM scratch

COPY --from=builder /usr/bin/app /usr/bin/

CMD ["app"]
