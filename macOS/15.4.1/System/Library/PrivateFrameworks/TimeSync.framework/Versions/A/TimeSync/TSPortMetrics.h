@interface TSPortMetrics : NSObject

@property (readonly, nonatomic) unsigned short portNumber;
@property (readonly, nonatomic) unsigned long long syncTimeouts;
@property (readonly, nonatomic) unsigned long long filterResetsDroppedLimit;
@property (readonly, nonatomic) unsigned long long filterResetsOutOfBounds;
@property (readonly, nonatomic) unsigned long long meanDelayTime;
@property (readonly, nonatomic) unsigned long long droppedMeasurements;
@property (readonly, nonatomic) unsigned long long discardedPpmLimitMeasurements;
@property (readonly, nonatomic) unsigned long long discardedDelayLimitExceededMeasurements;
@property (readonly, nonatomic) unsigned long long discardedOutOfBoundsMeasurements;
@property (readonly, nonatomic) unsigned long long discardedTimestampsOutOfOrderMeasurements;
@property (readonly, nonatomic) unsigned long long successfulMeasurements;
@property (readonly, nonatomic) unsigned long long totalMeasurements;
@property (readonly, nonatomic) unsigned long long droppedPercentage;
@property (readonly, nonatomic) unsigned long long discardedPpmLimitPercentage;
@property (readonly, nonatomic) unsigned long long discardedDelayLimitExceededPercentage;
@property (readonly, nonatomic) unsigned long long discardedOutOfBoundsPercentage;
@property (readonly, nonatomic) unsigned long long discardedTimestampsOutOfOrderPercentage;
@property (readonly, nonatomic) unsigned long long successfulPercentage;

- (id)toDaemonMetrics;
- (id)initWithDaemonMetrics:(id)a0;
- (id)initWithInterfaceMetrics:(struct { unsigned short x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; unsigned long long x15; unsigned long long x16; unsigned long long x17; } *)a0;
- (void)printMetrics;

@end
