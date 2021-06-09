# Hipatijin kod

Ovaj projekat predstavlja kombinaciju Cezarove šifre i Morzeovog pisma, zajedno sa još dve dodatne operacije. Prvi korak je prebacivanje date reči u drugu pomoću Cezarove šifre. Cezarova šifra je šifra kod koje se svako slovo zanemi odgovarajućim slovom na osnovu ključa. Ključ je broj za koji pomeramo sva slova u reči. U ovom slučaju koristi se ključ vrednosti 3 i tabela menjanja slova izgleda ovako: <br>
A B C D E F G H I J K L M N O P Q R S T U V W X Y Z <br>
D E F G H I J K L M N O P Q R S T U V W X Y Z A B C <br>
<br>
Drugi korak predstavlja prebacivanje u Morzeovo pismo. Umesto simbola **.** za koristimo broj 1, a umesto **-** koristimo broj 2 u zapisu slova. Nakon svakog slova se nalazi nula, osim poslednjeg slova u reči, radi lakšeg prebacivanja u decimalni broj. Kako Morzeovo pismo ima istu vrednost i za mala i velika slova, velika prebacimo u mala.
<br>
<br>
Trećim korakom postižemo prebacivanje broja iz osnove 3 u osnovu 10. To radimo tako što svaku cifru množimo stepenom trojke, a stepen je indeks na kom se cifra nalazi.
Četvrtim a ujedno i poslednjim korakom dobijeni broj delimo na njegove cifre i menjamo ih, tako što svaku cifru zamenimo poslednjom cifrom kuba te cifre. Npr. imamo broj 3868282, i poslednja cifra broja 3³ je 7, broja 8³ je 2 itd. Ovom zamenom dobijemo broj 7262828. 

