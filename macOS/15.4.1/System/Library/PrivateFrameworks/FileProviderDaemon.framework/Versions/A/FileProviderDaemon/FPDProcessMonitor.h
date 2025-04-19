@class NSCountedSet, NSMutableDictionary, NSSet, NSMutableSet, NSObject;
@protocol OS_dispatch_queue, FPDProcessMonitorDelegate;

@interface FPDProcessMonitor : NSObject {
    NSMutableDictionary *_notificationsByPid;
    NSMutableDictionary *_bundleIDForPID;
    NSCountedSet *_bundleIDs;
    NSCountedSet *_pids;
    NSMutableSet *_foregroundBundleIDs;
    NSSet *_excludedBundleIDs;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *notificationQueue;
@property (weak) id<FPDProcessMonitorDelegate> delegate;

- (id)description;
- (void).cxx_destruct;
- (void)invalidate;
- (void)_invalidate;
- (id)prettyDescription;
- (void)process:(int)a0 didBecomeForeground:(BOOL)a1;
- (void)_createMonitor;
- (BOOL)isForeground;
- (id)_bundleIDForPID:(int)a0;
- (void)_addPIDToObserve:(int)a0;
- (void)_removePIDToObserve:(int)a0;
- (void)_startMonitoringAndSendInitialNotificationForPID:(int)a0;
- (void)_stopMonitoringPID:(int)a0;
- (void)addPIDToObserve:(int)a0;
- (void)addPIDToObserveSync:(int)a0;
- (id)initWithExcludedBundleIDs:(id)a0;
- (void)removePIDToObserve:(int)a0;

@end
