@interface EchoCodecConfiguration : AUPasscodeCodecConfiguration <NSCopying>

@property (nonatomic) unsigned long long frameSize;
@property (nonatomic) unsigned long long numFrameRepeat;
@property (nonatomic) float delayForBit0;
@property (nonatomic) float delayForBit1;
@property (nonatomic) float syncDetectThreshold;
@property (nonatomic) unsigned long long randomSeed;
@property (nonatomic) float echoGainDB;
@property (nonatomic) float noiseGainDB;
@property (nonatomic) float hpfCutOffFreq;
@property (nonatomic) BOOL hfNoiseFillingFlag;
@property (nonatomic) unsigned long long algorithmVersionNumber;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setDefaultValues;
- (id)commandLineOptions;
- (id)initWithCapabilityData:(id)a0;
- (id)initWithCommandLineArgs:(id)a0;

@end
