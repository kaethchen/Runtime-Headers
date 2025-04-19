@class RWIMobileDeviceConnection, NSString, RWIDevice, NSTimer, NSMutableData, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_dispatch_semaphore;

@interface RWIServiceLockdownConnection : RWIServiceConnection {
    NSObject<OS_dispatch_queue> *_lockdownQueue;
    NSObject<OS_dispatch_source> *_lockdownSource;
    NSObject<OS_dispatch_semaphore> *_lockdownSemaphore;
    NSMutableData *_incomingData;
    NSTimer *_startServiceRetryTimer;
    BOOL _disconnectRequested;
    BOOL _hasReceivedAtLeastOneMessage;
}

@property (readonly) RWIDevice *device;
@property (readonly) RWIMobileDeviceConnection *mobileDeviceConnection;
@property (readonly) struct _AMDServiceConnection { } *serviceConnection;
@property (readonly) NSString *serviceName;

+ (id)connectionToNotificationProxyWithDevice:(id)a0 mobileDeviceConnection:(id)a1 delegate:(id)a2;
+ (id)connectionToRelayWithDevice:(id)a0 mobileDeviceConnection:(id)a1 delegate:(id)a2;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)device;
- (void)sendMessage:(id)a0;
- (BOOL)isConnected;
- (void)_disconnect;
- (id)loggingIdentifier;
- (void)_processIncomingBytes:(const char *)a0 length:(long long)a1;
- (void)_teardownConnectionToService;
- (void)closeInternal;
- (void)deviceQueue_startServiceWithName:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithDevice:(id)a0 mobileDeviceConnection:(id)a1 delegate:(id)a2;
- (void)readFromLockdownSocket;
- (void)startReadingFromLockdown;
- (void)startServiceWithName:(id)a0 retryPolicy:(long long)a1 setupBlock:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (void)stopReadingFromLockdown;

@end
