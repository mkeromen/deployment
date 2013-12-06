#!/bin/bash
echo Activation du mode maintenance
drush vset maintenance_mode 1
echo Suppression des fichiers de cache
drush cc all
echo Lancement du cron
drush cron
echo Désactivation du mode maintenance
drush vset maintenance_mode 0
