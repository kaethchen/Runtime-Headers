@class MCMCommandOperationDelete, MCMContainerIdentity;

@interface MCMCommandDeleteWithUIDClassAndIdentifier : MCMCommand <MCMParametersWithContainer>

@property (readonly, nonatomic) MCMCommandOperationDelete *deleteCommand;
@property (readonly, nonatomic) MCMContainerIdentity *containerIdentity;

+ (unsigned long long)command;
+ (Class)incomingMessageClass;

- (void).cxx_destruct;
- (void)execute;
- (id)initWithMessage:(id)a0 context:(id)a1 reply:(id)a2;
- (BOOL)preflightClientAllowed;

@end
