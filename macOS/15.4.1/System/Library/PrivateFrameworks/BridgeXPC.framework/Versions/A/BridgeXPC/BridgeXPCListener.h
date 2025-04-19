@class NSString, NSObject;
@protocol OS_dispatch_queue, OS_tcp_listener;

@interface BridgeXPCListener : NSObject {
    NSObject<OS_dispatch_queue> *internal_queue;
    NSObject<OS_tcp_listener> *listener;
    unsigned long long BridgeXPCListenerState;
    unsigned long long state;
    unsigned long long BridgeXPCListenerType;
    unsigned long long listener_type;
    NSString *remote_service_name;
    BOOL eos_notifications_registered;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *targetQueue;
@property (copy, nonatomic) id /* block */ eventHandler;

- (void)dealloc;
- (void).cxx_destruct;
- (void)activate;
- (void)cancel;
- (void)accept:(id)a0;
- (id)initForRemoteService:(id)a0;
- (void)acceptSocket:(int)a0;
- (void)initEOSDeviceNotifications;
- (id)initWithEOSEntitlement:(BOOL)a0;
- (id)initWithEOSPortNumber:(unsigned int)a0;
- (id)initWithEOSService:(unsigned int)a0;
- (id)initWithLaunchdSockets:(id)a0;
- (id)initWithPortNumber:(unsigned int)a0;
- (void)setupQueues;

@end
