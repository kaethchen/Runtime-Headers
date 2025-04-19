@class SEMSpanMatchPolicy;

@interface SEMSpanMatchResultInterpreter : NSObject {
    BOOL _useSensitiveLogging;
    BOOL _useMediaThresholdFiltering;
}

@property (readonly, nonatomic) SEMSpanMatchPolicy *fuzzyPolicy;
@property (readonly, nonatomic) SEMSpanMatchPolicy *exactPolicy;
@property (readonly, nonatomic) SEMSpanMatchPolicy *fuzzyWithAliasPolicy;
@property (readonly, nonatomic) SEMSpanMatchPolicy *exactWithAliasPolicy;
@property (readonly, nonatomic) SEMSpanMatchPolicy *fuzzyWithAbsoluteThresholdPolicy;

- (id)init;
- (void).cxx_destruct;
- (void)_addScoredMatch:(id)a0 toSortedArray:(id)a1;
- (id)_applyRegionalSpanRankingToSortedGroupMatches:(id)a0 regionalThresholdScalar:(float)a1 globalThresholdScalar:(float)a2 maximalScore:(float)a3;
- (BOOL)_checkEligibilityOfSpanMatch:(id)a0 allowPartialMatch:(BOOL)a1 allowApproxMatch:(BOOL)a2 allowAliasMatch:(BOOL)a3 query:(id)a4;
- (id)_filterRankAndThresholdCandidates:(id)a0 ofQuery:(id)a1 withPolicy:(id)a2;
- (id)_groupKeyForCandidate:(id)a0;
- (id)_groupKeyForCascadeCandidate:(id)a0;
- (id)_rankerPolicyForGroupKey:(id)a0;
- (float)_scoreSpanMatch:(id)a0 policy:(id)a1;
- (id)_sortCandidates:(id)a0;
- (id)interpretSpanMatchResults:(id)a0 ofQuery:(id)a1;

@end
