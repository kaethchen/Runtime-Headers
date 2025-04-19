@interface AVBMediaClockValue : NSObject

@property (readonly, nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) unsigned long long sampleTime;

- (id)description;
- (id)initWithTimestamp:(unsigned long long)a0 sampleTime:(unsigned long long)a1;

@end
