﻿#include <iostream>
#include <cstdio>
using namespace std;


char *poketmon[] = { "",

	"Bulbasaur",

	"Grass Poison",

	"Ivysaur",

	"Grass Poison",

	"Venusaur",

	"Grass Poison",

	"Charmander",

	"Fire",

	"Charmeleon",

	"Fire",

	"Charizard",

	"Fire Flying",

	"Squirtle",

	"Water",

	"Wartortle",

	"Water",

	"Blastoise",

	"Water",

	"Caterpie",

	"Bug",

	"Metapod",

	"Bug",

	"Butterfree",

	"Bug Flying",

	"Weedle",

	"Bug Poison",

	"Kakuna",

	"Bug Poison",

	"Beedrill",

	"Bug Poison",

	"Pidgey",

	"Normal Flying",

	"Pidgeotto",

	"Normal Flying",

	"Pidgeot",

	"Normal Flying",

	"Rattata",

	"Normal",

	"Raticate",

	"Normal",

	"Spearow",

	"Normal Flying",

	"Fearow",

	"Normal Flying",

	"Ekans",

	"Poison",

	"Arbok",

	"Poison",

	"Pikachu",

	"Electric",

	"Raichu",

	"Electric",

	"Sandshrew",

	"Ground",

	"Sandslash",

	"Ground",

	"Nidoran♀",

	"Poison",

	"Nidorina",

	"Poison",

	"Nidoqueen",

	"Poison Ground",

	"Nidoran♂",

	"Poison",

	"Nidorino",

	"Poison",

	"Nidoking",

	"Poison Ground",

	"Clefairy",

	"Fairy",

	"Clefable",

	"Fairy",

	"Vulpix",

	"Fire",

	"Ninetales",

	"Fire",

	"Jigglypuff",

	"Normal Fairy",

	"Wigglytuff",

	"Normal Fairy",

	"Zubat",

	"Poison Flying",

	"Golbat",

	"Poison Flying",

	"Oddish",

	"Grass Poison",

	"Gloom",

	"Grass Poison",

	"Vileplume",

	"Grass Poison",

	"Paras",

	"Bug Grass",

	"Parasect",

	"Bug Grass",

	"Venonat",

	"Bug Poison",

	"Venomoth",

	"Bug Poison",

	"Diglett",

	"Ground",

	"Dugtrio",

	"Ground",

	"Meowth",

	"Normal",

	"Persian",

	"Normal",

	"Psyduck",

	"Water",

	"Golduck",

	"Water",

	"Mankey",

	"Fighting",

	"Primeape",

	"Fighting",

	"Growlithe",

	"Fire",

	"Arcanine",

	"Fire",

	"Poliwag",

	"Water",

	"Poliwhirl",

	"Water",

	"Poliwrath",

	"Water Fighting",

	"Abra",

	"Psychic",

	"Kadabra",

	"Psychic",

	"Alakazam",

	"Psychic",

	"Machop",

	"Fighting",

	"Machoke",

	"Fighting",

	"Machamp",

	"Fighting",

	"Bellsprout",

	"Grass Poison",

	"Weepinbell",

	"Grass Poison",

	"Victreebel",

	"Grass Poison",

	"Tentacool",

	"Water Poison",

	"Tentacruel",

	"Water Poison",

	"Geodude",

	"Rock Ground",

	"Graveler",

	"Rock Ground",

	"Golem",

	"Rock Ground",

	"Ponyta",

	"Fire",

	"Rapidash",

	"Fire",

	"Slowpoke",

	"Water Psychic",

	"Slowbro",

	"Water Psychic",

	"Magnemite",

	"Electric Steel",

	"Magneton",

	"Electric Steel",

	"Farfetch'd",

	"Normal Flying",

	"Doduo",

	"Normal Flying",

	"Dodrio",

	"Normal Flying",

	"Seel",

	"Water",

	"Dewgong",

	"Water Ice",

	"Grimer",

	"Poison",

	"Muk",

	"Poison",

	"Shellder",

	"Water",

	"Cloyster",

	"Water Ice",

	"Gastly",

	"Ghost Poison",

	"Haunter",

	"Ghost Poison",

	"Gengar",

	"Ghost Poison",

	"Onix",

	"Rock Ground",

	"Drowzee",

	"Psychic",

	"Hypno",

	"Psychic",

	"Krabby",

	"Water",

	"Kingler",

	"Water",

	"Voltorb",

	"Electric",

	"Electrode",

	"Electric",

	"Exeggcute",

	"Grass Psychic",

	"Exeggutor",

	"Grass Psychic",

	"Cubone",

	"Ground",

	"Marowak",

	"Ground",

	"Hitmonlee",

	"Fighting",

	"Hitmonchan",

	"Fighting",

	"Lickitung",

	"Normal",

	"Koffing",

	"Poison",

	"Weezing",

	"Poison",

	"Rhyhorn",

	"Ground Rock",

	"Rhydon",

	"Ground Rock",

	"Chansey",

	"Normal",

	"Tangela",

	"Grass",

	"Kangaskhan",

	"Normal",

	"Horsea",

	"Water",

	"Seadra",

	"Water",

	"Goldeen",

	"Water",

	"Seaking",

	"Water",

	"Staryu",

	"Water",

	"Starmie",

	"Water Psychic",

	"Mr. Mime",

	"Psychic Fairy",

	"Scyther",

	"Bug Flying",

	"Jynx",

	"Ice Psychic",

	"Electabuzz",

	"Electric",

	"Magmar",

	"Fire",

	"Pinsir",

	"Bug",

	"Tauros",

	"Normal",

	"Magikarp",

	"Water",

	"Gyarados",

	"Water Flying",

	"Lapras",

	"Water Ice",

	"Ditto",

	"Normal",

	"Eevee",

	"Normal",

	"Vaporeon",

	"Water",

	"Jolteon",

	"Electric",

	"Flareon",

	"Fire",

	"Porygon",

	"Normal",

	"Omanyte",

	"Rock Water",

	"Omastar",

	"Rock Water",

	"Kabuto",

	"Rock Water",

	"Kabutops",

	"Rock Water",

	"Aerodactyl",

	"Rock Flying",

	"Snorlax",

	"Normal",

	"Articuno",

	"Ice Flying",

	"Zapdos",

	"Electric Flying",

	"Moltres",

	"Fire Flying",

	"Dratini",

	"Dragon",

	"Dragonair",

	"Dragon",

	"Dragonite",

	"Dragon Flying",

	"Mewtwo",

	"Psychic",

	"Mew",

	"Psychic",

	"Chikorita",

	"Grass",

	"Bayleef",

	"Grass",

	"Meganium",

	"Grass",

	"Cyndaquil",

	"Fire",

	"Quilava",

	"Fire",

	"Typhlosion",

	"Fire",

	"Totodile",

	"Water",

	"Croconaw",

	"Water",

	"Feraligatr",

	"Water",

	"Sentret",

	"Normal",

	"Furret",

	"Normal",

	"Hoothoot",

	"Normal Flying",

	"Noctowl",

	"Normal Flying",

	"Ledyba",

	"Bug Flying",

	"Ledian",

	"Bug Flying",

	"Spinarak",

	"Bug Poison",

	"Ariados",

	"Bug Poison",

	"Crobat",

	"Poison Flying",

	"Chinchou",

	"Water Electric",

	"Lanturn",

	"Water Electric",

	"Pichu",

	"Electric",

	"Cleffa",

	"Fairy",

	"Igglybuff",

	"Normal Fairy",

	"Togepi",

	"Fairy",

	"Togetic",

	"Fairy Flying",

	"Natu",

	"Psychic Flying",

	"Xatu",

	"Psychic Flying",

	"Mareep",

	"Electric",

	"Flaaffy",

	"Electric",

	"Ampharos",

	"Electric",

	"Bellossom",

	"Grass",

	"Marill",

	"Water Fairy",

	"Azumarill",

	"Water Fairy",

	"Sudowoodo",

	"Rock",

	"Politoed",

	"Water",

	"Hoppip",

	"Grass Flying",

	"Skiploom",

	"Grass Flying",

	"Jumpluff",

	"Grass Flying",

	"Aipom",

	"Normal",

	"Sunkern",

	"Grass",

	"Sunflora",

	"Grass",

	"Yanma",

	"Bug Flying",

	"Wooper",

	"Water Ground",

	"Quagsire",

	"Water Ground",

	"Espeon",

	"Psychic",

	"Umbreon",

	"Dark",

	"Murkrow",

	"Dark Flying",

	"Slowking",

	"Water Psychic",

	"Misdreavus",

	"Ghost",

	"Unown",

	"Psychic",

	"Wobbuffet",

	"Psychic",

	"Girafarig",

	"Normal Psychic",

	"Pineco",

	"Bug",

	"Forretress",

	"Bug Steel",

	"Dunsparce",

	"Normal",

	"Gligar",

	"Ground Flying",

	"Steelix",

	"Steel Ground",

	"Snubbull",

	"Fairy",

	"Granbull",

	"Fairy",

	"Qwilfish",

	"Water Poison",

	"Scizor",

	"Bug Steel",

	"Shuckle",

	"Bug Rock",

	"Heracross",

	"Bug Fighting",

	"Sneasel",

	"Dark Ice",

	"Teddiursa",

	"Normal",

	"Ursaring",

	"Normal",

	"Slugma",

	"Fire",

	"Magcargo",

	"Fire Rock",

	"Swinub",

	"Ice Ground",

	"Piloswine",

	"Ice Ground",

	"Corsola",

	"Water Rock",

	"Remoraid",

	"Water",

	"Octillery",

	"Water",

	"Delibird",

	"Ice Flying",

	"Mantine",

	"Water Flying",

	"Skarmory",

	"Steel Flying",

	"Houndour",

	"Dark Fire",

	"Houndoom",

	"Dark Fire",

	"Kingdra",

	"Water Dragon",

	"Phanpy",

	"Ground",

	"Donphan",

	"Ground",

	"Porygon2",

	"Normal",

	"Stantler",

	"Normal",

	"Smeargle",

	"Normal",

	"Tyrogue",

	"Fighting",

	"Hitmontop",

	"Fighting",

	"Smoochum",

	"Ice Psychic",

	"Elekid",

	"Electric",

	"Magby",

	"Fire",

	"Miltank",

	"Normal",

	"Blissey",

	"Normal",

	"Raikou",

	"Electric",

	"Entei",

	"Fire",

	"Suicune",

	"Water",

	"Larvitar",

	"Rock Ground",

	"Pupitar",

	"Rock Ground",

	"Tyranitar",

	"Rock Dark",

	"Lugia",

	"Psychic Flying",

	"Ho-oh",

	"Fire Flying",

	"Celebi",

	"Psychic Grass",

	"Treecko",

	"Grass",

	"Grovyle",

	"Grass",

	"Sceptile",

	"Grass",

	"Torchic",

	"Fire",

	"Combusken",

	"Fire Fighting",

	"Blaziken",

	"Fire Fighting",

	"Mudkip",

	"Water",

	"Marshtomp",

	"Water Ground",

	"Swampert",

	"Water Ground",

	"Poochyena",

	"Dark",

	"Mightyena",

	"Dark",

	"Zigzagoon",

	"Normal",

	"Linoone",

	"Normal",

	"Wurmple",

	"Bug",

	"Silcoon",

	"Bug",

	"Beautifly",

	"Bug Flying",

	"Cascoon",

	"Bug",

	"Dustox",

	"Bug Poison",

	"Lotad",

	"Water Grass",

	"Lombre",

	"Water Grass",

	"Ludicolo",

	"Water Grass",

	"Seedot",

	"Grass",

	"Nuzleaf",

	"Grass Dark",

	"Shiftry",

	"Grass Dark",

	"Taillow",

	"Normal Flying",

	"Swellow",

	"Normal Flying",

	"Wingull",

	"Water Flying",

	"Pelipper",

	"Water Flying",

	"Ralts",

	"Psychic Fairy",

	"Kirlia",

	"Psychic Fairy",

	"Gardevoir",

	"Psychic Fairy",

	"Surskit",

	"Bug Water",

	"Masquerain",

	"Bug Flying",

	"Shroomish",

	"Grass",

	"Breloom",

	"Grass Fighting",

	"Slakoth",

	"Normal",

	"Vigoroth",

	"Normal",

	"Slaking",

	"Normal",

	"Nincada",

	"Bug Ground",

	"Ninjask",

	"Bug Flying",

	"Shedinja",

	"Bug Ghost",

	"Whismur",

	"Normal",

	"Loudred",

	"Normal",

	"Exploud",

	"Normal",

	"Makuhita",

	"Fighting",

	"Hariyama",

	"Fighting",

	"Azurill",

	"Normal Fairy",

	"Nosepass",

	"Rock",

	"Skitty",

	"Normal",

	"Delcatty",

	"Normal",

	"Sableye",

	"Dark Ghost",

	"Mawile",

	"Steel Fairy",

	"Aron",

	"Steel Rock",

	"Lairon",

	"Steel Rock",

	"Aggron",

	"Steel Rock",

	"Meditite",

	"Fighting Psychic",

	"Medicham",

	"Fighting Psychic",

	"Electrike",

	"Electric",

	"Manectric",

	"Electric",

	"Plusle",

	"Electric",

	"Minun",

	"Electric",

	"Volbeat",

	"Bug",

	"Illumise",

	"Bug",

	"Roselia",

	"Grass Poison",

	"Gulpin",

	"Poison",

	"Swalot",

	"Poison",

	"Carvanha",

	"Water Dark",

	"Sharpedo",

	"Water Dark",

	"Wailmer",

	"Water",

	"Wailord",

	"Water",

	"Numel",

	"Fire Ground",

	"Camerupt",

	"Fire Ground",

	"Torkoal",

	"Fire",

	"Spoink",

	"Psychic",

	"Grumpig",

	"Psychic",

	"Spinda",

	"Normal",

	"Trapinch",

	"Ground",

	"Vibrava",

	"Ground Dragon",

	"Flygon",

	"Ground Dragon",

	"Cacnea",

	"Grass",

	"Cacturne",

	"Grass Dark",

	"Swablu",

	"Normal Flying",

	"Altaria",

	"Dragon Flying",

	"Zangoose",

	"Normal",

	"Seviper",

	"Poison",

	"Lunatone",

	"Rock Psychic",

	"Solrock",

	"Rock Psychic",

	"Barboach",

	"Water Ground",

	"Whiscash",

	"Water Ground",

	"Corphish",

	"Water",

	"Crawdaunt",

	"Water Dark",

	"Baltoy",

	"Ground Psychic",

	"Claydol",

	"Ground Psychic",

	"Lileep",

	"Rock Grass",

	"Cradily",

	"Rock Grass",

	"Anorith",

	"Rock Bug",

	"Armaldo",

	"Rock Bug",

	"Feebas",

	"Water",

	"Milotic",

	"Water",

	"Castform",

	"Normal",

	"Kecleon",

	"Normal",

	"Shuppet",

	"Ghost",

	"Banette",

	"Ghost",

	"Duskull",

	"Ghost",

	"Dusclops",

	"Ghost",

	"Tropius",

	"Grass Flying",

	"Chimecho",

	"Psychic",

	"Absol",

	"Dark",

	"Wynaut",

	"Psychic",

	"Snorunt",

	"Ice",

	"Glalie",

	"Ice",

	"Spheal",

	"Ice Water",

	"Sealeo",

	"Ice Water",

	"Walrein",

	"Ice Water",

	"Clamperl",

	"Water",

	"Huntail",

	"Water",

	"Gorebyss",

	"Water",

	"Relicanth",

	"Water Rock",

	"Luvdisc",

	"Water",

	"Bagon",

	"Dragon",

	"Shelgon",

	"Dragon",

	"Salamence",

	"Dragon Flying",

	"Beldum",

	"Steel Psychic",

	"Metang",

	"Steel Psychic",

	"Metagross",

	"Steel Psychic",

	"Regirock",

	"Rock",

	"Regice",

	"Ice",

	"Registeel",

	"Steel",

	"Latias",

	"Dragon Psychic",

	"Latios",

	"Dragon Psychic",

	"Kyogre",

	"Water",

	"Groudon",

	"Ground",

	"Rayquaza",

	"Dragon Flying",

	"Jirachi",

	"Steel Psychic",

	"Deoxys",

	"Psychic",

	"Turtwig",

	"Grass",

	"Grotle",

	"Grass",

	"Torterra",

	"Grass Ground",

	"Chimchar",

	"Fire",

	"Monferno",

	"Fire Fighting",

	"Infernape",

	"Fire Fighting",

	"Piplup",

	"Water",

	"Prinplup",

	"Water",

	"Empoleon",

	"Water Steel",

	"Starly",

	"Normal Flying",

	"Staravia",

	"Normal Flying",

	"Staraptor",

	"Normal Flying",

	"Bidoof",

	"Normal",

	"Bibarel",

	"Normal Water",

	"Kricketot",

	"Bug",

	"Kricketune",

	"Bug",

	"Shinx",

	"Electric",

	"Luxio",

	"Electric",

	"Luxray",

	"Electric",

	"Budew",

	"Grass Poison",

	"Roserade",

	"Grass Poison",

	"Cranidos",

	"Rock",

	"Rampardos",

	"Rock",

	"Shieldon",

	"Rock Steel",

	"Bastiodon",

	"Rock Steel",

	"Burmy",

	"Bug",

	"Wormadam",

	"Bug Grass",

	"Mothim",

	"Bug Flying",

	"Combee",

	"Bug Flying",

	"Vespiquen",

	"Bug Flying",

	"Pachirisu",

	"Electric",

	"Buizel",

	"Water",

	"Floatzel",

	"Water",

	"Cherubi",

	"Grass",

	"Cherrim",

	"Grass",

	"Shellos",

	"Water",

	"Gastrodon",

	"Water Ground",

	"Ambipom",

	"Normal",

	"Drifloon",

	"Ghost Flying",

	"Drifblim",

	"Ghost Flying",

	"Buneary",

	"Normal",

	"Lopunny",

	"Normal",

	"Mismagius",

	"Ghost",

	"Honchkrow",

	"Dark Flying",

	"Glameow",

	"Normal",

	"Purugly",

	"Normal",

	"Chingling",

	"Psychic",

	"Stunky",

	"Poison Dark",

	"Skuntank",

	"Poison Dark",

	"Bronzor",

	"Steel Psychic",

	"Bronzong",

	"Steel Psychic",

	"Bonsly",

	"Rock",

	"Mime Jr.",

	"Psychic Fairy",

	"Happiny",

	"Normal",

	"Chatot",

	"Normal Flying",

	"Spiritomb",

	"Ghost Dark",

	"Gible",

	"Dragon Ground",

	"Gabite",

	"Dragon Ground",

	"Garchomp",

	"Dragon Ground",

	"Munchlax",

	"Normal",

	"Riolu",

	"Fighting",

	"Lucario",

	"Fighting Steel",

	"Hippopotas",

	"Ground",

	"Hippowdon",

	"Ground",

	"Skorupi",

	"Poison Bug",

	"Drapion",

	"Poison Dark",

	"Croagunk",

	"Poison Fighting",

	"Toxicroak",

	"Poison Fighting",

	"Carnivine",

	"Grass",

	"Finneon",

	"Water",

	"Lumineon",

	"Water",

	"Mantyke",

	"Water Flying",

	"Snover",

	"Grass Ice",

	"Abomasnow",

	"Grass Ice",

	"Weavile",

	"Dark Ice",

	"Magnezone",

	"Electric Steel",

	"Lickilicky",

	"Normal",

	"Rhyperior",

	"Ground Rock",

	"Tangrowth",

	"Grass",

	"Electivire",

	"Electric",

	"Magmortar",

	"Fire",

	"Togekiss",

	"Fairy Flying",

	"Yanmega",

	"Bug Flying",

	"Leafeon",

	"Grass",

	"Glaceon",

	"Ice",

	"Gliscor",

	"Ground Flying",

	"Mamoswine",

	"Ice Ground",

	"Porygon-Z",

	"Normal",

	"Gallade",

	"Psychic Fighting",

	"Probopass",

	"Rock Steel",

	"Dusknoir",

	"Ghost",

	"Froslass",

	"Ice Ghost",

	"Rotom",

	"Electric Ghost",

	"Uxie",

	"Psychic",

	"Mesprit",

	"Psychic",

	"Azelf",

	"Psychic",

	"Dialga",

	"Steel Dragon",

	"Palkia",

	"Water Dragon",

	"Heatran",

	"Fire Steel",

	"Regigigas",

	"Normal",

	"Giratina",

	"Ghost Dragon",

	"Cresselia",

	"Psychic",

	"Phione",

	"Water",

	"Manaphy",

	"Water",

	"Darkrai",

	"Dark",

	"Shaymin",

	"Grass",

	"Arceus",

	"Normal",

	"Victini",

	"Psychic Fire",

	"Snivy",

	"Grass",

	"Servine",

	"Grass",

	"Serperior",

	"Grass",

	"Tepig",

	"Fire",

	"Pignite",

	"Fire Fighting",

	"Emboar",

	"Fire Fighting",

	"Oshawott",

	"Water",

	"Dewott",

	"Water",

	"Samurott",

	"Water",

	"Patrat",

	"Normal",

	"Watchog",

	"Normal",

	"Lillipup",

	"Normal",

	"Herdier",

	"Normal",

	"Stoutland",

	"Normal",

	"Purrloin",

	"Dark",

	"Liepard",

	"Dark",

	"Pansage",

	"Grass",

	"Simisage",

	"Grass",

	"Pansear",

	"Fire",

	"Simisear",

	"Fire",

	"Panpour",

	"Water",

	"Simipour",

	"Water",

	"Munna",

	"Psychic",

	"Musharna",

	"Psychic",

	"Pidove",

	"Normal Flying",

	"Tranquill",

	"Normal Flying",

	"Unfezant",

	"Normal Flying",

	"Blitzle",

	"Electric",

	"Zebstrika",

	"Electric",

	"Roggenrola",

	"Rock",

	"Boldore",

	"Rock",

	"Gigalith",

	"Rock",

	"Woobat",

	"Psychic Flying",

	"Swoobat",

	"Psychic Flying",

	"Drilbur",

	"Ground",

	"Excadrill",

	"Ground Steel",

	"Audino",

	"Normal",

	"Timburr",

	"Fighting",

	"Gurdurr",

	"Fighting",

	"Conkeldurr",

	"Fighting",

	"Tympole",

	"Water",

	"Palpitoad",

	"Water Ground",

	"Seismitoad",

	"Water Ground",

	"Throh",

	"Fighting",

	"Sawk",

	"Fighting",

	"Sewaddle",

	"Bug Grass",

	"Swadloon",

	"Bug Grass",

	"Leavanny",

	"Bug Grass",

	"Venipede",

	"Bug Poison",

	"Whirlipede",

	"Bug Poison",

	"Scolipede",

	"Bug Poison",

	"Cottonee",

	"Grass Fairy",

	"Whimsicott",

	"Grass Fairy",

	"Petilil",

	"Grass",

	"Lilligant",

	"Grass",

	"Basculin",

	"Water",

	"Sandile",

	"Ground Dark",

	"Krokorok",

	"Ground Dark",

	"Krookodile",

	"Ground Dark",

	"Darumaka",

	"Fire",

	"Darmanitan",

	"Fire",

	"Maractus",

	"Grass",

	"Dwebble",

	"Bug Rock",

	"Crustle",

	"Bug Rock",

	"Scraggy",

	"Dark Fighting",

	"Scrafty",

	"Dark Fighting",

	"Sigilyph",

	"Psychic Flying",

	"Yamask",

	"Ghost",

	"Cofagrigus",

	"Ghost",

	"Tirtouga",

	"Water Rock",

	"Carracosta",

	"Water Rock",

	"Archen",

	"Rock Flying",

	"Archeops",

	"Rock Flying",

	"Trubbish",

	"Poison",

	"Garbodor",

	"Poison",

	"Zorua",

	"Dark",

	"Zoroark",

	"Dark",

	"Minccino",

	"Normal",

	"Cinccino",

	"Normal",

	"Gothita",

	"Psychic",

	"Gothorita",

	"Psychic",

	"Gothitelle",

	"Psychic",

	"Solosis",

	"Psychic",

	"Duosion",

	"Psychic",

	"Reuniclus",

	"Psychic",

	"Ducklett",

	"Water Flying",

	"Swanna",

	"Water Flying",

	"Vanillite",

	"Ice",

	"Vanillish",

	"Ice",

	"Vanilluxe",

	"Ice",

	"Deerling",

	"Normal Grass",

	"Sawsbuck",

	"Normal Grass",

	"Emolga",

	"Electric Flying",

	"Karrablast",

	"Bug",

	"Escavalier",

	"Bug Steel",

	"Foongus",

	"Grass Poison",

	"Amoonguss",

	"Grass Poison",

	"Frillish",

	"Water Ghost",

	"Jellicent",

	"Water Ghost",

	"Alomomola",

	"Water",

	"Joltik",

	"Bug Electric",

	"Galvantula",

	"Bug Electric",

	"Ferroseed",

	"Grass Steel",

	"Ferrothorn",

	"Grass Steel",

	"Klink",

	"Steel",

	"Klang",

	"Steel",

	"Klinklang",

	"Steel",

	"Tynamo",

	"Electric",

	"Eelektrik",

	"Electric",

	"Eelektross",

	"Electric",

	"Elgyem",

	"Psychic",

	"Beheeyem",

	"Psychic",

	"Litwick",

	"Ghost Fire",

	"Lampent",

	"Ghost Fire",

	"Chandelure",

	"Ghost Fire",

	"Axew",

	"Dragon",

	"Fraxure",

	"Dragon",

	"Haxorus",

	"Dragon",

	"Cubchoo",

	"Ice",

	"Beartic",

	"Ice",

	"Cryogonal",

	"Ice",

	"Shelmet",

	"Bug",

	"Accelgor",

	"Bug",

	"Stunfisk",

	"Electric Ground",

	"Mienfoo",

	"Fighting",

	"Mienshao",

	"Fighting",

	"Druddigon",

	"Dragon",

	"Golett",

	"Ground Ghost",

	"Golurk",

	"Ground Ghost",

	"Pawniard",

	"Dark Steel",

	"Bisharp",

	"Dark Steel",

	"Bouffalant",

	"Normal",

	"Rufflet",

	"Normal Flying",

	"Braviary",

	"Normal Flying",

	"Vullaby",

	"Dark Flying",

	"Mandibuzz",

	"Dark Flying",

	"Heatmor",

	"Fire",

	"Durant",

	"Bug Steel",

	"Deino",

	"Dark Dragon",

	"Zweilous",

	"Dark Dragon",

	"Hydreigon",

	"Dark Dragon",

	"Larvesta",

	"Bug Fire",

	"Volcarona",

	"Bug Fire",

	"Cobalion",

	"Steel Fighting",

	"Terrakion",

	"Rock Fighting",

	"Virizion",

	"Grass Fighting",

	"Tornadus",

	"Flying",

	"Thundurus",

	"Electric Flying",

	"Reshiram",

	"Dragon Fire",

	"Zekrom",

	"Dragon Electric",

	"Landorus",

	"Ground Flying",

	"Kyurem",

	"Dragon Ice",

	"Keldeo",

	"Water Fighting",

	"Meloetta",

	"Normal Psychic",

	"Genesect",

	"Bug Steel",

	"Chespin",

	"Grass",

	"Quilladin",

	"Grass",

	"Chesnaught",

	"Grass Fighting",

	"Fennekin",

	"Fire",

	"Braixen",

	"Fire",

	"Delphox",

	"Fire Psychic",

	"Froakie",

	"Water",

	"Frogadier",

	"Water",

	"Greninja",

	"Water Dark",

	"Bunnelby",

	"Normal",

	"Diggersby",

	"Normal Ground",

	"Fletchling",

	"Normal Flying",

	"Fletchinder",

	"Fire Flying",

	"Talonflame",

	"Fire Flying",

	"Scatterbug",

	"Bug",

	"Spewpa",

	"Bug",

	"Vivillon",

	"Bug Flying",

	"Litleo",

	"Fire Normal",

	"Pyroar",

	"Fire Normal",

	"Flabébé",

	"Fairy",

	"Floette",

	"Fairy",

	"Florges",

	"Fairy",

	"Skiddo",

	"Grass",

	"Gogoat",

	"Grass",

	"Pancham",

	"Fighting",

	"Pangoro",

	"Fighting Dark",

	"Furfrou",

	"Normal",

	"Espurr",

	"Psychic",

	"Meowstic",

	"Psychic",

	"Honedge",

	"Steel Ghost",

	"Doublade",

	"Steel Ghost",

	"Aegislash",

	"Steel Ghost",

	"Spritzee",

	"Fairy",

	"Aromatisse",

	"Fairy",

	"Swirlix",

	"Fairy",

	"Slurpuff",

	"Fairy",

	"Inkay",

	"Dark Psychic",

	"Malamar",

	"Dark Psychic",

	"Binacle",

	"Rock Water",

	"Barbaracle",

	"Rock Water",

	"Skrelp",

	"Poison Water",

	"Dragalge",

	"Poison Dragon",

	"Clauncher",

	"Water",

	"Clawitzer",

	"Water",

	"Helioptile",

	"Electric Normal",

	"Heliolisk",

	"Electric Normal",

	"Tyrunt",

	"Rock Dragon",

	"Tyrantrum",

	"Rock Dragon",

	"Amaura",

	"Rock Ice",

	"Aurorus",

	"Rock Ice",

	"Sylveon",

	"Fairy",

	"Hawlucha",

	"Fighting Flying",

	"Dedenne",

	"Electric Fairy",

	"Carbink",

	"Rock Fairy",

	"Goomy",

	"Dragon",

	"Sliggoo",

	"Dragon",

	"Goodra",

	"Dragon",

	"Klefki",

	"Steel Fairy",

	"Phantump",

	"Ghost Grass",

	"Trevenant",

	"Ghost Grass",

	"Pumpkaboo",

	"Ghost Grass",

	"Gourgeist",

	"Ghost Grass",

	"Bergmite",

	"Ice",

	"Avalugg",

	"Ice",

	"Noibat",

	"Flying Dragon",

	"Noivern",

	"Flying Dragon",

	"Xerneas",

	"Fairy",

	"Yveltal",

	"Dark Flying",

	"Zygarde",

	"Dragon Ground",

	"Diancie",

	"Rock Fairy",

	"Hoopa",

	"Psychic Ghost",

	"Volcanion",

	"Fire Water"

};



int main() {

	int a;

	cin >> a;
	cout << poketmon[a * 2 - 1] << '\n';
	cout << poketmon[a * 2] << '\n';

}
