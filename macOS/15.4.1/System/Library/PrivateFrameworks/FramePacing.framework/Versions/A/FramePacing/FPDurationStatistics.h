@interface FPDurationStatistics : NSObject

@property (nonatomic) double totalDurationSecSquared;
@property (readonly, nonatomic) double internalMinSec;
@property (readonly, nonatomic) unsigned int count;
@property (readonly, nonatomic) double minSec;
@property (readonly, nonatomic) double maxSec;
@property (readonly, nonatomic) double averageSec;
@property (readonly, nonatomic) double stddevSec;
@property (nonatomic) double totalDurationSec;
@property (readonly, nonatomic) double minNs;
@property (readonly, nonatomic) double maxNs;
@property (readonly, nonatomic) double averageNs;
@property (readonly, nonatomic) double stddevNs;
@property (readonly, nonatomic) double totalDurationNs;
@property (readonly, nonatomic) double minMs;
@property (readonly, nonatomic) double maxMs;
@property (readonly, nonatomic) double averageMs;
@property (readonly, nonatomic) double stddevMs;
@property (readonly, nonatomic) double totalDurationMs;

- (id)init;
- (void)reset;
- (void)addDurationSec:(double)a0;

@end
