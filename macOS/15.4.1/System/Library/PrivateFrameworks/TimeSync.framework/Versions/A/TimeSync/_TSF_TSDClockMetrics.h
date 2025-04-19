@interface _TSF_TSDClockMetrics : NSObject

@property (nonatomic) unsigned long long clockIdentity;
@property (nonatomic) unsigned long long gmChangesCount;
@property (nonatomic) unsigned long long timeToChangeGm;
@property (nonatomic) unsigned long long timeToLock;
@property (nonatomic) unsigned long long coreAudioReanchors;

- (id)getDelta:(id)a0;
- (id)initWithClock:(id)a0;
- (id)initWithInterfaceMetrics:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; } *)a0;

@end
