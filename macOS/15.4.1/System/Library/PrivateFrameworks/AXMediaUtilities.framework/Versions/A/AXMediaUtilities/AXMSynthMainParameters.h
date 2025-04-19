@class NSArray, AXMSynthOscillatorParameters;

@interface AXMSynthMainParameters : AXMSynthObservableParameters

@property (retain, nonatomic) AXMSynthOscillatorParameters *mainOsc1Params;
@property (retain, nonatomic) AXMSynthOscillatorParameters *mainOsc2Params;
@property (retain, nonatomic) AXMSynthOscillatorParameters *mainOsc3Params;
@property (readonly, nonatomic) NSArray *allOscillatorParameters;
@property (retain, nonatomic) AXMSynthOscillatorParameters *fmOperatorAParams;
@property (retain, nonatomic) AXMSynthOscillatorParameters *fmOperatorBParams;
@property (retain, nonatomic) AXMSynthOscillatorParameters *fmOperatorCParams;
@property (retain, nonatomic) AXMSynthOscillatorParameters *fmOperatorDParams;
@property (readonly, nonatomic) NSArray *allOperatorParameters;
@property (nonatomic) float sampleRate;
@property (nonatomic) float baseFrequency;
@property (nonatomic) float mainVolume;

+ (id)defaultParameters;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (float)sampleRate;
- (void)setSampleRate:(float)a0;
- (float)mainVolume;
- (void)setMainVolume:(float)a0;
- (void)addSupportedParameters;
- (float)baseFrequency;
- (id)oscillatorParametersWithIdentifier:(id)a0;
- (id)oscillatorParametersWithIdentifiers:(id)a0;
- (void)setBaseFrequency:(float)a0;

@end
