@class EMClientState, EMSearchableIndex, EMSenderRepository, EMBlockedSenderManager, NSObject, EFLocked, EMInteractionLogger, EMOutgoingMessageRepository, EMActivityRegistry, NSString, EMDiagnosticInfoGatherer, EMAccountRepository, NSHashTable, EMMailboxRepository, NSXPCListenerEndpoint, EMFetchController, NSXPCConnection, NSXPCInterface, EMMessageRepository;
@protocol OS_dispatch_queue, OS_os_log, EFCancelable, EMVIPManager, NSXPCProxyCreating;

@interface EMDaemonInterface : NSObject <EFLoggable, EMRemoteProxyGenerator> {
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_connection;
    BOOL _useNegotiatedConnection;
    EFLocked *_negotiatedMailConnection;
    NSXPCListenerEndpoint *_appEndpoint;
    NSHashTable *_connections;
    long long _connectionState;
    id<EFCancelable> _daemonLaunchToken;
    BOOL _allowsBackgroundResume;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    _Atomic BOOL _invalidated;
}

@property (class, readonly) NSXPCInterface *remoteObjectInterface;
@property (class) BOOL cachedMailAppIsInstalled;
@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly, nonatomic) NSXPCConnection *test_connection;
@property (readonly) EMSearchableIndex *searchableIndex;
@property (readonly) id<NSXPCProxyCreating> proxyCreator;
@property (readonly) EMMessageRepository *messageRepository;
@property (readonly) EMOutgoingMessageRepository *outgoingMessageRepository;
@property (readonly) EMMailboxRepository *mailboxRepository;
@property (readonly) EMAccountRepository *accountRepository;
@property (readonly) EMSenderRepository *senderRepository;
@property (readonly) EMFetchController *fetchController;
@property (readonly) EMClientState *clientState;
@property (readonly) EMInteractionLogger *interactionLogger;
@property (readonly) EMActivityRegistry *activityRegistry;
@property (readonly) id<EMVIPManager> vipManager;
@property (readonly) EMBlockedSenderManager *blockedSenderManager;
@property (readonly) EMDiagnosticInfoGatherer *diagnosticInfoGatherer;
@property BOOL allowsBackgroundResume;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_mailUninstalledFile;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithListenerEndpoint:(id)a0;
- (void)_invalidate;
- (id)initForTesting;
- (void)repopulateBusinessesTables;
- (void)test_tearDown;
- (id)generateProxyForProtocol:(id)a0 error:(id *)a1;
- (id)initWithDirectConnectionToMaild;
- (id)_connectionForProtocol:(id)a0 error:(id *)a1;
- (void)_destroyNegotiatedConnection:(id)a0 withReason:(id)a1;
- (id)_initByAdoptingConnection:(id)a0 useNegotiatedConnection:(BOOL)a1 configureBlockedSenderManager:(BOOL)a2;
- (void)checkInMailAppEndpoint:(id)a0;
- (id)connectionForProtocol:(id)a0;
- (void)handleDaemonAvailability;
- (id)initAndConfigureBlockedSenderManager:(BOOL)a0;
- (void)launchDaemon;
- (void)resetProtocolConnections;

@end
