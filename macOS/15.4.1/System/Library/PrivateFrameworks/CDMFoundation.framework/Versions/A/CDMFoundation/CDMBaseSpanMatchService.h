@protocol CDMProtoSpanMatcher;

@interface CDMBaseSpanMatchService : CDMDAGBaseService

@property (retain) id<CDMProtoSpanMatcher> spanMatcher;

+ (id)convertToSpanMatchRequest:(id)a0 nlContext:(id)a1;
+ (id)convertToSpanMatchRequests:(id)a0 nlContext:(id)a1;
+ (id)getCDMServiceAssetConfig;
+ (Class)spanMatcherClass;

- (void).cxx_destruct;
- (id)setup:(id)a0;
- (id)handle:(id)a0;
- (id)warmup:(id)a0;
- (id)_handle:(id)a0;
- (id)createErrorSetupResponseCommand:(id)a0;
- (id)handleRequestCommandTypeNames;
- (void)limitNumberOfSpans:(id)a0;
- (id)setupSpanMatcher:(id)a0;
- (BOOL)shouldBeUsedForAsrAlternatives;
- (void)spanizeAsrs:(id)a0 asrSpansMap:(id)a1 topAsrSpans:(id)a2 topAsrSpansFiltered:(id)a3 asrHypotheses:(id)a4;
- (void)spanizeTokenChain:(id)a0 spans:(id)a1 isTopAsr:(BOOL)a2 topAsrSpansFiltered:(id)a3 asrHypothesis:(id)a4;

@end
