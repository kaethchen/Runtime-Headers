@interface PRGetPowerStatsResponse : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned int sleepDuration;
@property (readonly, nonatomic) unsigned int wakeDuration;
@property (readonly, nonatomic) unsigned int singleAntennaSearchDuration;
@property (readonly, nonatomic) unsigned int dualAntennaSearchDuration;
@property (readonly, nonatomic) unsigned int singleChainRxPacketDuration;
@property (readonly, nonatomic) unsigned int dualChainRxPacketDuration;
@property (readonly, nonatomic) unsigned int tripleChainRxPacketDuration;
@property (readonly, nonatomic) unsigned int dspProcessingDuration;
@property (readonly, nonatomic) unsigned int txDuration;
@property (readonly, nonatomic) unsigned short numPacketsReceived;
@property (readonly, nonatomic) unsigned short numPacketsTransmitted;
@property (readonly, nonatomic) unsigned int sleepCount;
@property (readonly, nonatomic) unsigned int wakeCount;
@property (readonly, nonatomic) unsigned int pmgrSleepCount;
@property (readonly, nonatomic) unsigned int pmgrDeepSleepCount;
@property (readonly, nonatomic) unsigned int deepSleepDuration;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithGetPowerStatsResponse:(const struct PowerStatsResponse { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned short x9; unsigned short x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; } *)a0;
- (id)initWithSleepDuration:(unsigned int)a0 wakeDuration:(unsigned int)a1 singleAntennaSearchDuration:(unsigned int)a2 dualAntennaSearchDuration:(unsigned int)a3 singleChainRxPacketDuration:(unsigned int)a4 dualChainRxPacketDuration:(unsigned int)a5 tripleChainRxPacketDuration:(unsigned int)a6 dspProcessingDuration:(unsigned int)a7 txDuration:(unsigned int)a8 numPacketsReceived:(unsigned short)a9 numPacketsTransmitted:(unsigned short)a10 sleepCount:(unsigned int)a11 wakeCount:(unsigned int)a12 pmgrSleepCount:(unsigned int)a13 pmgrDeepSleepCount:(unsigned int)a14 deepSleepDuration:(unsigned int)a15;

@end
