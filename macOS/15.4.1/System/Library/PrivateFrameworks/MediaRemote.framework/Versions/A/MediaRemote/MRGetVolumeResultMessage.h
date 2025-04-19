@interface MRGetVolumeResultMessage : MRProtocolMessage

@property (readonly, nonatomic) float volume;

- (unsigned long long)type;
- (id)initWithVolume:(float)a0;

@end
