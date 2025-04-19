@class NSString, _ATXAggregateLogger, _PASLazyPurgeableResult, ATXBBNotificationManager, ATXNotificationsDedupeTracker, ATXModeTimelineManager, ATXNotificationDeliverySuggestionManager, NSObject, NSXPCListener;
@protocol OS_dispatch_queue, _DKKnowledgeSaving, _DKKnowledgeDeleting;

@interface ATXNotificationsLoggingServer : NSObject <ATXNotificationsLoggingProtocol, NSXPCListenerDelegate, UNUserNotificationCenterDelegate> {
    _ATXAggregateLogger *_aggdlogger;
    ATXBBNotificationManager *_bbNotificationManager;
    ATXNotificationsDedupeTracker *_dedupetracker;
    _PASLazyPurgeableResult *_cachedLoggingSources;
    id<_DKKnowledgeSaving, _DKKnowledgeDeleting> _duetstorer;
    NSXPCListener *_listener;
    ATXModeTimelineManager *_modeTimelineManager;
    ATXNotificationDeliverySuggestionManager *_notificationDeliverySuggestionManager;
    NSObject<OS_dispatch_queue> *_donationQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)activeSuggestionsWithReply:(id /* block */)a0;
- (void)logNotificationDeliveryUI:(unsigned long long)a0 notificationUUIDs:(id)a1;
- (void)logNotificationEvent:(long long)a0 notification:(id)a1;
- (void)logNotificationEvent:(long long)a0 notification:(id)a1 reason:(unsigned long long)a2;
- (void)logNotificationEvent:(long long)a0 notification:(id)a1 reason:(unsigned long long)a2 interactionUI:(unsigned long long)a3;
- (void)logNotificationGroupEvent:(long long)a0 eventIdentifier:(id)a1;
- (void)logNotificationGroupEvent:(long long)a0 eventIdentifier:(id)a1 timestamp:(id)a2;
- (void)logRealTimeTuningOutcome:(unsigned long long)a0 withBundleId:(id)a1;
- (void)logSuggestionEvent:(long long)a0 suggestionType:(long long)a1 suggestionIdentifier:(id)a2 timestamp:(id)a3;
- (id)_createPortraitNotificationWithNotificationInterface:(id)a0;
- (void)_donateNotificationToPortraitWithNotificationsInterface:(id)a0;
- (void)_logEventToCoreDuet:(long long)a0 forNotificationId:(id)a1 timestamp:(id)a2;
- (id)duetValueType;
- (id)getDuetMetadataFromNotification:(id)a0 metadata:(id)a1;
- (id)getDuetStream;
- (id)getLockscreenBundleIds;
- (void)getModeTimelineDataFromStartDate:(id)a0 reply:(id /* block */)a1;
- (void)logNotification:(id)a0 withNotificationId:(id)a1 timestamp:(id)a2;
- (void)logNotificationToCoreDuet:(id)a0 withNotificationId:(id)a1 timestamp:(id)a2;
- (void)logNotificationWithMetadata:(id)a0 withNotificationId:(id)a1 timestamp:(id)a2;
- (void)logToCoreDuet:(id)a0 identifier:(id)a1 timestamp:(id)a2;

@end
