@class VCHistogram;

@interface VCReportingDeltaDistribution : VCReportingDistribution <VCAggregatorDataCollector>

@property (readonly) double absoluteSum;
@property (readonly) double absoluteMax;
@property (readonly) double absoluteMin;
@property (readonly) VCHistogram *deltaHistogram;

- (void)accumulate:(id)a0;
- (id)initWithSignedHistogramType:(int)a0 reportingKeys:(id)a1;
- (void)updateReport:(id)a0;
- (void)updateReport:(id)a0 withStreamGroup:(id)a1;
- (void)updateWithPayload:(id)a0;

@end
