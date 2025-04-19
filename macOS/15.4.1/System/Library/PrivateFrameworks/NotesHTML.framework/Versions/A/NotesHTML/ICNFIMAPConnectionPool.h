@class NSRecursiveLock, NSArray, NSString, NSCondition, NSMutableDictionary, NSMutableArray;

@interface ICNFIMAPConnectionPool : NSObject {
    NSRecursiveLock *_connectionPoolLock;
    NSCondition *_availabilityCondition;
    NSMutableDictionary *_idleConnectionsByMailbox;
    NSMutableDictionary *_activeConnectionsByMailbox;
    NSMutableArray *_suspendedGateways;
}

@property unsigned long long maximumConnectionCount;
@property (readonly) unsigned long long connectionCount;
@property (readonly, copy) NSArray *connections;
@property (copy) NSString *defaultIdleMailboxName;

+ (void)initialize;

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)removeInvalidConnections;
- (void)resetMaximumConnectionCount;
- (void)updateConnectionsShouldUseIdle:(id)a0;
- (id)_suspendGatewayOfConnection:(id)a0 mailbox:(id)a1 forMailbox:(id)a2 resumingGateway:(id)a3;
- (id)_anyConnectionFromDictionary:(id)a0 selectedOnly:(BOOL)a1 mailbox:(id *)a2;
- (id)_checkOutNewGatewayWithConnection:(id)a0 forMailbox:(id)a1;
- (id)_closeAllConnectionsAndCompact:(BOOL)a0 inDictionary:(id)a1;
- (BOOL)_connectionIsContained:(id)a0 forMailbox:(id)a1 inDictionary:(id)a2;
- (id)_gatewayToCheckOutConnection:(id)a0 defaultGateway:(id)a1 mailboxName:(id)a2 newGateway:(BOOL *)a3;
- (id)_keyForMailboxName:(id)a0;
- (void)_makeConnectionAvailable:(id)a0;
- (id)_newGatewayForConnection:(id)a0 mailboxName:(id)a1;
- (void)_removeAllConnectionsInDictionary:(id)a0;
- (BOOL)_removeConnection:(id)a0 fromDictionary:(id)a1;
- (void)_removeDisconnectedConnection:(id)a0 shouldRecover:(id)a1;
- (void)_removeInvalidConnectionsInDictionary:(id)a0;
- (void)_removeSuspendedGateway:(id)a0;
- (void)_sealSuspendedGateways;
- (void)_setConnection:(id)a0 forMailbox:(id)a1 clear:(BOOL)a2 inDictionary:(id)a3;
- (id)_suspendFirstIdleConnectionForMailbox:(id)a0 resumingGateway:(id)a1 totalSecondsWaited:(double *)a2 mightBeSuccessful:(BOOL *)a3;
- (id)_suspendFirstIdleConnectionInIdleConnections:(id)a0 forMailbox:(id)a1 resumingGateway:(id)a2;
- (void)_suspendGateway:(id)a0 allowNetworking:(BOOL)a1;
- (id)_suspendedGatewayForMailbox:(id)a0;
- (id)_suspendedGatewayWithWorkRequireSelected:(BOOL)a0;
- (BOOL)_validateAndCheckOutGateway:(id)a0 forMailbox:(id)a1 allowReconnect:(BOOL)a2 newGateway:(BOOL)a3;
- (BOOL)checkInConnection:(id)a0 forGateway:(id)a1;
- (void)checkInNewConnection:(id)a0;
- (id)checkOutGatewayForExistingConnectionToMailbox:(id)a0;
- (id)checkOutGatewayForMailbox:(id)a0;
- (id)checkOutGatewayForMailbox:(id)a0 newConnection:(id)a1 highPriority:(BOOL)a2 waitIndefinitely:(BOOL)a3;
- (id)checkOutNewGatewayWithConnection:(id)a0;
- (void)closeAllConnectionsAndCompact:(BOOL)a0;
- (void)mailboxWithServerName:(id)a0 wasRenamed:(id)a1;
- (void)sealGatewayShutIfNoChanceOfResuming:(id)a0;
- (BOOL)suspendGateway:(id)a0 withOperation:(id)a1;
- (BOOL)tryToResumeGateway:(id)a0;
- (BOOL)yieldGateway:(id)a0;

@end
