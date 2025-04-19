@class IMKCandidateList, NSObject;
@protocol OS_dispatch_group;

@interface IMKFutureCandidateList : IMKCandidateList {
    BOOL _hasCompleted;
    NSObject<OS_dispatch_group> *_dispatchGroup;
    id /* block */ _evaluation;
    IMKCandidateList *_cachedCandidates;
    double _timeout;
}

@property (readonly, nonatomic) long long evaluationStrategy;

+ (id)candidateListWithTimeout:(double)a0 evaluation:(id /* block */)a1;
+ (id)candidateListWithTimeout:(double)a0 evaluationStrategy:(long long)a1 evaluation:(id /* block */)a2;

- (void).cxx_destruct;
- (id)candidates;
- (void)_runBlock;
- (BOOL)hasCandidate;
- (void)_recieveCandidates:(id)a0;
- (id)initWithTimeout:(double)a0 evaluation:(id /* block */)a1;
- (id)initWithTimeout:(double)a0 evaluationStrategy:(long long)a1 evaluation:(id /* block */)a2;

@end
