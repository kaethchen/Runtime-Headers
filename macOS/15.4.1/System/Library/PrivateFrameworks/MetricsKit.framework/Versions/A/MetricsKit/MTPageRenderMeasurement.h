@class NSString, NSArray;

@interface MTPageRenderMeasurement : MTPerfBaseMeasurement <MTPageRenderMeasurementData>

@property (readonly, copy) NSString *pageId;
@property (readonly, copy) NSString *pageType;
@property (readonly, copy) NSString *pageContext;
@property (readonly, copy) NSArray *eventData;
@property (readonly, copy) NSArray *additionalFields;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy) NSString *pageId;
@property (copy) NSString *pageType;
@property (copy) NSString *pageContext;

- (void).cxx_destruct;
- (void)mark:(id)a0;
- (void)setXpSamplingForced:(BOOL)a0;
- (void)setXpSamplingPercentageUsers:(double)a0;
- (void)setXpSessionDuration:(unsigned long long)a0;
- (void)setAppLaunch:(BOOL)a0;
- (id)initWithMeasurementTransformer:(id)a0 pageId:(id)a1 pageType:(id)a2 pageContext:(id)a3 eventData:(id)a4;
- (void)mark:(id)a0 date:(id)a1;
- (void)mark:(id)a0 time:(long long)a1;
- (void)setLaunchCorrelationKey:(id)a0;
- (void)setPreloadStatus:(id)a0;
- (void)setPrimaryDataResponseCached:(BOOL)a0;

@end
