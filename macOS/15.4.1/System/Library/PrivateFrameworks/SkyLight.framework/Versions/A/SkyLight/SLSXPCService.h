@class NSString, NSObject;
@protocol OS_xpc_object, OS_dispatch_queue;

@interface SLSXPCService : NSObject <SLSXPCServiceProtocol>

@property BOOL enabled;
@property BOOL connected;
@property BOOL setTarget;
@property (retain, nonatomic) NSObject<OS_xpc_object> *connection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *notifyQueue;
@property (copy, nonatomic) id /* block */ errorBlock;
@property (copy, nonatomic) id /* block */ notificationBlock;
@property (copy, nonatomic) id /* block */ clientErrorBlock;
@property (copy, nonatomic) id /* block */ clientNotificationBlock;
@property BOOL autoreconnect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void)handleXPCEvent:(id)a0;
- (const char *)cfStringToCStringPtr:(id)a0;
- (id)createCancellableMachRecvSourceWithQueue:(id)a0 error:(id *)a1 cancelAction:(id /* block */)a2;
- (void)createNoSenderRecvPairWithQueue:(id)a0 errorHandler:(id /* block */)a1 eventHandler:(id /* block */)a2;
- (id)createXPCDictionary:(unsigned long long)a0;
- (id)getConnectionQueue;
- (id)initConnectionWithName:(id)a0 notificationQueue:(id)a1 withAutoreconnect:(BOOL)a2 errorHandler:(id /* block */)a3 notificationBlock:(id /* block */)a4;
- (void)initWithConnection:(id)a0 errorHandler:(id /* block */)a1 notificationBlock:(id /* block */)a2;
- (id)makeNSErrorForCGError:(long long)a0;
- (id)makeNSErrorForCocoaError:(long long)a0;
- (id)makeNSErrorForMachError:(long long)a0;
- (id)makeNSErrorForOSStatus:(long long)a0;
- (id)makeNSErrorForPOSIXError:(long long)a0;
- (BOOL)reinitConnection;
- (void)sendNSError:(id)a0;
- (int)sendXPCConnectionClosed;
- (int)sendXPCDictionary:(id)a0;
- (id)sendXPCDictionarySync:(id)a0;

@end
