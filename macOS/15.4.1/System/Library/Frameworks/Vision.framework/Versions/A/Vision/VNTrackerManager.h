@class NSDictionary, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface VNTrackerManager : NSObject {
    NSMutableDictionary *_liveTrackerCounter;
    NSObject<OS_dispatch_queue> *_trackingProcessingQueue;
    NSObject<OS_dispatch_queue> *_trackersCollectionManagementQueue;
    NSDictionary *_liveTrackerCounterLimit;
    NSMutableDictionary *_trackers;
}

+ (id)_trackerClassToNameMapTableObjectForKey:(Class)a0;
+ (id)_trackerTypeToClassDictionary;

- (id)init;
- (void).cxx_destruct;
- (id)_createTracker:(id)a0 type:(id)a1 options:(id)a2 error:(id *)a3;
- (id)_getTracker:(id)a0;
- (long long)_maximumTrackersOfType:(id)a0;
- (void)_releaseTracker_NO_LOCK_DO_NOT_EXECUTE_DIRECTLY:(id)a0;
- (id)_supportedComputeDeviceTypesForTrackerType:(id)a0 options:(id)a1 error:(id *)a2;

@end
