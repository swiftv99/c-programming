### To authorize ssh key by adding it to ssh agent

```
eval "$(ssh-agent -s)"
ssh-add ~/.ssh/id_ed25519_for_wsl
ssh-add ~/.ssh/id_ed25519_for_wsl_auth
```
