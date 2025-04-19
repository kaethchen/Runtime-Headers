@class NSDictionary;

@interface ATXAnchorModelHyperParameters : NSObject {
    NSDictionary *_parameters;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)abGroup;
- (id)anchorsDisabledForHomescreen;
- (long long)candidateClassifierTypeForPhase2;
- (id)enabledAnchors;
- (double)highBlendingConfidenceScoreThreshold;
- (double)idleTimeEndAnchorMinimumSecondsForBeingIdle;
- (id)knownAnchorClasses;
- (double)maxDurationForAnchorModelPredictionInSecondsForPhase3;
- (double)maxSecondsSinceCandidateOccurrenceToConsiderCandidateForPrediction;
- (double)maxTrainingAgeInSecondsToConsiderForRetraining;
- (double)maxValueForParameterKey:(id)a0;
- (double)mediumBlendingConfidenceScoreThreshold;
- (double)minClassConditionalProbabilityForCandidateForPhase1;
- (double)minClassConditionalProbabilityForHighConfidencePredictionForAnchor:(id)a0;
- (double)minClassConditionalProbabilityForMediumConfidencePredictionForAnchor:(id)a0;
- (double)minDurationForAnchorModelPredictionInSecondsForPhase3;
- (long long)minNumUniqueAnchorOccurrencesWithUniqueCandidateOccurrencesForHighConfidencePredictionForAnchor:(id)a0;
- (long long)minNumUniqueAnchorOccurrencesWithUniqueCandidateOccurrencesForMediumConfidencePredictionForAnchor:(id)a0;
- (double)minPosteriorProbabilityForCandidateForPhase1;
- (double)minPosteriorProbabilityForHighConfidencePredictionForAnchor:(id)a0;
- (double)minPosteriorProbabilityForMediumConfidencePredictionForAnchor:(id)a0;
- (double)minPosteriorProbabilityToIgnoreClassConditionalProbabilityForCandidateForPhase1;
- (long long)minUniqueAnchorOccurrencesForAnchorForPhase1;
- (double)minValueForParameterKey:(id)a0;
- (double)modelWeightForParameterKey:(id)a0;
- (double)percentileForEndOffsetFromAnchorForPhase3;
- (double)percentileForStartOffsetFromAnchorForPhase3;
- (double)ratioForLeafNodeDecision;
- (double)secondsBeforeHistoricalStartDateToPredictCandidate;

@end
