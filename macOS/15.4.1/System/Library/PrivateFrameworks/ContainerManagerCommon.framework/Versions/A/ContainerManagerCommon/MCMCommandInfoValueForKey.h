@class NSString, MCMConcreteContainerIdentity;

@interface MCMCommandInfoValueForKey : MCMCommand <MCMParametersWithKey>

@property (readonly, nonatomic) NSString *key;
@property (readonly, nonatomic) MCMConcreteContainerIdentity *concreteContainerIdentity;
@property (readonly, nonatomic) BOOL includedPath;
@property (readonly, nonatomic) BOOL includedInfo;
@property (readonly, nonatomic) BOOL includedUserManagedAssetsPath;
@property (readonly, nonatomic) BOOL includedCreator;

+ (unsigned long long)command;
+ (Class)incomingMessageClass;

- (void).cxx_destruct;
- (void)execute;
- (id)infoValueForKeyWithError:(unsigned long long *)a0;
- (id)initWithKey:(id)a0 concreteContainerIdentity:(id)a1 context:(id)a2 resultPromise:(id)a3;
- (id)initWithMessage:(id)a0 context:(id)a1 reply:(id)a2;
- (BOOL)preflightClientAllowed;

@end
