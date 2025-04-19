@class NSArray, AVAudioFormat, AVAudioHardwareDevice;

@interface AVAudioHardwareStream : AVAudioHardwareObject

@property (readonly, weak, nonatomic) AVAudioHardwareDevice *owningDevice;
@property (readonly, nonatomic) unsigned int direction;
@property (readonly, nonatomic) NSArray *ports;
@property (readonly, nonatomic) unsigned long long startingChannel;
@property (readonly, nonatomic) long long latency;
@property (readonly, nonatomic) NSArray *availableFormats;
@property (readonly, nonatomic) AVAudioFormat *format;

- (id)init;
- (id)rawDriverFormat;
- (id)availableRawDriverFormats;
- (BOOL)overrideChannelLayout:(id)a0 controller:(id)a1 error:(id *)a2;
- (void)setFormat:(id)a0 controller:(id)a1 completionHandler:(id /* block */)a2;

@end
