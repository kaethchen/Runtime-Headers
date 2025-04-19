@class NSMutableDictionary, NSXPCConnection, NSLock, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface ICCommandCenter : NSObject

@property (nonatomic) int selfPID;
@property (retain, nonatomic) NSMutableDictionary *pendingCommands;
@property (nonatomic) BOOL openSession;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (nonatomic) unsigned int connectionAttempts;
@property (retain, nonatomic) NSLock *connectionLock;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialCommandQueue;
@property (retain, nonatomic) NSMutableDictionary *replyDict;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *msgSem;

+ (id)defaultCenter;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)resetConnection;
- (id)getConnection;
- (void)requestOpenSessionWithOptions:(id)a0 completion:(id /* block */)a1;
- (void)addSelectorToInterface:(id)a0 selectorString:(id)a1 origin:(BOOL)a2;
- (void)handleImageCaptureEventNotification:(id)a0 completion:(id /* block */)a1;
- (void)icddConnectionSetup:(id)a0;
- (void)loadDeviceModuleForDeviceRef:(id)a0 completion:(id /* block */)a1;
- (void)lockConnection;
- (id)makeCommand:(id)a0;
- (void)messageFromClient:(id)a0 withReply:(id /* block */)a1;
- (void)messageFromDevice:(id)a0 withReply:(id /* block */)a1;
- (void)messageFromICDD:(id)a0 withReply:(id /* block */)a1;
- (void)releaseConnection;
- (void)requestScannerOpenSessionWithOptions:(id)a0 completion:(id /* block */)a1;
- (void)runBlock:(id /* block */)a0;
- (void)sendCommand:(id)a0 from:(id)a1 completion:(id /* block */)a2;
- (void)setDeviceModuleEndpointForDeviceRef:(id)a0 endpoint:(id)a1 deviceID:(id)a2;
- (void)unlockConnection;

@end
