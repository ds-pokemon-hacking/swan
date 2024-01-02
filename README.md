# swan
This repository consists of include headers containing structures and function prototypes for interfacing with the Pokémon Black 2 and White 2 game binaries through code injection. It also contains the external symbol databases (ESDB) needed to properly resolve functions during linking.

The code within the `.h` files is almost in all cases automatically generated from the `root.swandb` database, included in the repo's root directory.

The symbol databases for each game, located in `IRDO.yml` and `IREO.yml`, contain the addresses for each function in the game RAM. This is used during linkage time to resolve functions, allowing these headers to directly bind to them. **They are not cross compatible, because both games have a different memory layout**.

## Contributing
### Updating the External Symbol Database (ESDB)
Find a new function or data segment? Do some research on an overlay which no-one has previously? Want to add it to swan? Look no further!

- Ensure that the segment names & naming conventions are consistent with the ones you see in these databases. 

- Use [ESDBMerge](https://github.com/kingdom-of-ds-hacking/ESDB-Tools) to generate a new merged database. 
    - In the `old` slot, you should use `IRDO.yml` or `IREO.yml` depending on what game your database is for. 
    - In the `new` slot, you should use the database containing your research that you want to merge.
    - Resolve all of the naming conflicts as they arise, making sure to keep the naming consistent.
- Submit the new database for review via pull request.

### Updating Headers
Want to add a new structure or function to swan? It couldn't be any simpler! 
- First, download [CTRMap](https://github.com/kingdom-of-ds-hacking/CTRMap-CE/) and the Gen V plug-in, CTRMapV. 
- Create a Pokémon Black 2 & White 2 project, and open the `Extras` tab. 
- You should see a `SwanComposer` button, which, upon clicking, will invoke an intuitive GUI for manipulating the `root.swandb`. 
- Once you're done with your edits in SwanComposer, save the database (`Ctrl+S`) and *generate* the updated include headers (`Ctrl+G`). Then you're all set for submitting a PR!