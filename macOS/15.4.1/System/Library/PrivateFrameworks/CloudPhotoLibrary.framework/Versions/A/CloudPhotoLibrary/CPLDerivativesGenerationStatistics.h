@class CPLResource;

@interface CPLDerivativesGenerationStatistics : NSObject {
    double _startTime;
    double _endTime;
}

@property (readonly, nonatomic) CPLResource *sourceResource;
@property (readonly, nonatomic) double generationDuration;

- (void).cxx_destruct;
- (void)didEndGeneratingDerivatives;
- (id)initWithSourceResource:(id)a0;

@end
