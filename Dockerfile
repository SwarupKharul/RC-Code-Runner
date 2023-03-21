FROM alpine:latest

WORKDIR /

COPY ./build/task-runner ./task-runner

COPY ./codes ./codes

RUN chmod -R 777 codes/

RUN chmod +x task-runner

EXPOSE 8000

CMD ["./task-runner"]