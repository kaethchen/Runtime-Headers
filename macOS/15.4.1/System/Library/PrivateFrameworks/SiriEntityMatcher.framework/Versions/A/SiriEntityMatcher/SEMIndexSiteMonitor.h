@class NSArray, UVSessionObjC, NSObject;
@protocol OS_dispatch_queue;

@interface SEMIndexSiteMonitor : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    UVSessionObjC *_uvSession;
    NSArray *_observers;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void)_beginMonitoring;
- (void)_enumerateObserversAsPersonaIdentifier:(id)a0 usingBlock:(id /* block */)a1;
- (void)_registerObserver:(id)a0 exists:(BOOL)a1;
- (id)initWithQueue:(id)a0 uvSession:(id)a1;
- (void)registerForLaunchOnDemand;

@end
