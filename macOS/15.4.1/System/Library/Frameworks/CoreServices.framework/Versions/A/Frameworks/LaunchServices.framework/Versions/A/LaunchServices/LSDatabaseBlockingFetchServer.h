@class NSXPCListener, NSObject;
@protocol OS_dispatch_queue;

@interface LSDatabaseBlockingFetchServer : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCListener *_listener;
    BOOL _running;
    _Atomic BOOL _forManualRebuild;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)_init;
- (id)getEndpoint;
- (BOOL)isForManualRebuild;
- (void)setBlockingIsForManualRebuild:(BOOL)a0;
- (void)startRunningIfNecessary;

@end
