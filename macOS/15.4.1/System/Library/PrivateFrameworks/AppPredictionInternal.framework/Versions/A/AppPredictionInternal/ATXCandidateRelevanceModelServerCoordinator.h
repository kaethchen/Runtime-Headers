@class NSArray, ATXCoreDuetContextHelper, ATXTimeBucketedRateLimiter, NSObject, NSUserDefaults;
@protocol OS_dispatch_queue;

@interface ATXCandidateRelevanceModelServerCoordinator : NSObject {
    ATXCoreDuetContextHelper *_contextHelper;
    NSObject<OS_dispatch_queue> *_updateQueue;
    NSArray *_configs;
    NSUserDefaults *_defaults;
    ATXTimeBucketedRateLimiter *_rateLimiter;
}

+ (id)sharedInstance;
+ (id)userDefaultsKeyForLastCacheUpdateDateForConfig:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)start;
- (void)_syncForTests;
- (id /* block */)callbackForAnchor:(id)a0;
- (id)currentDuetEventForAnchor:(id)a0;
- (id)exitNotificationIdentifierForAnchor:(id)a0;
- (void)handleAnchorNotificationForAnchor:(id)a0;
- (void)handleLOIEntranceNotification;
- (void)handleLOIExitNotification;
- (void)handleMicrolocationVisitNotification;
- (id)initWithContextHelper:(id)a0 configs:(id)a1 defaults:(id)a2;
- (id)lastCacheUpdateDateForConfig:(id)a0;
- (id)notificationIdentifierForAnchor:(id)a0;
- (void)registerAnchorEventNotificationsForAnchor:(id)a0;
- (void)registerForSupportedAnchorNotificatons;
- (void)sendSuggestionsToBlendingForConfig:(id)a0;
- (void)sendSuggestionsToBlendingForEachConfigIfCacheIsOlderThan:(double)a0;
- (void)sendSuggestionsToBlendingForEachConfigImmediately;
- (void)setCacheUpdateDate:(id)a0 forConfig:(id)a1;
- (id)supportedAnchorsForNotifications;
- (void)unregisterAnchorEventListenerForAnchor:(id)a0;
- (void)unregisterAnchorEventListeners;

@end
