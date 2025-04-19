@class AVAudioFloatRange;

@interface AVAudioHardwareLevelControl : AVAudioHardwareControl

@property (readonly, nonatomic) float scalarValue;
@property (readonly, nonatomic) float decibelValue;
@property (readonly, nonatomic) AVAudioFloatRange *decibelRange;

- (float)decibelValueFromScalar:(float)a0;
- (float)scalarValueFromDecibel:(float)a0;
- (BOOL)setDecibelValue:(float)a0 controller:(id)a1 error:(id *)a2;
- (BOOL)setScalarValue:(float)a0 controller:(id)a1 error:(id *)a2;
- (id)valueKeys;

@end
