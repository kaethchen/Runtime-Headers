@class NSString;

@interface SSCAMLDurationStats : NSObject <SignpostJSONRepresentable>

@property (readonly, nonatomic) unsigned long long durationCount;
@property (readonly, nonatomic) double averageMs;
@property (readonly, nonatomic) double totalMs;
@property (readonly, nonatomic) double minMs;
@property (readonly, nonatomic) double maxMs;
@property (readonly, nonatomic) double stddevMs;
@property (readonly, nonatomic) double averageSec;
@property (readonly, nonatomic) double totalSec;
@property (readonly, nonatomic) double minSec;
@property (readonly, nonatomic) double maxSec;
@property (readonly, nonatomic) double stddevSec;
@property (readonly, nonatomic) double averageNs;
@property (readonly, nonatomic) double totalNs;
@property (readonly, nonatomic) double minNs;
@property (readonly, nonatomic) double maxNs;
@property (readonly, nonatomic) double stddevNs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)dictionaryRepresentation;
- (id)jsonDescription:(unsigned long long)a0;
- (id)initWithCount:(unsigned long long)a0 totalMs:(double)a1 minMs:(double)a2 maxMs:(double)a3 stddevMs:(double)a4;
- (id)initWithMeasuredValue:(id)a0;

@end
