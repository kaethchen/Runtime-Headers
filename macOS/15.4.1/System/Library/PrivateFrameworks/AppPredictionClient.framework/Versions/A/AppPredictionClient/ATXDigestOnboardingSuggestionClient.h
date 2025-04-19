@class NSTimer, NSHashTable, NSObject, NSUserDefaults;
@protocol OS_dispatch_queue;

@interface ATXDigestOnboardingSuggestionClient : NSObject {
    NSHashTable *_observers;
    NSUserDefaults *_userDefaults;
    NSObject<OS_dispatch_queue> *_queue;
    NSTimer *_trigger;
    BOOL _hasRegisteredKVO;
}

+ (id)sharedInstance;
+ (void)changeNumPreviousDaysToCheckForNotificationProblemToNumDays:(unsigned long long)a0;
+ (void)removeRandomizedSelectionForDigestOnboardingSuggestion;
+ (void)resetDigestOnboardingSuggestionsAtHour:(id)a0 minute:(id)a1;
+ (void)resetRandomizedSelectionForDigestOnboardingSuggestion;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)registerObserver:(id)a0;
- (void)_handleLocaleChange;
- (void)_invalidateTriggerOnMainQueue;
- (id /* block */)_notificationStreamFilterBlock;
- (void)_registerForKVOChangesOnMainQueue;
- (void)_registerForLocaleChangeOnMainQueue;
- (void)_registerForOnboardingSuggestionOnMainQueueWithThresholdForShowingDigestOnboardingSuggestionToSeedUsers:(double)a0 thresholdForShowingDigestOnboardingSuggestion:(double)a1;
- (void)_registerForTriggerOnMainQueueAtHour:(long long)a0 minute:(long long)a1;
- (void)_setProbabilityOfShowingDigestOnboardingToUser;
- (void)_suggestDigestOnboardingIfApplicableOnMainQueue;
- (void)_suggestDigestOnboardingIfApplicableOnMainQueueGivenNumberOfActiveNotifications:(unsigned long long)a0 numberOfUniqueBundleIds:(unsigned long long)a1 minActive:(unsigned long long)a2 minUnique:(unsigned long long)a3;
- (void)_unregisterForKVOChangesOnMainQueue;
- (void)_unregisterForLocaleChangeOnMainQueue;
- (void)averageNumberOfNotifications:(id /* block */)a0;
- (void)clientDidRejectOnboardingSuggestion;
- (BOOL)hasNotificationProblemForPreviousNumDays:(long long)a0;
- (id)notificationStreamPublisherForStartDate:(id)a0;
- (void)registerForOnboardingSuggestions;
- (void)unregisterForOnboardingSuggestions;
- (void)userAcceptedDigestOnboardingSuggestion:(id)a0;

@end
