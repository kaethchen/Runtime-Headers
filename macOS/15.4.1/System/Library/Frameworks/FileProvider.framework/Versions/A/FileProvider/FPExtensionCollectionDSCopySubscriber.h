@class NSURL, NSObject;
@protocol OS_dispatch_queue;

@interface FPExtensionCollectionDSCopySubscriber : NSObject {
    id _dsCopySubscriber;
    NSURL *_dsCopySubscriberURL;
    BOOL _dsCopyShouldStopAccessingSubscriberURL;
    BOOL _dsCopyIsObserving;
    NSObject<OS_dispatch_queue> *_dsCopySubscriberQueue;
}

- (id)init;
- (void).cxx_destruct;
- (void)stopMonitoring;
- (void)markObserving;
- (void)startMonitoringWithURL:(id)a0 publishingHandler:(id /* block */)a1;

@end
