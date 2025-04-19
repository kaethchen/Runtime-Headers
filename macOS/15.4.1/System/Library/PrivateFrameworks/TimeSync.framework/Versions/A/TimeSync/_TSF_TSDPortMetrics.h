@class _TSF_TSDgPTPPort;

@interface _TSF_TSDPortMetrics : NSObject {
    _TSF_TSDgPTPPort *_port;
}

@property (nonatomic) unsigned short portNumber;
@property (nonatomic) unsigned long long syncTimeouts;
@property (nonatomic) unsigned long long filterResetsDroppedLimit;
@property (nonatomic) unsigned long long filterResetsOutOfBounds;
@property (nonatomic) unsigned long long meanDelayTime;
@property (nonatomic) unsigned long long droppedMeasurements;
@property (nonatomic) unsigned long long discardedPpmLimitMeasurements;
@property (nonatomic) unsigned long long discardedDelayLimitExceededMeasurements;
@property (nonatomic) unsigned long long discardedOutOfBoundsMeasurements;
@property (nonatomic) unsigned long long discardedTimestampsOutOfOrderMeasurements;
@property (nonatomic) unsigned long long successfulMeasurements;
@property (nonatomic) unsigned long long totalMeasurements;
@property (nonatomic) unsigned long long droppedPercentage;
@property (nonatomic) unsigned long long discardedPpmLimitPercentage;
@property (nonatomic) unsigned long long discardedDelayLimitExceededPercentage;
@property (nonatomic) unsigned long long discardedOutOfBoundsPercentage;
@property (nonatomic) unsigned long long discardedTimestampsOutOfOrderPercentage;
@property (nonatomic) unsigned long long successfulPercentage;

- (void).cxx_destruct;
- (id)initWithPort:(id)a0;
- (void)calculatePercentages;
- (id)getDelta:(id)a0;

@end
