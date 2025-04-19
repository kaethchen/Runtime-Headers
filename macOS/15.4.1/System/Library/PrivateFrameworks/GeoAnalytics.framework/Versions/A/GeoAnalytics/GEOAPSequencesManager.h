@class NSArray, NSObject;
@protocol OS_dispatch_queue;

@interface GEOAPSequencesManager : NSObject {
    NSArray *_sequences;
    NSObject<OS_dispatch_queue> *_serialQ;
}

- (id)init;
- (void).cxx_destruct;
- (id)searchWinSequence;
- (id)thirtySecondDurationEngagementSequence;
- (id)threeSecondDurationEngagementSequence;

@end
