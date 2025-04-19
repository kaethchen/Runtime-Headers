@class NSSet, NSDictionary, MCMConcreteContainerIdentity;

@interface MCMCommandUpdateInfo : MCMCommand <MCMParametersUpdateInfo>

@property (readonly, nonatomic) NSSet *deleteKeys;
@property (readonly, nonatomic) NSDictionary *infoDict;
@property (readonly, nonatomic) BOOL fullReplace;
@property (readonly, nonatomic) MCMConcreteContainerIdentity *concreteContainerIdentity;
@property (readonly, nonatomic) BOOL includedPath;
@property (readonly, nonatomic) BOOL includedInfo;
@property (readonly, nonatomic) BOOL includedUserManagedAssetsPath;
@property (readonly, nonatomic) BOOL includedCreator;

+ (unsigned long long)command;
+ (Class)incomingMessageClass;

- (void).cxx_destruct;
- (void)execute;
- (id)initWithMessage:(id)a0 context:(id)a1 reply:(id)a2;
- (BOOL)preflightClientAllowed;

@end
