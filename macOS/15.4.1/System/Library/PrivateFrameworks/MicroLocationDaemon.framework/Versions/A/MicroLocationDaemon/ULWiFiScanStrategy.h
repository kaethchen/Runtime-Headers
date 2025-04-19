@class NSArray;

@interface ULWiFiScanStrategy : NSObject <NSCopying>

@property (retain, nonatomic) NSArray *channels;
@property (nonatomic) unsigned long long scanType;
@property (nonatomic) unsigned long long numberOfScans;
@property (nonatomic) unsigned long long scanIterations;
@property (nonatomic) unsigned long long restTimeInMilliSeconds;
@property (nonatomic) unsigned long long dwellTimeMilliSeconds;
@property (nonatomic) unsigned long long acceptableCacheAge;
@property (nonatomic) unsigned long long maximumAge;
@property (nonatomic) BOOL isLowPriority;
@property (nonatomic) BOOL isLowLatency;
@property (nonatomic) BOOL doAbortOngoingScan;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)decrementScanIterationsOnWiFiScanComplete;
- (id)initWithChannels:(id)a0 scanType:(unsigned long long)a1 numberOfScans:(unsigned long long)a2 scanIterations:(unsigned long long)a3 restTime:(unsigned long long)a4 dwellTime:(unsigned long long)a5 acceptableCacheAge:(unsigned long long)a6 maximumAge:(unsigned long long)a7 isLowPriority:(BOOL)a8 isLowLatency:(BOOL)a9 doAbortOngoingScan:(BOOL)a10;

@end
