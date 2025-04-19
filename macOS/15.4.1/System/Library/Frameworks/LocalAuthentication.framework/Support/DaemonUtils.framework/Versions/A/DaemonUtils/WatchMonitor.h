@class NSHashTable, NSDate, NSObject, SFApproveDiscovery;
@protocol OS_dispatch_queue;

@interface WatchMonitor : NSObject {
    NSHashTable *_observers;
}

@property (retain) SFApproveDiscovery *approveDiscovery;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSDate *lastActivation;
@property (readonly, nonatomic) BOOL deviceAvailable;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)start;
- (void)_notifyObservers;
- (void)unregisterObserver:(id)a0;
- (void)registerObserver:(id)a0;
- (void)_restartWithMinReactivationDelay:(double)a0;

@end
