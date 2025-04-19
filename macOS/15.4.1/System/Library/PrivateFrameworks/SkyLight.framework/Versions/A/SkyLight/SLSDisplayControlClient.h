@class NSString, NSObject;
@protocol OS_dispatch_semaphore;

@interface SLSDisplayControlClient : NSObject <SLSDisplayControlClientProtocol>

@property BOOL enabled;
@property BOOL configured;
@property (copy, nonatomic) id /* block */ notification;
@property (retain) NSObject<OS_dispatch_semaphore> *semaphore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)semaphoreSignal;
- (void)addNotificationType:(unsigned long long)a0 to:(id)a1;
- (void)addPayload:(id)a0 ofType:(unsigned long long)a1 to:(id)a2;
- (void)addUUID:(unsigned long long)a0 to:(id)a1;
- (const char *)cfStringToCStringPtr:(id)a0;
- (void)createNSError:(id *)a0 withCGError:(long long)a1;
- (void)decodeNotification:(id)a0 notifyType:(unsigned long long *)a1 uuid:(unsigned long long *)a2 payloadType:(unsigned long long *)a3 payload:(id *)a4;
- (id)encodeCommand:(unsigned long long)a0 withUUID:(unsigned long long *)a1 payloadType:(unsigned long long)a2 payload:(id)a3;
- (BOOL)isTypeOfClass:(id)a0 aClass:(Class)a1 error:(int *)a2;
- (unsigned long long)payloadTypeToCFType:(unsigned long long)a0;
- (void)registerClient:(id *)a0 port:(unsigned int)a1 notifyQueue:(id)a2 notificationType:(unsigned long long)a3 notificationBlock:(id /* block */)a4;
- (id)registerDaemonClient:(id)a0 withAutoreconnect:(BOOL)a1 error:(id *)a2 notifyQueue:(id)a3 notificationType:(unsigned long long)a4 notificationBlock:(id /* block */)a5;
- (id)registerGUIClient:(id)a0 connectionPort:(unsigned int)a1 error:(id *)a2 notifyQueue:(id)a3 notificationType:(unsigned long long)a4 notificationBlock:(id /* block */)a5;
- (int)semaphoreWait:(unsigned char)a0;
- (void)terminateConnection;
- (id)xpcEventToNotification:(id)a0;

@end
