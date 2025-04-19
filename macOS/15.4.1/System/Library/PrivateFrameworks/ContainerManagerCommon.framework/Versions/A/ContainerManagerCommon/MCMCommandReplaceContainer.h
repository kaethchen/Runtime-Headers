@class MCMConcreteContainerIdentity;

@interface MCMCommandReplaceContainer : MCMCommand <MCMParametersReplace>

@property (readonly, nonatomic) BOOL preserveOldPathIdentifier;
@property (readonly, nonatomic) BOOL preserveOldInternalUUID;
@property (readonly, nonatomic) BOOL asyncReclaim;
@property (readonly, nonatomic) MCMConcreteContainerIdentity *containerIdentityOld;
@property (readonly, nonatomic) MCMConcreteContainerIdentity *containerIdentityNew;

+ (unsigned long long)command;
+ (Class)incomingMessageClass;

- (void).cxx_destruct;
- (void)execute;
- (id)initWithConcreteContainerIdentityOld:(id)a0 concreteContainerIdentityNew:(id)a1 preserveOldPathIdentifier:(BOOL)a2 preserveOldInternalUUID:(BOOL)a3 asyncReclaim:(BOOL)a4 context:(id)a5 resultPromise:(id)a6;
- (id)initWithMessage:(id)a0 context:(id)a1 reply:(id)a2;
- (BOOL)preflightClientAllowed;

@end
