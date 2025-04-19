@class NSArray, NSString;

@interface AVAudioHardwareDevice : AVAudioHardwareClock <AVAudioRouteDescribing>

@property (readonly, nonatomic) unsigned long long inputSafetyOffset;
@property (readonly, nonatomic) unsigned long long outputSafetyOffset;
@property (readonly, nonatomic) NSArray *inputStreams;
@property (readonly, nonatomic) NSArray *outputStreams;
@property (readonly, nonatomic) NSArray *inputPorts;
@property (readonly, nonatomic) NSArray *outputPorts;
@property (nonatomic) struct AVAudioHardwareStereoPair { unsigned int x0; unsigned int x1; } defaultInputStereoChannels;
@property (nonatomic) struct AVAudioHardwareStereoPair { unsigned int x0; unsigned int x1; } defaultOutputStereoChannels;
@property (readonly, copy, nonatomic) NSString *UID;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canBeDefaultRoute:(unsigned int)a0;
- (id)controls;
- (id)fakeDeviceDescription;

@end
