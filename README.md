# swan
This repository consists of include headers containing structures and function prototypes for interfacing with the Pokémon White 2 game binaries through code injection. The code within the .h files is almost in all cases automatically generated from the `root.swandb` database, included in the repo's root directory.

## Contributing

Want to add a new structure or function to swan? It couldn't be any simpler! First, download [CTRMap](https://github.com/kingdom-of-ds-hacking/CTRMap-CE/) and the Gen V plug-in, then create a White 2 project and open the `Extras` tab. You should see a `SwanComposer` button, which, upon clicking, will invoke an intuitive GUI for manipulating the `root.swandb`. Once you're done with your edits in SwanComposer, save the database (`Ctrl+S`) and *generate* the updated include headers (`Ctrl+G`). Then you're all set for submitting a PR!