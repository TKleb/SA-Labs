# Lab Files and Folders Naming
- Lab names are capitalized and multiple words separated by an underline "_"

- All Markdown files (files ending in .md) are capitalized
- Folders on the top level are capitalized
- Everything else is not capitalized
- Words in top level foldernames are separated by an underline "_"
- Every other file is named in kebab-case (the-name)

## Folder Structures
Each lab has to have a documentation folder. 

Documentation folder consists of:
- Images-folder (optional)
- Section 1 folder containing the markdown files for the first section 
- Section 2 folder containing the questions and flag step (optional)
- Text markdown begins with an underline "_" 
- A flag markdown explaining what the flag is (static) or if it needs to be generated
- A mode markdown explaining in which mode the lab should be hosted on (optional steps, competitive, training)

Binary folder consists of:
- Code folder containing the source code for the compiled files
- Release folder containing the compiled files

Docker folder consists of:
- A root folder containing the files to create the docker (s6 overlay)
- Docker-compose YAML file
- Dockerfile
- Env file containing the flag

Additional Folder can be created if needed

## Example Tree
```bash
├── Docker
│   ├── root
│   ├── docker-compose.yml
│   ├── Dockerfile
│   └── **/*.env
├── Documentation
│   ├── images
│   ├── section1
│   │   ├── _Text.md
│   │   ├── Step1.md
│   │   └── Step2.md
│   ├── section2
│   │   ├── _Text.md
│   │   └── Step1.md
│   ├── Flag.md
│   └── Mode.md
├── Binary
│   ├── code
│   └── release
└── Additional_Folders (opional)

```