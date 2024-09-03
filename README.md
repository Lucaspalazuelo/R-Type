# R-Type Project

`R-Type` is a Epitech third year project in C++ focused on developing a custom game engine(ecs) and a networked version of the classic game "R-Type." The primary goal is to create a multi-threaded server and a graphical client using advanced C++ techniques. The project is divided into two main phases:

1. **Core Architecture and Prototype**: In the first phase, the core architecture of the game engine is developed, and a basic prototype of the R-Type game is delivered. This includes implementing essential game features, such as player movement, enemy behavior, and a functional network communication system between the server and clients.

2. **Advanced Development**: In the second phase, the project is enhanced with additional features and optimizations. This may include advanced networking, gameplay improvements, and further development of the game engine's modularity and reusability.

The final deliverable is a fully playable networked game that demonstrates a solid understanding of game engine design and software engineering best practices.

## Documentation

- [Engine Documentation](engine/docs/DOCUMENTATION.md)
- [Client Documentation](client/docs/DOCUMENTATION.md)
- [Server Documentation](server/docs/DOCUMENTATION.md)
- [RFC Documentation](RFC-doc.md)

## How to build project ?
```
git clone git@github.com:EpitechPromo2026/B-CPP-500-LYN-5-1-rtype-keziah.picq.git
cd B-CPP-500-LYN-5-1-rtype-keziah.picq

sudo pacman -Syu cmake

mkdir client/build server/build engine/build
```


### Build Engine:

```
cd engine/build
cmake ..
make
```

### Build client:

```
cd client/build
cmake ..
make

Run Game Solo:

./r-type_client {GAME_PATH}


Run Game Multiplayer:

./r-type_client {SERVER_IP} {PORT} {GAME_PATH}
```

### Build server:

```
cd server/build
cmake ..
make
./r-type_server {PORT} {GAME_PATG}
```
