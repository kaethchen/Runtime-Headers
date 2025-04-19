@class SUCorePersistedState, NSObject;
@protocol OS_dispatch_queue;

@interface SUCorePolicyDDMConfiguration : NSObject

@property (retain) SUCorePersistedState *persistedState;
@property (retain) NSObject<OS_dispatch_queue> *stateQueue;
@property (nonatomic) BOOL allowInvalidDeclaration;

+ (id)sharedInstance;
+ (id)getDaemonCacheDirectory;
+ (id)declarationFromAllDeclarations:(id)a0;
+ (id)declarationFromAllDeclarationDicts:(id)a0;
+ (id)statePersistencePath;

- (id)description;
- (id)allKeys;
- (void).cxx_destruct;
- (id)currentGlobalSettingsDeclaration;
- (id)initWithStatePersistencePath:(id)a0;
- (void)_persistState;
- (id)_dateFromString:(id)a0;
- (id)allDeclarations;
- (void)removeGlobalSettingsDeclaration;
- (BOOL)addDeclaration:(id)a0 withKey:(id)a1 returningError:(id *)a2;
- (BOOL)addGlobalSettingsDeclaration:(id)a0 returningError:(id *)a1;
- (id)currentlyApplicableDeclaration;
- (id)invalidateAllInvalidDeclarationsReturningAllInvalid;
- (BOOL)removeDeclarationForKey:(id)a0;
- (id)allDeclarationsIncludingInvalid;
- (id)_getActiveDeclarationKey;
- (void)_getDeclarations:(id *)a0 invalid:(id *)a1;
- (void)_persistActiveDeclarationKey:(id)a0;
- (void)_persistInvalidDeclarations:(id)a0;
- (void)_persistValidDeclarations:(id)a0;
- (id)activeDeclarationKey;
- (BOOL)addDeclaration:(id)a0 returningError:(id *)a1;
- (BOOL)addDeclaration:(id)a0 withKey:(id)a1;
- (id)declarationForKey:(id)a0;
- (BOOL)hasManagedConfigurations;
- (id)initWithState;
- (BOOL)invalidateDeclarationForKey:(id)a0;
- (void)removeAllDeclarations;
- (void)removeAllInvalidDeclarations;
- (id)removeAllInvalidDeclarationsReturningInvalid;
- (BOOL)setActiveDeclarationKey:(id)a0;

@end
