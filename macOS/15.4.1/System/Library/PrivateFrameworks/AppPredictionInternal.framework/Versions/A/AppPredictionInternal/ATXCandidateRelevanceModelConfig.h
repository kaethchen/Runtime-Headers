@class NSString, NSSet, ATXProactiveSuggestionClientModel, NSArray, NSObject, NSDictionary;
@protocol ATXCandidateRelevanceModelTrainingPlanProtocol, ATXCandidateRelevanceModelDataStoreProtocol;

@interface ATXCandidateRelevanceModelConfig : NSObject {
    NSDictionary *_parameters;
}

@property (readonly, nonatomic) NSString *abGroupIdentifier;
@property (retain, nonatomic) NSSet *installedAppsKnownToSpringBoard;
@property (retain, nonatomic) NSObject<ATXCandidateRelevanceModelTrainingPlanProtocol> *modelTrainingPlan;
@property (retain, nonatomic) id<ATXCandidateRelevanceModelDataStoreProtocol> datastore;
@property (retain, nonatomic) ATXProactiveSuggestionClientModel *clientModel;
@property (readonly, nonatomic) NSArray *featurizers;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEnabled;
- (BOOL)candidateIsStillValidToSuggest:(id)a0;
- (id)candidatePublisherFromStartTime:(double)a0;
- (float)dataHarvestingSamplingRate;
- (id)datasetGenerator;
- (id)featurizersFromConfigPlist;
- (id)heuristicSuggestionsForContext:(id)a0 currentSuggestionExecutableIds:(id)a1;
- (id)initWithAppIconState:(id)a0;
- (int)maximumNumberOfTrainedCandidates;
- (int)minimumNumberOfDaysWithPositiveSamplesForCandidate;
- (int)minimumNumberOfDaysWithPositiveSamplesOverall;
- (int)minimumNumberOfDaysWithSamplesForCandidate;
- (int)minimumNumberOfPositiveSamplesForCandidate;
- (int)minimumNumberOfPositiveSamplesOverall;
- (int)minimumNumberOfSamplesForCandidate;
- (id)modelTrainingPlanParameters;
- (id)proactiveSuggestionForCandidate:(id)a0 prediction:(float)a1;
- (BOOL)shouldTrainModelWithCandidateDatasetMetadata:(id)a0;
- (BOOL)shouldTrainModelWithOverallDatasetMetadata:(id)a0;
- (BOOL)shouldTrainModelWithPositiveCandidateDatasetMetadata:(id)a0;

@end
