Learning center: https://learn.onshape.com/
Absolument tout de OnShape est dans un cours dans le site

Dans l'équipe Rover se trouve le dossier Pièces Standard et le projet Rovus - V2. Toutes les pièces, les assemblages et les systèmes se font dans le projet Rovus - V2, les pièces achetées ou de dimension standard sont importées dans le dossier Pièces Standard.

**_Part Studio_**
Un Atelier de pièce est un document où on crée des pièces. Voici quelques guidelines

- un atelier de pièce par sous-assemblage ou par groupe de pièce logique
- maximum de 10 pièces par atelier de pièces
- Si une pièce se répète dans un assemblage, créer une seule fois la pièce et l'importer plusieurs fois dans l'assemblage.

**_Assemblage_**
Un assemblage représente la version asemblée de quelques pièces, un sous-système. Un assemblage peut avoi plusieurs autres assemblages, des pièces créée et des pièces standards. Voici quelques guidelines:

- il est mieux de faire plusieurs sous-assemblages qu'un seul gros, comme des blocs LEGO
- Bien contraindre les pièces entres-elles pour imiter le mouvement réel
- Mettre des relations avancées (engrenage, crémaillères, tangent, etc) suelement si c'est pas pour l'esthétisme (checker les interférences genre)

Connecteur de position: triad, représente les 3 axes et les 3 rotations

Contraintes

Fixe: Bloque tous les degrés de liberté des deux connecteurs de position. Utilisé si 2 pièces sont fixées en place par des vis ou wtv

Révolution: Permet seulement la rotation en Z (bleu) entre 2 connecteurs de position.

Glissière: Permet seulement la translation en Z (bleu) entre 2 connecteurs de position

Planaire: Permet le mouvement en 2D sur une face (rotation en Z et translation en X et Y)

Cyclindrique: Permet la rotation et la translation en Z seulement

Rainure: Permet la translation en X et la rotation en Z (permet un déplacement dans une rainure)

Rotule: Permet toutes les rotations, mais aucune translation

Parallèle: Garde 2 plans parallèle, mais peut translater dans toutes les direction en plus de la rotation en Z
