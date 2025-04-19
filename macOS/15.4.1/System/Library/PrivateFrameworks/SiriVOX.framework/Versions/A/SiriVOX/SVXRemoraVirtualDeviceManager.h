@class SVXQueuePerformer, SVXVirtualDeviceFactory, SVXDaemonRunningObserver;

@interface SVXRemoraVirtualDeviceManager : NSObject {
    SVXQueuePerformer *_mainQueuePerformer;
    SVXDaemonRunningObserver *_runningObserver;
    SVXVirtualDeviceFactory *_virtualDeviceFactory;
}

- (void).cxx_destruct;
- (id)initWithRunningObserver:(id)a0;
- (id)initWithRunningObserver:(id)a0 mainQueuePerformer:(id)a1 virtualDeviceFactory:(id)a2;

@end
