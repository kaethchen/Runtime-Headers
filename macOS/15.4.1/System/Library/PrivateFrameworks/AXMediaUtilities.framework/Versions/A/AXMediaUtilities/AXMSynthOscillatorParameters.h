@class AXMSynthEnvelopeParameters, NSString, NSArray, AXMSynthMainParameters;

@interface AXMSynthOscillatorParameters : AXMSynthObservableParameters

@property (weak, nonatomic) AXMSynthMainParameters *mainParameters;
@property (readonly, nonatomic) AXMSynthEnvelopeParameters *envelopeParameters;
@property (readonly, nonatomic) AXMSynthOscillatorParameters *fmTargetParameters;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) long long waveform;
@property (readonly, nonatomic) float sampleRate;
@property (readonly, nonatomic) float baseFrequency;
@property (nonatomic) float frequencyRatio;
@property (readonly, nonatomic) NSArray *fmOperatorIdentifiers;
@property (readonly, nonatomic) NSString *fmTargetIdentifier;
@property (nonatomic) float gain;
@property (nonatomic) long long detuning;
@property (nonatomic) BOOL isBypassed;
@property (nonatomic) float lowpassCutoff;
@property (readonly, nonatomic) NSString *displayName;

+ (id)defaultParameters;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)addFmOperatorIdentifier:(id)a0;
- (void)addSupportedParameters;
- (void)removeFmOperatorIdentifier:(id)a0;
- (void)routeTo:(id)a0;
- (void)setBaseFrequency:(float)a0;

@end
