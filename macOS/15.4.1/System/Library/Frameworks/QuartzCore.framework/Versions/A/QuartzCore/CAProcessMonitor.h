@class NSObject, NSMutableSet, RBSProcessMonitor;
@protocol OS_dispatch_queue;

@interface CAProcessMonitor : NSObject {
    id /* block */ _callback;
    RBSProcessMonitor *_processMonitor;
    NSMutableSet *_processIdentifiers;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void)dealloc;
- (id)initWithCallback:(id /* block */)a0;
- (void)addMonitoringProcess:(int)a0;
- (void)removeMonitoringProcess:(int)a0;
- (void)updateConfiguration;

@end
