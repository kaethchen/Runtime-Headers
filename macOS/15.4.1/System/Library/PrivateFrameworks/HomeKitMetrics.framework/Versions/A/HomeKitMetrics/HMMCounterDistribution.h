@interface HMMCounterDistribution : NSObject {
    void /* unknown type, empty encoding */ distribution;
}

@property (nonatomic, readonly) long long minValue;
@property (nonatomic, readonly) long long maxValue;
@property (nonatomic, readonly) long long valueCount;
@property (nonatomic, readonly) double averageValue;
@property (nonatomic, readonly) double variance;
@property (nonatomic, readonly) double standardDeviation;
@property (nonatomic, readonly) double sumOfValues;
@property (nonatomic, readonly) double sumOfSquares;

- (id)init;

@end
