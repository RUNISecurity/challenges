FROM red.pwn/jail

COPY --from=debian:stable-slim / /srv/

# install gcc
RUN apt-get update && apt-get install -y gcc

RUN mkdir /srv/app
COPY ./src/pwn1.c /srv/app/pwn1.c

# compile the source code with correct flags
RUN gcc -o /srv/app/run /srv/app/pwn1.c -fno-stack-protector -no-pie

ENV JAIL_TIME=30

