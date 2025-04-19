@class NSArray, NSDictionary, NSMutableDictionary, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface SMSystem_Daemon_Windows : SMSystem_Daemon_Network

@property BOOL sizingIsCancelled;
@property BOOL hasSystemProfile;
@property (retain, nonatomic) NSArray *allUsers;
@property (retain, nonatomic) NSDictionary *versionDictionary;
@property (retain) NSObject<OS_dispatch_queue> *systemProfileQueue;
@property (retain) NSMutableDictionary *componentDictionary;
@property (retain) NSString *driveLetter;
@property (retain, nonatomic) NSArray *components;

+ (id)modelIcon;

- (void).cxx_destruct;
- (id)systemVersion;
- (id)productVersion;
- (id)componentForIdentifier:(id)a0;
- (unsigned long long)systemType;
- (id)statusDelegate;
- (id)copier;
- (id)initWithSession:(id)a0 name:(id)a1 txtRecord:(id)a2;
- (id)sizeForComponentWithIdentifier:(id)a0;
- (void)addComponentsToDictionary:(id)a0;
- (BOOL)canMigrateRootUser;
- (void)cancelSizing;
- (id)componentWithName:(id)a0 forUser:(id)a1;
- (BOOL)connectSession;
- (id)createFileManager;
- (BOOL)disallowsIPV6;
- (void)dumpRemoteLog;
- (void)evaluateServerType;
- (id)filesystemEnumerator;
- (id)finalSizeAndCountWithFileGroupings:(id)a0 withUsersToTransfer:(id)a1;
- (id)getUpdatedUserList:(id)a0;
- (BOOL)hasAPather;
- (BOOL)independentlyHandlesReconnects;
- (BOOL)isDefaultEffaceable;
- (BOOL)mustPredetermineTranslatedUIDs;
- (BOOL)mustSetItemCountIsUnreliable;
- (Class)networkProxyClass;
- (void)prepareIncompatibleApplicationsList;
- (BOOL)shouldSwitchToAccessPoint;
- (void)sizeAllUsersIncludingVaultUsers:(BOOL)a0 callbackBlock:(id /* block */)a1;
- (void)sizeComponent:(id)a0 callbackBlock:(id /* block */)a1;
- (id)sizeForComponentsWithIdentifiers:(id)a0;
- (void)sizeOfComponent:(id)a0 callbackBlock:(id /* block */)a1;
- (void)sourceConnectionChanged;
- (void)updateSystemProfile;
- (BOOL)usesAPathingAnalyzer;
- (id)volumeIcon;

@end
