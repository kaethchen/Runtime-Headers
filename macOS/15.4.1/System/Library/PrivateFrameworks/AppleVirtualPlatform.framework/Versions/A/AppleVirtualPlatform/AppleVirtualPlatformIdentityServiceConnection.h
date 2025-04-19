@class NSXPCConnection, NSError, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface AppleVirtualPlatformIdentityServiceConnection : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_connection;
    NSError *_proxyError;
    NSObject<OS_dispatch_source> *_timer;
    BOOL _timedOut;
}

- (void)dealloc;
- (void).cxx_destruct;

@end
