#include <GameStates.h>
#include <gui/SpriteBatch.h>
#include <gui/Gui.h>
#include <citro3d.h>

extern char* SPLASH_ARRAY[293] = {
"As seen on TV!\0",
"Awesome!\0",
"May contain nuts!\0",
"Better than Prey!\0",
"More polygons!\0",
"Limited edition!\0",
"Flashing letters!\0",
"Made by Notch\0",
"It's here!\0",
"Best in class!\0",
"It's finished!\0",
"Kind of dragon free!\0",
"Excitement!\0",
"More than 500 sold!\0",
"One of a kind!\0",
"Heaps of hits on YouTube!\0",
"Indev!\0",
"Spiders everywhere!\0",
"Check it out!\0",
"Holy cow, man!\0",
"It's a game!\0",
"Made in Sweden!\0",
"Uses LWJGL!\0",
"Reticulating splines!\0",
"Minecraft!\0",
"Yaaay!\0",
"Singleplayer!\0",
"Keyboard compatible!\0",
"Undocumented!\0",
"Ingots!\0",
"Exploding creepers!\0",
"That's no moon!\0",
"l33t!\0",
"Create!\0",
"Survive!\0",
"Dungeon!\0",
"Exclusive!\0",
"The bee's knees!\0",
"Down with O.P.P.!\0",
"Closed source!\0",
"Classy!\0",
"Wow!\0",
"Not on steam!\0",
"Oh man!\0",
"Awesome community!\0",
"Pixels!\0",
"Teetsuuuuoooo!\0",
"Kaaneeeedaaaa!\0",
"Now with difficulty!\0",
"Enhanced!\0",
"90% bug free!\0",
"Pretty!\0",
"12 herbs and spices!\0",
"Fat free!\0",
"Absolutely no memes!\0",
"Free dental!\0",
"Ask your doctor!\0",
"Minors welcome!\0",
"Cloud computing!\0",
"Legal in Finland!\0",
"Hard to label!\0",
"Technically good!\0",
"Bringing home the bacon!\0",
"Indie!\0",
"GOTY!\0",
"Euclidian!\0",
"Now in 3D!\0",
"Inspirational!\0",
"Herregud!\0",
"Yes, sir!\0",
"Played by cowboys!\0",
"Thousands of colors!\0",
"Try it!\0",
"Age of Wonders is better!\0",
"Try the mushroom stew!\0",
"Sensational!\0",
"Guaranteed!\0",
"Macroscopic!\0",
"Bring it on!\0",
"Random splash!\0",
"Call your mother!\0",
"Monster infighting!\0",
"Loved by millions!\0",
"Ultimate edition!\0",
"Freaky!\0",
"Water proof!\0",
"Uninflammable!\0",
"Whoa, dude!\0",
"All inclusive!\0",
"Tell your friends!\0",
"NP is not in P!\0",
"Notch <3 ez!\0",
"Music by C418!\0",
"Livestreamed!\0",
"Haunted!\0",
"Polynomial!\0",
"Terrestrial!\0",
"All is full of love!\0",
"Full of stars!\0",
"Scientific!\0",
"Cooler than Spock!\0",
"Collaborate and listen!\0",
"Never dig down!\0",
"Take frequent breaks!\0",
"Not linear!\0",
"Han shot first!\0",
"Nice to meet you!\0",
"Buckets of lava!\0",
"Ride the pig!\0",
"Larger than Earth!\0",
"sqrt(-1) love you!\0",
"Phobos anomaly!\0",
"Punching wood!\0",
"Falling off cliffs!\0",
"150% hyperbole!\0",
"Synecdoche!\0",
"Let's danec!\0",
"Seecret Friday update!\0",
"Ref implementation!\0",
"Kiss the sky!\0",
"20 GOTO 10!\0",
"Verlet intregration!\0",
"Peter Griffin!\0",
"Do not distribute!\0",
"Cogito ergo sum!\0",
"4815162342 lines of code!\0",
"A skeleton popped out!\0",
"The Work of Notch!\0",
"The sum of its parts!\0",
"BTAF used to be good!\0",
"I miss ADOM!\0",
"umop-apisdn!\0",
"OICU812!\0",
"Bring me Ray Cokes!\0",
"Finger-licking!\0",
"Thematic!\0",
"Pneumatic!\0",
"Sublime!\0",
"Octagonal!\0",
"Une baguette!\0",
"Gargamel plays it!\0",
"Rita is the new top dog!\0",
"SWM forever!\0",
"Representing Edsbyn!\0",
"Matt Damon!\0",
"Consummate V's!\0",
"Cow Tools!\0",
"Double buffered!\0",
"Fan fiction!\0",
"Flaxkikare!\0",
"Jason! Jason! Jason!\0",
"Hotter than the sun!\0",
"Internet enabled!\0",
"Autonomous!\0",
"Engage!\0",
"Fantasy!\0",
"DRR! DRR! DRR!\0",
"Kick it root down!\0",
"Regional resources!\0",
"Woo, facepunch!\0",
"Woo, somethingawful!\0",
"Woo, /v/!\0",
"Woo, tigsource!\0",
"Woo, minecraftforum!\0",
"Woo, worldofminecraft!\0",
"Woo, reddit!\0",
"Woo, 2pp!\0",
"Google anlyticsed!\0",
"Now supports C++!\0",
"Give us Gordon!\0",
"Tip your waiter!\0",
"Very fun!\0",
"12345 is a bad password!\0",
"Vote for net neutrality!\0",
"MAP11 has two names!\0",
"Omnipotent!\0",
"Gasp!\0",
"...!\0",
"Bees, bees, bees, bees!\0",
"Jag k├ñnner en bot!\0",
"Haha, LOL!\0",
"Hampsterdance!\0",
"Switches and ores!\0",
"Menger sponge!\0",
"idspispopd!\0",
"Eple (original edit)!\0",
"So fresh, so clean!\0",
"Slow acting portals!\0",
"Try the Nether!\0",
"Oh, ok, Pigmen!\0",
"Finally with ladders!\0",
"Scary!\0",
"Twittered about!\0",
"Joel is neat!\0",
"Huge tracts of land!\0",
"Welcome to your Doom!\0",
"Stay a while and listen!\0",
"Treatment for your rash!\0",
"'Autological' is!\0",
"Lots of truthiness!\0",
"The creeper is a spy!\0",
"Turing complete!\0",
"It's groundbreaking!\0",
"Let our battle's begin!\0",
"The sky is the limit!\0",
"Jeb has amazing hair!\0",
"Casual gaming!\0",
"Undefeated!\0",
"Kinda like Lemmings!\0",
"Follow the train, CJ!\0",
"Leveraging synergy!\0",
"DungeonQuest is unfair!\0",
"110813!\0",
"90210!\0",
"Check out the far lands!\0",
"Tyrion would love it!\0",
"Also try VVVVVV!\0",
"Also try Super Meat Boy!\0",
"Also try Terraria!\0",
"Also try Mount And Blade!\0",
"Also try Project Zomboid!\0",
"Also try World of Goo!\0",
"Also try Limbo!\0",
"Also try Braid!\0",
"That's super!\0",
"Bread is pain!\0",
"Read more books!\0",
"Khaaaaaaaaan!\0",
"Bigger than a bread box!\0",
"Millions of peaches!\0",
"Fnord!\0",
"This is my true form!\0",
"Totally forgot about Dre!\0",
"Pumpkinhead!\0",
"Made by Jeb!\0",
"Has an ending!\0",
"Finally complete!\0",
"Feature packed!\0",
"Boots with the fur!\0",
"Stop, hammertime!\0",
"Testificates!\0",
"Conventional!\0",
"Place ALL the blocks!\0",
"Does barrel rolls!\0",
"Meeting expectations!\0",
"PC gaming since 1873!\0",
"Deja vu!\0",
"Deja vu!\0",
"Got your nose!\0",
"Doesn't use the U-word!\0",
"Child's play!\0",
"Technologic!\0",
"Funk soul brother!\0",
"Pumpa kungen!\0",
"Helo Cymru!\0",
"My life for Aiur!\0",
"Who put it there?\0",
"You can't explain that!\0",
"if not ok then return end\0",
"kFUNKY LOL\0",
"Big Pointy Teeth!\0",
"Bekarton guards the gate!\0",
"Mmmph, mmph!\0",
"Swords for everyone!\0",
"Plz reply to my tweet!\0",
".party()!\0",
"Take her pillow!\0",
"Put that cookie down!\0",
"Pretty scary!\0",
"I have a suggestion.\0",
"Now with extra hugs!\0",
"Now Java 6!\0",
"Woah.\0",
"HURNERJSGER?\0",
"What's up, Doc?\0",
"That's Numberwang!\0",
"pls rt\0",
"Throw a blanket over it!\0",
"Extra things!\0",
"Popping tags!\0",
"Now With Multiplayer!\0",
"Rise from your grave!\0",
"Run, coward! I hunger!\0",
"Flavor with no seasoning!\0",
"Getting ready to show!\0",
"Getting ready to know!\0",
"Getting ready to drop!\0",
"Getting ready to shock!\0",
"Getting ready to freak!\0",
"Getting ready to speak!\0",
"It swings, it jives!\0",
"/give @a hugs 64\0",
"This is good for Realms.\0"
};

void loadSplashText();
void renderSplashText();