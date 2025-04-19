@class NSString, MCMConcreteContainerIdentity;

@interface MCMCommandSetInfoValue : MCMCommand <MCMParametersWithKeyValue>

@property (readonly, nonatomic) id value;
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
- (id)initWithKey:(id)a0 value:(id)a1 containerIdentity:(id)a2 context:(id)a3 resultPromise:(id)a4;
- (id)initWithMessage:(id)a0 context:(id)a1 reply:(id)a2;
- (BOOL)preflightClientAllowed;

@end
