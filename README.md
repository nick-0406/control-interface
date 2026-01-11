**Description**

Ce projet permet de contrôler l’état d’une lampe (ON/OFF) et de lire la température ambiante via une interface PC, en utilisant une carte Arduino et un capteur DHT11.

La lampe peut être simulée par une LED ou pilotée par un relais, offrant ainsi une approche à la fois pédagogique et proche d’un cas réel d’intégration matérielle.

**Objectifs du projet**

Mettre en place une communication PC ↔ Arduino

Contrôler un actionneur (LED ou lampe via relais)

Lire et transmettre une donnée capteur (température)

Comprendre l’intégration capteurs / actionneurs / logiciel

**Matériel utilisé**

Arduino (Uno / Mega / équivalent)

Capteur de température DHT11

LED ou module relais

Lampe (optionnel, via relais)

Résistances, fils de connexion

Ordinateur (interface PC)

**Fonctionnalités**

Allumage / extinction de la lampe depuis le PC

Lecture en temps réel de la température via le DHT11

Affichage de l’état de la lampe et de la température sur l’interface PC

Choix du mode :

LED pour les tests et démonstrations

Relais + lampe pour une utilisation plus réaliste

**Principe de fonctionnement**

Le PC envoie une commande à l’Arduino via une interface série

L’Arduino :

Active ou désactive la LED / le relais

Lit la température via le capteur DHT11

Les informations sont renvoyées vers le PC pour affichage

**Structure du projet**
/src
  ├── arduino_code.ino
/interface_pc
  ├── interface.py (ou autre)
/docs
  ├── schéma de câblage

**Lancement du projet**

Connecter le DHT11 et la LED ou le relais à l’Arduino

Téléverser le code Arduino

Lancer l’interface PC

Contrôler la lampe et visualiser la température

**Améliorations possibles**

Ajout de l’humidité (DHT11)

Interface graphique plus avancée

Communication via Wi-Fi ou Bluetooth

Sécurisation des commandes

Support d’autres capteurs

👤 Auteur

Projet réalisé dans un cadre d’apprentissage des systèmes embarqués, de la communication matérielle et de l’intégration capteurs/actionneurs.