@class AVAudioUIntegerRange;

@interface AVAudioHardwareSliderControl : AVAudioHardwareControl

@property (readonly, nonatomic) unsigned long long value;
@property (readonly, nonatomic) AVAudioUIntegerRange *range;

- (BOOL)setValue:(unsigned long long)a0 controller:(id)a1 error:(id *)a2;
- (id)valueKeys;

@end
