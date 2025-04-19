@interface ATXIdleTimeEndAnchor : ATXAnchor

+ (BOOL)isActive;
+ (id)longDescription;
+ (id)keyPathForContextStore;
+ (id)predicateForContextStoreRegistration;
+ (long long)anchorType;
+ (id)duetEventsPredicates;
+ (id)fetchAnchorOccurrencesBetweenStartDate:(id)a0 endDate:(id)a1;
+ (id)invalidationPredicateForContextStoreRegistration;
+ (double)minimumSecondsForBeingIdle;
+ (void)registerForNotificationsWithoutUsingContextStoreForObserver:(id)a0 enterSelector:(SEL)a1 exitSelector:(SEL)a2;
+ (id)sampleEvent;
+ (double)secondsOfInfluence;
+ (BOOL)shouldPredicateOnStartDate;
+ (BOOL)shouldProcessContextStoreNotification;
+ (Class)supportedDuetDataProviderClass;
+ (BOOL)usesContextStoreForRealTimeNotifications;

@end
