@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface VCQoSMonitorManager : VCObject {
    NSMutableDictionary *_sources;
    NSObject<OS_dispatch_queue> *_xpcCommandQueue;
    long long _reportingInterval;
}

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void)deregisterBlocksForService;
- (BOOL)doesQoSSourceExistForStreamToken:(id)a0;
- (void)registerBlocksForService;
- (void)registerQoSReportingSourceForToken:(long long)a0;
- (void)unregisterQoSReportingSourceForToken:(long long)a0;
- (void)updateEventDrivenQoSReport:(id)a0 toClientsWithToken:(long long)a1;
- (void)updateQoSReport:(id)a0 toClientsWithToken:(long long)a1;

@end
