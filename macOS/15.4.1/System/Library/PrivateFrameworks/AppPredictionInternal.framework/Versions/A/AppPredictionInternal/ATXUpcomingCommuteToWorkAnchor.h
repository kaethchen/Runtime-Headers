@interface ATXUpcomingCommuteToWorkAnchor : ATXAnchor

+ (BOOL)isActive;
+ (id)longDescription;
+ (id)keyPathForContextStore;
+ (id)predicateForContextStoreRegistration;
+ (id)anchorOccurenceDateFromDuetEvent:(id)a0;
+ (long long)anchorType;
+ (id)candidateQueryStartDateFromDuetEvent:(id)a0;
+ (id)duetEventsPredicates;
+ (id)fetchAnchorOccurrencesBetweenStartDate:(id)a0 endDate:(id)a1;
+ (id)invalidationPredicateForContextStoreRegistration;
+ (id)sampleEvent;
+ (double)secondsOfInfluence;
+ (BOOL)shouldPredicateOnStartDate;
+ (BOOL)shouldProcessContextStoreNotification;
+ (Class)supportedDuetDataProviderClass;
+ (BOOL)usesContextStoreForRealTimeNotifications;

@end
