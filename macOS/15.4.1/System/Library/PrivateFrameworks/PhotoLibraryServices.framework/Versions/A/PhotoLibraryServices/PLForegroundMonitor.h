@class NSArray, NSSet, NSMutableSet, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface PLForegroundMonitor : NSObject {
    NSMutableSet *_foregroundBundleIDs;
    NSObject<OS_dispatch_queue> *_queue;
    NSSet *_monitoredBundleIdentifiers;
    NSMutableArray *_clients;
    BOOL _isObservingPhotosApp;
}

@property (class, readonly) PLForegroundMonitor *sharedInstance;
@property (class, readonly) NSArray *bundleIdentifiersToMonitorForSystemLibrary;

- (id)init;
- (void).cxx_destruct;
- (void)_stopMonitoring;
- (void)_updateMonitoring;
- (void)stopMonitoring:(id)a0;
- (void)_applicationChangeToBG:(id)a0;
- (void)_applicationChangeToFG:(id)a0;
- (void)_locked_applicationDidMoveToBackground:(id)a0;
- (void)_locked_applicationDidMoveToForeground:(id)a0;
- (void)_startMonitoringBundleIdentifiers:(id)a0;
- (id)startMonitoringBundleIdentifiers:(id)a0 block:(id /* block */)a1;

@end
