@class NSArray;

@interface MADVIDocumentRecognitionResult : MADResult

@property (readonly) unsigned long long executionNanoseconds;
@property (readonly) double executionTimeInterval;
@property (readonly, nonatomic) NSArray *observations;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithObservations:(id)a0;

@end
