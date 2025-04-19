@class NSString, HKObserverSet, NSObject;
@protocol OS_dispatch_queue;

@interface HKWatchAppInstallationManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    HKObserverSet *_observers;
}

@property (readonly, nonatomic) NSString *bundleIdentifier;

- (void).cxx_destruct;
- (id)initWithBundleIdentifier:(id)a0;
- (void)startObserving;
- (void)stopObserving;
- (void)unregisterObserver:(id)a0;
- (void)registerObserver:(id)a0;
- (void)registerObserver:(id)a0 queue:(id)a1;
- (void)_queue_notifyObservers;
- (id)isWatchAppInstalledWithError:(id *)a0;

@end
