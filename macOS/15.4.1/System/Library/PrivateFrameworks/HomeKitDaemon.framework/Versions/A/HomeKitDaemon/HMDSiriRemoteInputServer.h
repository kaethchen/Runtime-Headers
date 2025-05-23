@class NSHashTable, NSString, NSObject;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface HMDSiriRemoteInputServer : NSObject <HMFLogging>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_xpc_object> *xpcServer;
@property (retain, nonatomic) NSObject<OS_xpc_object> *xpcConnection;
@property (retain, nonatomic) NSHashTable *siriSessions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (id)initWithQueue:(id)a0;
- (void)handleConnection:(id)a0;
- (void)handleDisconnection;
- (void)sendMsg:(id)a0 args:(id)a1;
- (id)sessionForIdentifier:(id)a0;
- (void)deregisterSiriSession:(id)a0;
- (void)handleCheckInMsg:(id)a0;
- (void)handleConnectionEvent:(id)a0;
- (void)handleMsg:(id)a0;
- (void)handleServerEvent:(id)a0;
- (void)handleStartStreamMsg:(id)a0 args:(id)a1;
- (void)handleStopStreamMsg:(id)a0;
- (BOOL)registerSiriSession:(id)a0;
- (void)sendMsgIfCheckedIn:(id)a0 args:(id)a1;

@end
