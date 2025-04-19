@class NSMutableDictionary;

@interface CIMAggregateStatistic : NSObject

@property float candidateLengthStatisticAverage;
@property unsigned long long candidateLengthStatisticMaximum;
@property unsigned long long candidateLengthStatisticTotal;
@property unsigned long long candidateSelectedStatisticTotal;
@property unsigned long long partialCandidateSelectedStatisticTotal;
@property unsigned long long latinScriptCandidateSelectedStatisticTotal;
@property (retain) NSMutableDictionary *selectionMethodAggregates;

+ (id)aggregateStatistic;

- (id)init;
- (void).cxx_destruct;
- (void)addDataPointForCandidate:(id)a0 partial:(BOOL)a1 selectionMethod:(id)a2;

@end
