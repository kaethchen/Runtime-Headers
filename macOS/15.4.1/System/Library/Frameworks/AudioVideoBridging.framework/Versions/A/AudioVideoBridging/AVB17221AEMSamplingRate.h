@interface AVB17221AEMSamplingRate : AVB17221AEMObject <NSCopying>

@property (readonly, nonatomic) double frequency;
@property (nonatomic) unsigned char iidcVideoFrameRate;
@property unsigned int samplingRate;
@property unsigned char pull;
@property unsigned int baseFrequency;
@property (readonly, copy) AVB17221AEMSamplingRate *baseRate;

+ (id)_IIDCNTSCDownFrameRates;
+ (id)_IIDCStandardFrameRates;
+ (id)keyPathsForValuesAffectingBaseFrequency;
+ (id)keyPathsForValuesAffectingPull;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (double)frequency;
- (unsigned char)pull;
- (unsigned int)baseFrequency;
- (void)setBaseFrequency:(unsigned int)a0;
- (id)debugLogStringWithIndentation:(id)a0;
- (unsigned char)iidcVideoFrameRate;
- (BOOL)isSupportedAudioSamplingRate;
- (BOOL)isSupportedVideoSamplingRate;
- (id)plistRepresentationForDiagnostics:(BOOL)a0;
- (void)setIidcVideoFrameRate:(unsigned char)a0;
- (void)setPull:(unsigned char)a0;
- (BOOL)updateWithPlistEntry:(id)a0;
- (BOOL)updateWithXML:(id)a0;
- (id)xmlRepresentation;

@end
