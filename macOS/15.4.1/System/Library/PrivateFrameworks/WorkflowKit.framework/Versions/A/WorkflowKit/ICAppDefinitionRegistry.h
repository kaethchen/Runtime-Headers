@interface ICAppDefinitionRegistry : NSObject

+ (void)initialize;
+ (void)appDefinitionFor2Do;
+ (void)appDefinitionForAssociate;
+ (void)appDefinitionForBear;
+ (void)appDefinitionForBlink;
+ (void)appDefinitionForBooks;
+ (void)appDefinitionForCaptio;
+ (void)appDefinitionForClear;
+ (void)appDefinitionForDayOne;
+ (void)appDefinitionForDrafts;
+ (void)appDefinitionForDue;
+ (void)appDefinitionForEditorial;
+ (void)appDefinitionForFantastical2;
+ (void)appDefinitionForGoogleChrome;
+ (void)appDefinitionForInstagram;
+ (void)appDefinitionForLine;
+ (void)appDefinitionForOmniFocus;
+ (void)appDefinitionForOpener;
+ (void)appDefinitionForOvercast;
+ (void)appDefinitionForPythonista;
+ (void)appDefinitionForQuotebook;
+ (void)appDefinitionForSchemes;
+ (void)appDefinitionForShortcuts;
+ (void)appDefinitionForSkype;
+ (void)appDefinitionForTally;
+ (void)appDefinitionForTelegram;
+ (void)appDefinitionForTextTool;
+ (void)appDefinitionForTheHitList;
+ (void)appDefinitionForThings;
+ (void)appDefinitionForTweetbot;
+ (void)appDefinitionForUlysses;
+ (void)appDefinitionForWhatsApp;
+ (void)appDefinitionForiTranslate;
+ (void)rediscoverDefinitionsIfNeeded;
+ (void)registerDefinitionForKey:(id)a0 definition:(id /* block */)a1;
+ (id)registeredDefinitions;

@end
