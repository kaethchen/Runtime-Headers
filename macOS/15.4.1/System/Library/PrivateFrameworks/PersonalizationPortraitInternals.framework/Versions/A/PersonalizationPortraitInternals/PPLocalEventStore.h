@class _PASLock, _PASCoalescingTimer, PPEventCache, PPEventStorage, PPTrialWrapper, _PASNotificationToken;

@interface PPLocalEventStore : NSObject <PPFeedbackAccepting> {
    PPEventCache *_eventCache;
    PPEventStorage *_storage;
    _PASNotificationToken *_assetUpdateNotificationToken;
    PPTrialWrapper *_trialWrapper;
    _PASLock *_lock;
    _PASCoalescingTimer *_bufferedChanges;
}

+ (id)defaultStore;

- (id)init;
- (void).cxx_destruct;
- (void)clearCaches;
- (void)registerFeedback:(id)a0 completion:(id /* block */)a1;
- (id)eventWithIdentifier:(id)a0;
- (id)eventWithExternalID:(id)a0;
- (BOOL)iterEventNameRecordsForClient:(id)a0 error:(id *)a1 block:(id /* block */)a2;
- (id)eventHighlightsFrom:(id)a0 to:(id)a1 options:(int)a2;
- (BOOL)attemptToPurgeImmediately;
- (id)customObjectForKey:(id)a0 eventIdentifier:(id)a1;
- (void)enumerateEventsFromEKObjectIDs:(id)a0 expandingRecurrencesInRange:(id)a1 usingBlock:(id /* block */)a2;
- (id)eventNameRecordsForClient:(id)a0 error:(id *)a1;
- (id)eventsFromDate:(id)a0 toDate:(id)a1;
- (id)initWithTrialWrapper:(id)a0 eventStorage:(id)a1;
- (id)nlEventsFromDate:(id)a0 toDate:(id)a1;
- (id)resolveEventNameRecordChanges:(id)a0 client:(id)a1 error:(id *)a2;
- (void)runBlockWithPurgerDisabled:(id /* block */)a0;
- (id)scoredEventsWithQuery:(id)a0;

@end
