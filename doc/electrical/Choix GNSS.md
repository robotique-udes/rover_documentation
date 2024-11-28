Ce document-ci vise à rassembler sous une forme cohérente les choix faits pour le système de GNSS du rover.

**Définitions :
- [RTK](https://www.use-snip.com/kb/knowledge-base/rtk-ntrip-rtcm-precision-gnss-in-1-minute/): Real Time Kinematics - Méthode de correction de la position du gnss à l'aide de calculs et de données de correction.
- [RTCMP](https://www.use-snip.com/kb/knowledge-base/rtk-ntrip-rtcm-precision-gnss-in-1-minute/) : Format de données/données elles-mêmes qui sont transmisent au rover afin de faire les calculs de correction RTK.


**Système :

On veut avoir la position et le heading du rover, mais on a pas besoin du pitch et du roll. [On peut avoir ça avec deux antennes RTKGNSS sur le rover](https://www.vectornav.com/resources/inertial-navigation-primer/theory-of-operation/theory-gnsscompass)

Pour les boards RTKGNSS, acheter la chip et faire nos propres boards reviens quasiment plus cher que d'acheter des options cots. Aussi, je n'ai pas trouvé d'option avec les connecteurs à antennes directement sur la chip.
[Chip seule](https://www.mouser.ca/ProductDetail/u-blox/ZED-F9P-04B?qs=A6eO%252BMLsxmSiFL7BNeNjVA%3D%3D&mgh=1&utm_id=17633666059&gad_source=1&gclid=Cj0KCQiAo5u6BhDJARIsAAVoDWsd6YfNysgp_09vO_MAsZLoAEiAznOqOavnYu77VZnngEN4WAL9w60aArtCEALw_wcB)
[Board avec la même chip](https://www.amazon.ca/WITMOTION-WTRTK-980-Precision-Positioning-Real-Time/dp/B0CY28WHGX/ref=sr_1_22_sspa?crid=2SKTST2H7JUIV&dib=eyJ2IjoiMSJ9.xtuCviynONMohDdXcsXfZmkOHe9FKhkfIrCHZtRSLN-RKipeDrgXBfSirD2DKeb2pvgSyRS1TAZ0fm45i1IFG5dQwtgExLJWaNPu8pGX_cmzi7cA2F3ns-XuNaySr9NhtWq_o1w6ggGmpSXgi3uSOS0iNVOooZy0Dx7iI-ufVcbrU4P4X6_CpBjPgQUrWifzW67bCORzo8dmCYJBPjfouMU39bh_rrv-PTwbi-7L24lsrB9IYk9SBC5XskSJCU1Y-kafTmSg21SWPTrADAnjp_DSA5oECzlYEbCd1WvpPVs.UYVDHsb4hdRtMLCmXWHqIEXgSCm-rIOO0KbcdDs0jNk&dib_tag=se&keywords=rtkgnss+gps&qid=1730936838&sprefix=rtkgnss+gps%2Caps%2C98&sr=8-22-spons&sp_csd=d2lkZ2V0TmFtZT1zcF9tdGY&psc=1)

Pour les boards. la meilleure option est le [UM982](https://www.amazon.ca/WITMOTION-WTRTK-982-Precision-Positioning-Real-Time/dp/B0CY3HYRWG/ref=sr_1_1?crid=1T58CIZ73JONY&dib=eyJ2IjoiMSJ9.4FeeaWhtB3zdqqAcfAz3DA.qBC-jPLPzzIUwXTgpiISB8T6eWCaFaAum53PznP6zxQ&dib_tag=se&keywords=wtrtk-982&qid=1730937046&s=electronics&sprefix=wtrtk-98%2Celectronics%2C102&sr=1-1).
Il a deux connecteurs pour antennes et est capable de calculer la position et le heading.

Un ground plane est utile afin d'aider à réduire le bruit.
[Rien vs rond vs carré vs pcb](https://ars.copernicus.org/articles/20/23/2023/ars-20-23-2023.html)
Donc un ground plate rond de 10 à 15cm est pas mal parfait.

Donc, pour RTK, il nous faut une base station à partir de laquelle obtenir les données nécessaires à la correction. On peut soit utiliser un des signaux RTCMP émis par un réseau d'une tierce partie ou faire notre propre base station.

**Réseau existant :
(Est-ce qu'il y a un réseau disponible autant à Sherbrooke qu'à Drumheller? Quel sont les coûts? Possibilité de sponso? )
[Liste de réseaux au canada](https://webapp.csrs-scrs.nrcan-rncan.gc.ca/geod/data-donnees/rtk.php?locale=en&_gl=1*1hi8e8m*_ga*NzI5NDM4NTU5LjE3MzAzMjc2MTU.*_ga_C2N57Y7DX5*MTczMDMyNzYxNC4xLjEuMTczMDMyNzkzOC4wLjAuMA)
CANNET a une tour à Sherbrooke et une près de Drumheller, mais celle à Drumheller à l'air d'avoir de la misère.

**Faire notre propre base station :
(Comment on transmet les messages au GNSS du rover? Coût d'une chip? Est-ce qu'il faut absolument connaître une position de réf précise?) 
Le [UM980](https://www.amazon.ca/WITMOTION-WTRTK-980-Precision-Positioning-Real-Time/dp/B0CY28WHGX/ref=sr_1_22_sspa?crid=2SKTST2H7JUIV&dib=eyJ2IjoiMSJ9.xtuCviynONMohDdXcsXfZmkOHe9FKhkfIrCHZtRSLN-RKipeDrgXBfSirD2DKeb2pvgSyRS1TAZ0fm45i1IFG5dQwtgExLJWaNPu8pGX_cmzi7cA2F3ns-XuNaySr9NhtWq_o1w6ggGmpSXgi3uSOS0iNVOooZy0Dx7iI-ufVcbrU4P4X6_CpBjPgQUrWifzW67bCORzo8dmCYJBPjfouMU39bh_rrv-PTwbi-7L24lsrB9IYk9SBC5XskSJCU1Y-kafTmSg21SWPTrADAnjp_DSA5oECzlYEbCd1WvpPVs.UYVDHsb4hdRtMLCmXWHqIEXgSCm-rIOO0KbcdDs0jNk&dib_tag=se&keywords=rtkgnss+gps&qid=1730936838&sprefix=rtkgnss+gps%2Caps%2C98&sr=8-22-spons&sp_csd=d2lkZ2V0TmFtZT1zcF9tdGY&psc=1) est pas mal parfait
[Vidéo youtube sur le setup d'une base station avec un UM980](https://www.youtube.com/watch?v=hNGAsFLfFtI)
Autre vidéo, avec un [Sparkfun](https://learn.sparkfun.com/tutorials/setting-up-a-rover-base-rtk-system/all)

Faire notre propre base station est sûrement une meilleure idée pusique ça n'a pas l'air trop difficile, les modules peuvent être réutilisés dans les rover d'après et ça nous permet de ne pas dépendre d'un fournisseur externe de service (Avec un abonnement par exemple?). Par contre, il faut une connection wifi pour le rover, à moins que l'on trouve une autre manière de transmettre les données.

Ces deux vidéos là font partie d'une playlist youtube et sont très pertinentes si on décide d'aller pour les UM98X.
https://www.youtube.com/watch?v=hNGAsFLfFtI
https://www.youtube.com/watch?v=CfcMfGZBFmQ&t=4s

**BOM :
- [UM980 (Base station)](https://www.amazon.ca/WITMOTION-WTRTK-980-Precision-Positioning-Real-Time/dp/B0CY28WHGX/ref=sr_1_22_sspa?crid=2SKTST2H7JUIV&dib=eyJ2IjoiMSJ9.xtuCviynONMohDdXcsXfZmkOHe9FKhkfIrCHZtRSLN-RKipeDrgXBfSirD2DKeb2pvgSyRS1TAZ0fm45i1IFG5dQwtgExLJWaNPu8pGX_cmzi7cA2F3ns-XuNaySr9NhtWq_o1w6ggGmpSXgi3uSOS0iNVOooZy0Dx7iI-ufVcbrU4P4X6_CpBjPgQUrWifzW67bCORzo8dmCYJBPjfouMU39bh_rrv-PTwbi-7L24lsrB9IYk9SBC5XskSJCU1Y-kafTmSg21SWPTrADAnjp_DSA5oECzlYEbCd1WvpPVs.UYVDHsb4hdRtMLCmXWHqIEXgSCm-rIOO0KbcdDs0jNk&dib_tag=se&keywords=rtkgnss+gps&qid=1730936838&sprefix=rtkgnss+gps%2Caps%2C98&sr=8-22-spons&sp_csd=d2lkZ2V0TmFtZT1zcF9tdGY&psc=1)
- [UM982 (Rover)](https://www.amazon.ca/WITMOTION-WTRTK-982-Precision-Positioning-Real-Time/dp/B0CY3HYRWG/ref=sr_1_1?crid=1T58CIZ73JONY&dib=eyJ2IjoiMSJ9.4FeeaWhtB3zdqqAcfAz3DA.qBC-jPLPzzIUwXTgpiISB8T6eWCaFaAum53PznP6zxQ&dib_tag=se&keywords=wtrtk-982&qid=1730937046&s=electronics&sprefix=wtrtk-98%2Celectronics%2C102&sr=1-1)
- [Câbles SMA](https://www.aliexpress.com/item/32806195194.html?spm=a2g0o.productlist.main.31.3eff49575x4O7Q&algo_pvid=4c2014e6-2fcd-4c18-a228-4c1abdca8d20&aem_p4p_detail=20241112194916711315760428310000665739&algo_exp_id=4c2014e6-2fcd-4c18-a228-4c1abdca8d20-15&pdp_npi=4%40dis%21CAD%212.84%212.65%21%21%211.99%211.86%21%402101ef7017314697562066495e1f77%2112000018434000008%21sea%21CA%214257109316%21X&curPageLogUid=gbAn7tjhooaV&utparam-url=scene%3Asearch%7Cquery_from%3A&search_p4p_id=20241112194916711315760428310000665739_5)
- ESP32 (Je suis pas sûr du modèle de ESP32 qui serait approprié)
- [Antennes](https://www.aliexpress.com/item/1005005934362617.html?spm=a2g0o.productlist.main.19.458a33075r368e&algo_pvid=8dc051b0-f210-4827-a03d-ce7cfa8aaf37&algo_exp_id=8dc051b0-f210-4827-a03d-ce7cfa8aaf37-9&pdp_npi=4%40dis%21CAD%2128.40%2125.18%21%21%2119.90%2117.64%21%402101ec1a17314699957382052e1678%2112000035233733253%21sea%21CA%214257109316%21X&curPageLogUid=gNoRwd13Ms1N&utparam-url=scene%3Asearch%7Cquery_from%3A)
- Câbles usb à usb-c pour parler aux UM98X

Ce qui reviens à un total d'environ 500$ (Sans compter l'ESP32 ou la fan ou les câbles pour ces deux là), mais ça nous donnerait une solution assez off the shelf pour avoir une position et un heading du rover vraiment sharp. 
Si on choisi cette option, je pourrais email WitMotion aussi voir si c'est possible de se get un petit sponso.

Des commentaires sur aliexpress disent qu'ils ont eu besoin d'une fan pour cool les modules, ça peut être quelque chose à considérer

J'ai trouvé une [source intéressante pour le choix d'antenne]([Source pour le choix d'antenne ici](https://gge.ext.unb.ca/Resources/gpsworld.february09.pdf)), mais, au final, la plupart des antennes GPS sur AliExpress et Amazon ne sont pas très spécifiques donc je suis plus allé avec les reviews et les constellations de satellites auxquelles elles ont accès.

Une antenne qui a peut multiband vaut la peine pour juste quelques $ de plus.
Du multi-band n'aide pas à avoir une meilleure précision, mais ça rend la connexion au satellites plus forte et ça permet d'avoir un fix plus vite. 
[Source1](https://docs.emlid.com/reach/tutorials/basics/single-multi/)
[Source2](https://www.heliguy.com/blogs/posts/single-band-vs-multi-band-rtk-gnss-receivers/?srsltid=AfmBOoo1rbf62doW2RNC-d3ATg1QrlGMv9CZ9yZaZIm8TvBaOO4QEe66)

Pour les board [UM98X](https://www.aliexpress.com/item/1005006492441903.html?spm=a2g0o.productlist.main.1.4cc878d01sNlI7&algo_pvid=b1b7968b-759c-4669-93ca-5bddd1d59fdf&algo_exp_id=b1b7968b-759c-4669-93ca-5bddd1d59fdf-0&pdp_npi=4%40dis%21CAD%21144.27%21100.99%21%21%21101.11%2170.78%21%402101c71a17314690242593070ed219%2112000037404966793%21sea%21CA%214257109316%21X&curPageLogUid=7jdHJUeOJV7K&utparam-url=scene%3Asearch%7Cquery_from%3A) on peut aussi les acheter sur AliExpress pour un peu moins cher (ça vient avec un câble usb-c et SMA) et il y a aussi des alternatives de sparkfun [ici](https://www.sparkfun.com/products/15136), mais elles sont plus chères.