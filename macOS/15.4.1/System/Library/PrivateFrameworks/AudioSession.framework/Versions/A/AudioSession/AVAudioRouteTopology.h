@class NSString, NSArray, AVAudioHardwareClock;

@interface AVAudioRouteTopology : NSObject <AVAudioRouteDescribing, NSCopying>

@property (copy, nonatomic) NSString *UID;
@property (copy, nonatomic) NSArray *inputStreamTopologies;
@property (copy, nonatomic) NSArray *outputStreamTopologies;
@property (nonatomic) unsigned long long inputPolicy;
@property (nonatomic) unsigned long long outputPolicy;
@property (retain, nonatomic) AVAudioHardwareClock *masterClock;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setName:(id)a0;
- (BOOL)canBeDefaultRoute:(unsigned int)a0;
- (id)initWithName:(id)a0 inputStreams:(id)a1 inputPolicy:(unsigned long long)a2 outputStreams:(id)a3 outputPolicy:(unsigned long long)a4;
- (id)initWithName:(id)a0 stream:(id)a1;
- (id)initWithName:(id)a0 streams:(id)a1 policy:(unsigned long long)a2;
- (id)initWithStreamTopologies:(id)a0 name:(id)a1 masterClock:(id)a2 policy:(unsigned long long)a3;

@end
