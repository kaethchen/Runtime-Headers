@class NSObject;
@protocol OS_dispatch_queue;

@interface NWStatsAppEventListener : NSObject {
    Class _RBSProcessMonitorClass;
    Class _RBSProcessPredicateClass;
    Class _RBSProcessStateDescriptorClass;
    void *_runningBoradDylibHandle;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;

@end
