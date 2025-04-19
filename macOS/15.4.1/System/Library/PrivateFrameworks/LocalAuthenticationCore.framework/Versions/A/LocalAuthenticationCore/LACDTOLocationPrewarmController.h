@class NSString, NSObject;
@protocol LACDTOLocationProvider, OS_dispatch_queue, LACDTOLocationPrewarmStrategy;

@interface LACDTOLocationPrewarmController : NSObject <LACDTOLocationPrewarmController> {
    BOOL _running;
    id<LACDTOLocationProvider> _locationProvider;
    id<LACDTOLocationPrewarmStrategy> _strategy;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)notificationCenter:(id)a0 didReceiveNotification:(struct __CFString { } *)a1;
- (void)prewarmWithCompletion:(id /* block */)a0;
- (void)_prewarmWithCompletion:(id /* block */)a0;
- (id)initWithLocationProvider:(id)a0 strategy:(id)a1 workQueue:(id)a2;

@end
