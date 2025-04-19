@interface ABExchangeSetup : NSObject

+ (id)sharedExchangeSetup;

- (id)init;
- (void)setUseSSL:(BOOL)a0;
- (BOOL)useSSL;
- (id)_ADKeySet;
- (id)_dictionaryFromUser:(id)a0;
- (id)activeDirectoryEmailAddress;
- (id)activeDirectoryFullName;
- (id)activeDirectoryPassword;
- (id)activeDirectoryUser;
- (id)exchangeServer;
- (id)outlookWebAccessPath;
- (id)outlookWebAccessPathFromUserString:(id)a0 withUserName:(id)a1;
- (id)outlookWebAccessServer;
- (BOOL)setActiveDirectoryPassword:(id)a0;
- (void)setActiveDirectoryUser:(id)a0;
- (void)setExchangeServer:(id)a0;
- (void)setOutlookWebAccessPath:(id)a0;
- (void)setOutlookWebAccessServer:(id)a0;
- (void)setSyncsWithExchange:(BOOL)a0;
- (BOOL)syncsWithExchange;
- (BOOL)usingActiveDirectory;

@end
