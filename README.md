# ProgImpAv-2020-Ex1
Modèle de départ pour exercices d'introduction à Visual Studio Code, au débogueur, à la gestion de versions et github.com.

## Instructions de départ

1. Créez un compte github.com.
1. Créez une clé SSH. (Pas strictment nécéssaire mais évite d'avoir à retaper votre mot de passe github.)
    - Suivez ces instructions: https://help.github.com/en/github/authenticating-to-github/generating-a-new-ssh-key-and-adding-it-to-the-ssh-agent.
    - Et celles-ci: https://help.github.com/en/github/authenticating-to-github/adding-a-new-ssh-key-to-your-github-account.
1. Créez votre dépot sur github.com en utilisant ce dépôt-ci (https://github.com/thierryseegers/ProgImpAv-2020-Ex1) comme modèle.
    - Suivez ces instructions: https://help.github.com/en/github/creating-cloning-and-archiving-repositories/creating-a-repository-from-a-template.
    - Choisissez l'option `Private` à l'étape 5.
1. Ajoutez le professeur comme collaborateur à votre dépot.
    - Suivez ces instructions: https://help.github.com/en/github/setting-up-and-managing-your-github-user-account/inviting-collaborators-to-a-personal-repository
        - Nom d'utilisateur à ajouter: `thierryseegers`.
1. Clonez votre dépot vers votre espace de travail local.
    - Suivez ces instructions: https://help.github.com/en/github/creating-cloning-and-archiving-repositories/cloning-a-repository
    - Attention à ne pas cloner https://github.com/thierryseegers/ProgImpAv-2020-Ex1 mais bien votre dépôt nouvellement créé.
1. Lancez Visual Studio Code.
    - À l'invite de commande:
        - `> cd [nom de votre dépôt]`
        - `> code .`
1. Installez l'extension `C/C++` pour Visual Studio Code.
    - Suivez ces instructions: https://code.visualstudio.com/docs/languages/cpp#_install-the-microsoft-cc-extension.
1. Pour travailler sous MacOS, installez aussi Xcode et l'extension `CodeLLDB` pour Visual Studio Code.
    - Installez Xcode via le App Store.
    - Installez "Xcode Command Line Tools". À l'invite de commande: `> xcode-select --install`
    - https://marketplace.visualstudio.com/items?itemName=vadimcn.vscode-lldb
1. Compilez une première fois le programme.
    - Menu: `View` > `Command Palette` > `Tasks: Run Build Task`
1. Executez une première fois le programme avec le débogueur.
    - Menu: `View` > `Debug`
    - Choisissez la cible correspondant à votre system opérateur.
        - Menu déroulant `DEBUG`: {`test (Linux)`, `test (MacOS)`}
    - Menu: `Debug` > `Start debugging`

