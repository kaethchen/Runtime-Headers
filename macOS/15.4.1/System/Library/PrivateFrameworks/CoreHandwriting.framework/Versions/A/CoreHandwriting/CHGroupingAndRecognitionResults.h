@class NSSet, NSDictionary, NSMutableDictionary, CHStrokeGroupingResult, CHStrokeClassificationResult, NSMutableSet;

@interface CHGroupingAndRecognitionResults : NSObject {
    NSMutableDictionary *_intermediateCachedRecognitionResults;
    NSMutableDictionary *_refreshedCachedResultsFromPostProcessing;
    CHStrokeGroupingResult *_strokeGroupingResult;
    NSDictionary *_recognitionResultsByGroupID;
    CHStrokeClassificationResult *_strokeClassificationResult;
    CHStrokeGroupingResult *_previousProcessedStrokeGroupingResult;
    NSDictionary *_previousProcessedRecognizedResultsByGroupID;
    NSMutableSet *__intermediateStrokeGroups;
    NSMutableDictionary *__intermediateRecognitionResults;
}

@property (readonly, nonatomic) CHStrokeGroupingResult *strokeGroupingResult;
@property (readonly, nonatomic) NSDictionary *recognitionResultsByGroupID;
@property (readonly, nonatomic) CHStrokeClassificationResult *strokeClassificationResult;
@property (readonly, nonatomic) CHStrokeGroupingResult *previousProcessedStrokeGroupingResult;
@property (readonly, nonatomic) NSDictionary *previousProcessedRecognizedResultsByGroupID;
@property (readonly, nonatomic) NSSet *strokeGroupReplacements;
@property (readonly, nonatomic) NSDictionary *cachedRecognitionResultsFromPostProcessing;

- (void).cxx_destruct;
- (id)initWithGroupingResult:(id)a0 recognitionResultsByGroupID:(id)a1 strokeClassificationResult:(id)a2 previousProcessedStrokeGroupingResult:(id)a3 previousProcessedRecognizedResultsByGroupID:(id)a4 strokeGroupReplacements:(id)a5 cachedRecognitionResultsFromPostProcessing:(id)a6;
- (id)refreshedCachedResultsFromPostProcessing;

@end
