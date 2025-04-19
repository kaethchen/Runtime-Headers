@interface CMContinuityCaptureSynchronizedAudioNetworkTimestamp : NSObject

@property (nonatomic) unsigned long long networkTime;
@property (nonatomic) unsigned long long sampleTime;
@property (nonatomic) unsigned long long networkClockIdentifier;

- (id)description;
- (id)initWithNetworkTime:(unsigned long long)a0 sampleTime:(unsigned long long)a1 networkClockIdentifier:(unsigned long long)a2;

@end
