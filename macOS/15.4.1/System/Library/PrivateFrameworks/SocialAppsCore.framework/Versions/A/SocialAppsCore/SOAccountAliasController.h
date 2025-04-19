@class NSMutableDictionary, IMAccount, NSMutableOrderedSet, NSMutableArray;

@interface SOAccountAliasController : NSObject

@property (retain) NSMutableOrderedSet *aliasSet;
@property (retain) NSMutableArray *aliasTimers;
@property (retain) NSMutableDictionary *aliasLookup;
@property (readonly, weak) IMAccount *account;

+ (id)stringForAliasValidationFailure:(long long)a0 aliasName:(id)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (void)setAccount:(id)a0;
- (id)initWithAccount:(id)a0;
- (id)aliasForName:(id)a0;
- (void)_clearTimers;
- (id)vettedAliases;
- (id)aliases;
- (id)activeAliases;
- (void)addAliases:(id)a0;
- (void)deactivateAliases:(id)a0;
- (void)removeAliases:(id)a0;
- (long long)validationErrorReasonForAlias:(id)a0;
- (void)_addAliasToSet:(id)a0;
- (void)_addAliasTimer:(id)a0 length:(double)a1;
- (void)_addAliasesToSet:(id)a0;
- (void)_aliasValidationChanged:(id)a0;
- (void)_aliasesChanged:(id)a0;
- (void)_initializeAliases;
- (void)_listenToNotifications;
- (void)_removeAliasFromSet:(id)a0;
- (void)_removeAliasesFromSet:(id)a0;
- (void)_removeTimerForAliasName:(id)a0;
- (void)_stopListeningToNotifications;
- (void)_validationTimerEnded:(id)a0;
- (void)_vettedAliasesChanged:(id)a0;
- (long long)activeAliasCount;
- (BOOL)addAliasWithName:(id)a0;
- (void)addAliasesWithNames:(id)a0;
- (void)configureAliasState:(id)a0;
- (void)confirmNewAlias:(id)a0;
- (void)deleteAlias:(id)a0;
- (void)removeAliasWithName:(id)a0;
- (void)removeAliasesWithNames:(id)a0;
- (long long)vettedAliasCount;

@end
