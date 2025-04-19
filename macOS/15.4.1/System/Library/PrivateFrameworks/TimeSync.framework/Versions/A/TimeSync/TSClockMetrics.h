@interface TSClockMetrics : NSObject

@property (readonly, nonatomic) unsigned long long clockIdentity;
@property (readonly, nonatomic) unsigned long long gmChangesCount;
@property (readonly, nonatomic) unsigned long long timeToChangeGm;
@property (readonly, nonatomic) unsigned long long timeToLock;
@property (readonly, nonatomic) unsigned long long coreAudioReanchors;

- (id)toDaemonMetrics;
- (id)initWithDaemonMetrics:(id)a0;
- (id)initWithInterfaceMetrics:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; } *)a0;
- (void)printMetrics;

@end
