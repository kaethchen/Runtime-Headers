@interface MRLegacyVolumeControlCapabilitiesDidChangeMessage : MRProtocolMessage

@property (readonly, nonatomic) unsigned int capabilities;

- (unsigned long long)type;
- (id)initWithCapabilities:(unsigned int)a0;

@end
