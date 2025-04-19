@class _PASCFBurstTrie, PPTrialWrapper;
@protocol TRINotificationToken;

@interface PPTopicBlocklist : NSObject {
    _PASCFBurstTrie *_blocklistTrie;
    PPTrialWrapper *_trialWrapper;
    id<TRINotificationToken> _trialToken;
}

+ (id)sharedInstance;

- (void)dealloc;
- (void).cxx_destruct;
- (id)indicesOfBlockedTopicsInRecordArray:(id)a0;
- (id)indicesOfBlockedTopicsInScoredTopicArray:(id)a0;
- (id)initWithTrialWrapper:(id)a0;
- (BOOL)shouldBlock:(id)a0;

@end
