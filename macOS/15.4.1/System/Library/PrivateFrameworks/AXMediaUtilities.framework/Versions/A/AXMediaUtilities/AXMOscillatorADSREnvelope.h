@class NSString, AXMSynth, AXMSynthEnvelopeParameters;

@interface AXMOscillatorADSREnvelope : NSObject <AXMAudioSampleProviding>

@property (readonly, nonatomic) double *sampleBuffer;
@property (nonatomic) unsigned long long currentSampleIndex;
@property (nonatomic) BOOL shouldSustain;
@property (nonatomic) double sustainEndTime;
@property (nonatomic) unsigned long long releasePhaseSampleIndex;
@property (nonatomic) BOOL isActive;
@property (weak, nonatomic) AXMSynth *parentSynth;
@property (retain, nonatomic) AXMSynthEnvelopeParameters *parameters;
@property (readonly, nonatomic) double sampleRate;
@property (nonatomic) float attackMS;
@property (nonatomic) float attackLevel;
@property (nonatomic) float decayMS;
@property (nonatomic) float sustainLevel;
@property (nonatomic) float releaseMS;
@property (nonatomic) BOOL isBypassed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)activate;
- (void)deactivate;
- (void)setReleaseTime:(float)a0;
- (void)setAttackTime:(float)a0;
- (void)setDecayTime:(float)a0;
- (float)decayMS;
- (id)initWithParameters:(id)a0 parentSynth:(id)a1;
- (void)setAttackLevel:(float)a0;
- (float)attackLevel;
- (float)attackMS;
- (double)getNextSample;
- (float)releaseMS;
- (void)setSustainLevel:(float)a0;
- (float)sustainLevel;

@end
