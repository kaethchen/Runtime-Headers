@class NSString, NSXPCConnection, NSXPCInterface, NSMutableArray;

@interface TransactionManager : CHSynchronizedLoggable <TransactionManagerProtocol> {
    NSXPCConnection *_connection;
    NSXPCInterface *_interface;
    id _syncHelperReadyNotificationRef;
    NSMutableArray *_queuedTransactions;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)instance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)appendTransactions:(id)a0;
- (void)appendTransactions_sync:(id)a0;
- (void)createXpcConnection;
- (void)createXpcConnection_sync;
- (void)setupConnectionHandlers_sync;

@end
