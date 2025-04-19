@class MCMContainerIdentity;

@interface MCMCommandDeleteContainerContent : MCMCommand <MCMParametersWithContainer>

@property (readonly, nonatomic) MCMContainerIdentity *containerIdentity;

+ (unsigned long long)command;
+ (Class)incomingMessageClass;

- (void).cxx_destruct;
- (void)execute;
- (id)initWithContainerIdentity:(id)a0 context:(id)a1 resultPromise:(id)a2;
- (id)initWithMessage:(id)a0 context:(id)a1 reply:(id)a2;
- (BOOL)preflightClientAllowed;

@end
