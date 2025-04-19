@class PFStateCaptureEventLog;

@interface PHChangeHandlingDebugger : NSObject {
    unsigned long long _maxPreviousEvents;
    PFStateCaptureEventLog *_eventLog;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _activeLock;
    BOOL _activeLock_isActive;
    double _activeLock_isActiveTimestamp;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _pendingLock;
    BOOL _pendingLock_isChangeProcessingPending;
    double _pendingLock_isChangeProcessingPendingTimestamp;
}

- (id)init;
- (void).cxx_destruct;
- (id)stateCaptureDictionary;
- (id)beginProcessPendingChanges;
- (id)beginPublishCloudStatusChange;
- (void)changeHandlingActiveStateDidChange:(BOOL)a0;
- (id)formattedStringFromTimestamp:(double)a0;
- (id)initWithMaxPreviousEvents:(unsigned long long)a0;
- (void)processPendingChangesStateDidChange:(BOOL)a0;

@end
