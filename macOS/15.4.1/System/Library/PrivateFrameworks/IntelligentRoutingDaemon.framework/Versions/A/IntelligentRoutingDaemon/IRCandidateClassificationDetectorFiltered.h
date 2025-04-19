@interface IRCandidateClassificationDetectorFiltered : NSObject

- (BOOL)_isAggressiveFilteredCandidate:(id)a0 withSystemState:(id)a1 Candidates:(id)a2 andDate:(id)a3;
- (BOOL)_isCandidateIndirectlyUsed:(id)a0 withCandidates:(id)a1 andDate:(id)a2;
- (BOOL)_isConservativeFilteredCandidate:(id)a0 withSystemState:(id)a1;
- (void)adjustFilteredParametersForCandidates:(id)a0 withSystemState:(id)a1 andDate:(id)a2;

@end
