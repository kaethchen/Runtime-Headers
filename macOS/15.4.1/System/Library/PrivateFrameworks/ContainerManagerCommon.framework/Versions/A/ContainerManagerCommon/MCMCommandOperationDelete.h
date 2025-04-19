@class NSArray, MCMXPCMessageOperationDelete;

@interface MCMCommandOperationDelete : MCMCommand <MCMParametersWithConcreteContainersArray, MCMParametersOperationDelete>

@property (readonly, nonatomic) NSArray *containerIdentities;
@property (readonly, nonatomic) BOOL removeAllCodeSignInfo;
@property (readonly, nonatomic) MCMXPCMessageOperationDelete *message;
@property (readonly, nonatomic) NSArray *concreteContainerIdentities;
@property (readonly, nonatomic) BOOL waitForDiskSpaceReclaim;

+ (unsigned long long)command;
+ (id)commandForOperationDeleteWithContainerIdentities:(id)a0 removeAllCodeSignInfo:(BOOL)a1 context:(id)a2 resultPromise:(id)a3;
+ (BOOL)deleteContainerRootURL:(id)a0 userIdentity:(id)a1 containerClass:(unsigned long long)a2 containerPathIdentifier:(id)a3 preferDirectDelete:(BOOL)a4 error:(id *)a5;
+ (Class)incomingMessageClass;

- (void).cxx_destruct;
- (void)execute;
- (id)_containerIdentities;
- (id)_containersToDeleteRecursivelyStartingWithContainerIdentities:(id)a0 error:(id *)a1;
- (id)_deleteItems:(id)a0 directDelete:(BOOL)a1 error:(id *)a2;
- (id)_initWithContainerIdentities:(id)a0 waitForDiskSpaceReclaim:(BOOL)a1 removeAllCodeSignInfo:(BOOL)a2 context:(id)a3 resultPromise:(id)a4;
- (void)_relayContainerIdentities:(id)a0 andAmendResult:(id)a1;
- (id)_replyFromRelayToDaemonWithContainerIdentities:(id)a0;
- (void)_routeContainersToHandle:(id *)a0 toRelay:(id *)a1;
- (id)initWithContainerIdentities:(id)a0 waitForDiskSpaceReclaim:(BOOL)a1 removeAllCodeSignInfo:(BOOL)a2 context:(id)a3 resultPromise:(id)a4;
- (id)initWithMessage:(id)a0 context:(id)a1 reply:(id)a2;
- (BOOL)preflightClientAllowed;

@end
