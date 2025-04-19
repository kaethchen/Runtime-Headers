@class NSMutableDictionary;

@interface DAAccountLoader : NSObject

@property (retain, nonatomic) NSMutableDictionary *acAccountTypeToAccountFrameworkSubpath;
@property (retain, nonatomic) NSMutableDictionary *acAccountTypeToAccountDaemonBundleSubpath;
@property (retain, nonatomic) NSMutableDictionary *defaultClassNamesForAccountTypes;
@property (retain, nonatomic) NSMutableDictionary *classNamesForDirectlyNestedAccountTypes;
@property (retain, nonatomic) NSMutableDictionary *classNamesForTopLevelAccountTypes;

+ (id)sharedInstance;
+ (void)_findPrivateFrameworks;

- (id)init;
- (void).cxx_destruct;
- (Class)daemonAccountClassForACAccount:(id)a0;
- (Class)clientAccountClassForACAccount:(id)a0;
- (void)_addAccountInfo:(id)a0 forFrameworkNamed:(id)a1;
- (BOOL)_loadFrameworkAtSubpath:(id)a0;
- (Class)agentClassForACAccount:(id)a0;
- (Class)daemonAppropriateAccountClassForACAccount:(id)a0;
- (void)loadDaemonBundleForACAccountType:(id)a0;
- (void)loadFrameworkForACAccountType:(id)a0;
- (id)_classNamesDictionaryForAccount:(id)a0;

@end
