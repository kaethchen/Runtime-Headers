@class NSDictionary;

@interface BWHistogramStats : BWStats {
    double *_bins;
    unsigned long long *_counts;
    double *_areas;
    unsigned long long _binsCount;
}

@property (readonly, nonatomic) NSDictionary *histogramAsDictionary;
@property (readonly, nonatomic) double estimatedMedian;

- (void)dealloc;
- (BOOL)addDataPointP:(double)a0;
- (void)getEstimatedQuantiles:(double *)a0 n:(int)a1;
- (id)initWithBins:(id)a0;

@end
