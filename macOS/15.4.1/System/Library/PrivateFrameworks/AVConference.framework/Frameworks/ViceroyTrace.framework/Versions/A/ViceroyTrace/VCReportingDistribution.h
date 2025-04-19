@class NSDictionary, VCHistogram;

@interface VCReportingDistribution : NSObject <VCAggregatorDataCollector> {
    unsigned int _histogramIncrementFactor;
}

@property (readonly) NSDictionary *keys;
@property (readonly) double sum;
@property (readonly) double count;
@property (readonly) double min;
@property (readonly) double max;
@property (readonly) VCHistogram *histogram;

- (void)dealloc;
- (void)accumulate:(id)a0;
- (id)initWithHistogramType:(int)a0 reportingKeys:(id)a1;
- (id)initWithHistogramType:(int)a0 reportingKeys:(id)a1 histogramIncrementFactor:(unsigned int)a2;
- (id)initWithKeys:(id)a0 histogramClass:(Class)a1 histogramType:(int)a2;
- (id)initWithSignedHistogramType:(int)a0 reportingKeys:(id)a1;
- (id)initWithSignedHistogramType:(int)a0 reportingKeys:(id)a1 histogramIncrementFactor:(unsigned int)a2;
- (void)updateReport:(id)a0;
- (void)updateReport:(id)a0 withStreamGroup:(id)a1;
- (void)updateWithPayload:(id)a0;

@end
