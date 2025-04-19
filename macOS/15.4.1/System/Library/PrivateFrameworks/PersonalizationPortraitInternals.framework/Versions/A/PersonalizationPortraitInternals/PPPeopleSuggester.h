@class _PASLock, NSObject;
@protocol OS_dispatch_queue;

@interface PPPeopleSuggester : NSObject {
    _PASLock *_lock;
    NSObject<OS_dispatch_queue> *_serialQueueForSweeping;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (double)_cacheEntryAgeThresholdSecondsSince1970;
- (id)_rankedContactIdentifiersMatchingName:(id)a0;
- (void)_sweepCache;
- (id)rankedContactIdentifiers;
- (id)rankedContactIdentifiersMatchingName:(id)a0;

@end
