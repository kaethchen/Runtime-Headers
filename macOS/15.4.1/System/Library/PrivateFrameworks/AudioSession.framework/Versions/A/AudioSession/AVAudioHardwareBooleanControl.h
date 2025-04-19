@interface AVAudioHardwareBooleanControl : AVAudioHardwareControl

@property (readonly, nonatomic) BOOL value;

- (BOOL)setValue:(BOOL)a0 controller:(id)a1 error:(id *)a2;
- (id)valueKeys;

@end
