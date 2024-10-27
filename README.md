# RéseauCapteurs_BusCan

![Project Overview](./path/to/your/image.png)

Ce projet consiste à collecter les informations de divers capteurs sur le terrain et à les transmettre au PC Host via un bus CAN. Différentes cartes microcontrôleurs ST-Nucleo sont utilisées pour recueillir les données des capteurs qui mesurent des paramètres environnementaux tels que la vitesse du vent, la luminosité, la distance, la pression, l’humidité, l’accélération et la rotation. Ces données sont centralisées et envoyées au PC pour une analyse en temps réel.

## Fonctionnalités

- Mesurer la **vitesse du vent** à l'aide d'un anémomètre Somfy.
- Contrôler un **servomoteur** Robotis Dynamixel.
- Mesurer la **luminosité** et la **distance** via un capteur VL6180X.
- Mesurer la **pression** et l'**humidité** via les capteurs ST LPS22HB et HTS221.
- Obtenir les données d'un **accéléromètre** et d'un **gyroscope** via le capteur MPU9250.
- Transmettre toutes les données via le **bus CAN** au PC Host pour analyse.

## Structure du Projet

Le projet est structuré en trois cartes microcontrôleurs ST-Nucleo qui communiquent via le bus CAN :
1. **Carte 1** : Contrôle du servomoteur et mesure de la vitesse du vent.
2. **Carte 2** : Collecte des données de luminosité, distance, pression et humidité.
3. **Carte 3** : Récupération des données de l'accéléromètre et du gyroscope.

## Installation

1. Cloner ce repository :
   ```bash
   git clone https://github.com/yourusername/RéseauCapteurs_BusCan.git
