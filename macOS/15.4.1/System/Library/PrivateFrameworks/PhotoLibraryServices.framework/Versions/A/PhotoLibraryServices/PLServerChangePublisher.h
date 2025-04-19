@class NSString, PFStateCaptureEventLog, PFStateCaptureHandler;

@interface PLServerChangePublisher : NSObject <PFStateCaptureProvider, PLChangePublisher> {
    _Atomic unsigned long long _postCount;
    _Atomic BOOL _hasPendingWatchNotification;
    _Atomic BOOL _suppressWatchNotification;
    PFStateCaptureEventLog *_eventLog;
    PFStateCaptureHandler *_stateHandler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)addEvent;
- (id)stateCaptureDictionary;
- (void)unpauseLaunchEventNotifications;
- (void)_postChangeHubNotification;
- (void)_postWatchUpdateNotification;
- (void)_postWatchUpdateNotificationIfNotPaused;
- (void)_postWatchUpdateNotificationIfPending;
- (void)distributeChangeEvent:(id)a0 debugEvent:(id)a1 transaction:(id)a2;
- (void)pauseLaunchEventNotifications;
- (id)publishChangeEvent:(id)a0 delayedSaveActionsDetail:(id)a1 debugEvent:(id)a2 transaction:(id)a3;

@end
