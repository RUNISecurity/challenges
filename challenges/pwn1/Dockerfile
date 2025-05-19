FROM pwn.red/jail

COPY --from=debian:stable-slim / /srv/

RUN mkdir /srv/app
COPY ./src/pwn /srv/app/run

ENV JAIL_TIME=30

