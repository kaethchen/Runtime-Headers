@class NSMutableDictionary, NSMutableSet;

@interface CHMutableStrokeClassificationResult : CHStrokeClassificationResult {
    NSMutableDictionary *_strokeClassificationsByStrokeIdentifier;
    NSMutableDictionary *_scriptClassificationsByStrokeIdentifier;
    NSMutableDictionary *_scriptClassificationRawResultsByStrokeIdentifier;
    NSMutableDictionary *_substrokesByStrokeIdentifier;
    NSMutableDictionary *_midYPositionByStrokeIdentifier;
    NSMutableSet *_nontextCandidates;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithStrokeClassificationsByStrokeIdentifier:(id)a0 scriptClassificationsByStrokeIdentifier:(id)a1 scriptClassificationRawResultsByStrokeIdentifier:(id)a2 substrokesByStrokeIdentifier:(id)a3 midYPositionByStrokeIdentifier:(id)a4 nontextCandidates:(id)a5;
- (id)midYPositionByStrokeIdentifier;
- (id)nontextCandidates;
- (id)scriptClassificationRawResultsByStrokeIdentifier;
- (id)scriptClassificationsByStrokeIdentifier;
- (id)strokeClassificationsByStrokeIdentifier;
- (id)substrokesByStrokeIdentifier;
- (void)updateByAddingClutterStroke:(id)a0;
- (void)updateByAddingNonClutterStroke:(id)a0 withAllStrokes:(id)a1 forceClass:(long long)a2;
- (void)updateByRemovingStrokeIdentifier:(id)a0 withRemovedAndClutterStrokeIDs:(id)a1;
- (void)updateByTransitionedClutterStrokeIdentifier:(id)a0 withRemovedAndClutterStrokeIDs:(id)a1;
- (void)updateMidYPosition:(id)a0 forStrokeIdentifier:(id)a1;
- (void)updateNonTextCandidatesByRemovingSupportFromStrokeIdentifier:(id)a0 skippingCandidatesWithStrokeIdentifier:(id)a1;
- (void)updateNonTextCandidatesSupportFromStroke:(id)a0;

@end
