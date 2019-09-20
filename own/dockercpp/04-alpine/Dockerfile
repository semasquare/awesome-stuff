FROM alpine

RUN apk --no-cache add g++

WORKDIR /app

COPY main.cpp /app

RUN g++ main.cpp -o /usr/bin/app

CMD ["app"]
