@interface REVideoPayload : RESharedResourcePayload

@property (readonly, nonatomic) unsigned char audioInputMode;
@property (readonly, nonatomic) float reverbSendLevel;
@property (readonly, nonatomic) int diffuseSpillMapWidth;
@property (readonly, nonatomic) int diffuseSpillMapHeight;
@property (readonly, nonatomic) int specularSpillMapWidth;
@property (readonly, nonatomic) int specularSpillMapHeight;
@property (readonly, nonatomic) int diffuseSpillBlurSigma;
@property (readonly, nonatomic) int specularSpillBlurSigma;
@property (readonly, nonatomic) unsigned char desiredViewingMode;
@property (readonly, nonatomic) BOOL preventPlaybackUntilReady;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAudioInputMode:(id)a0 reverbSendLevel:(SEL)a1 diffuseSpillMapDimensions:(unsigned char)a2 specularSpillMapDimensions:(float)a3 diffuseSpillBlurSigma:(int)a4 specularSpillBlurSigma:(int)a5 desiredViewingMode:(unsigned char)a6 preventPlaybackUntilReady:(BOOL)a7;

@end
