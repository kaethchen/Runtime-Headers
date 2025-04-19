@class AXMSynthMainParameters;

@interface AXMSynthEnvelopeParameters : AXMSynthObservableParameters

@property (weak, nonatomic) AXMSynthMainParameters *mainParameters;
@property (readonly, nonatomic) float sampleRate;
@property (nonatomic) float attackMS;
@property (nonatomic) float attackLevel;
@property (nonatomic) float decayMS;
@property (nonatomic) float sustainLevel;
@property (nonatomic) float releaseMS;

+ (id)defaultParameters;

- (void).cxx_destruct;
- (void)setReleaseTime:(float)a0;
- (void)setAttackTime:(float)a0;
- (void)setDecayTime:(float)a0;
- (float)decayMS;
- (void)setAttackLevel:(float)a0;
- (void)addSupportedParameters;
- (float)attackLevel;
- (float)attackMS;
- (float)releaseMS;
- (void)setSustainLevel:(float)a0;
- (float)sustainLevel;

@end
