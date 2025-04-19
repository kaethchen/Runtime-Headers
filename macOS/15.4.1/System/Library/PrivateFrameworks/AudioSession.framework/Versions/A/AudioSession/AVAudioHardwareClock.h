@class NSString, NSArray;

@interface AVAudioHardwareClock : AVAudioHardwareObject

@property (readonly, nonatomic) NSString *hardwareUID;
@property (readonly, nonatomic) NSString *modelUID;
@property (readonly, nonatomic) unsigned int transportType;
@property (readonly, nonatomic) unsigned long long clockDomain;
@property (readonly, nonatomic) unsigned long long inputLatency;
@property (readonly, nonatomic) unsigned long long outputLatency;
@property (readonly, nonatomic) double sampleRate;
@property (readonly, nonatomic) NSArray *availableSampleRates;
@property (readonly, nonatomic) NSArray *controls;

- (double)latency;
- (BOOL)setSampleRate:(double)a0 controller:(id)a1 error:(id *)a2;

@end
