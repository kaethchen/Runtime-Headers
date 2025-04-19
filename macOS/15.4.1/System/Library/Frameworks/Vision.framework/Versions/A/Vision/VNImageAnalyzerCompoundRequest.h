@class VNImageAnalyzerCompoundRequestGroupingConfiguration;

@interface VNImageAnalyzerCompoundRequest : VNCompoundRequest {
    VNImageAnalyzerCompoundRequestGroupingConfiguration *_groupingConfiguration;
}

@property (readonly, nonatomic) unsigned long long networkModel;

+ (void)_evaluateOriginalVN1JC7R3k4455fKQz0dY1VhQ:(id)a0 configurations:(id)a1;
+ (void)_evaluateOriginalVN5kJNH3eYuyaLxNpZr5Z7zi:(id)a0 configurations:(id)a1;
+ (void)_evaluateOriginalVN6Mb1ME89lyW3HpahkEygIG:(id)a0 configurations:(id)a1;
+ (void)_evaluateOriginalVNClassifyCityNatureImageRequest:(id)a0 configurations:(id)a1;
+ (void)_evaluateOriginalVNClassifyImageAestheticsRequest:(id)a0 configurations:(id)a1;
+ (void)_evaluateOriginalVNClassifyImageRequest:(id)a0 configurations:(id)a1;
+ (void)_evaluateOriginalVNClassifyJunkImageRequest:(id)a0 configurations:(id)a1;
+ (void)_evaluateOriginalVNClassifyPotentialLandmarkRequest:(id)a0 configurations:(id)a1;
+ (void)_evaluateOriginalVNCreateImageFingerprintsRequest:(id)a0 configurations:(id)a1;
+ (void)_evaluateOriginalVNCreateSceneprintRequest:(id)a0 configurations:(id)a1;
+ (void)_evaluateOriginalVNGenerateAttentionBasedSaliencyImageRequest:(id)a0 configurations:(id)a1;
+ (void)_evaluateOriginalVNGenerateImageFeaturePrintRequest:(id)a0 configurations:(id)a1;
+ (void)_evaluateOriginalVNGenerateObjectnessBasedSaliencyImageRequest:(id)a0 configurations:(id)a1;
+ (void)_evaluateOriginalVNRecognizeObjectsRequest:(id)a0 configurations:(id)a1;
+ (void)_evaluateOriginalVNSceneClassificationRequest:(id)a0 configurations:(id)a1;
+ (void)_evaluateOriginalVNVYvzEtX1JlUdu8xx5qhDI:(id)a0 configurations:(id)a1;
+ (id)compoundRequestsForOriginalRequests:(id)a0 withPerformingContext:(id)a1 error:(id *)a2;
+ (Class)configurationClass;
+ (id)publicRevisionsSet;

- (void).cxx_destruct;
- (BOOL)allowsCachingOfResults;
- (id)applicableDetectorTypeForRevision:(unsigned long long)a0 error:(id *)a1;
- (id)initWithDetectorType:(id)a0 groupingConfiguration:(id)a1;
- (BOOL)internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
- (id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)a0 session:(id)a1;
- (BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)a0;

@end
