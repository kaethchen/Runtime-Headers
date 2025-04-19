@class NSString, AXMSynthOscillatorParameters, AXMSynth, NSArray, AXMOscillatorADSREnvelope;

@interface AXMOscillator : NSObject <AXMAudioSampleProviding> {
    NSArray *_cachedFMOperators;
    float _cachedSampleRate;
    float _cachedGain;
    float _cachedBaseFrequency;
    float _cachedFrequencyRatio;
    long long _cachedWaveform;
    BOOL _cachedIsBypassed;
    BOOL _cachedEnvelopeIsBypassed;
}

@property (nonatomic) float currentPhase;
@property (nonatomic) double startTime;
@property (readonly, nonatomic) float phaseIncrement;
@property (nonatomic) double *sampleBuffer;
@property (readonly, nonatomic) AXMOscillator *rootOscillator;
@property (readonly, nonatomic) float rootFrequency;
@property (readonly, nonatomic) float fmRootFrequencyRatio;
@property (weak, nonatomic) AXMSynth *parentSynth;
@property (retain, nonatomic) AXMSynthOscillatorParameters *parameters;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) BOOL isUsingFM;
@property (readonly, nonatomic) AXMOscillatorADSREnvelope *envelope;
@property (readonly, nonatomic) NSArray *fmOperators;
@property (weak, nonatomic) AXMOscillator *fmTarget;
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
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (void)start;
- (id)dictionaryRepresentation;
- (void)stop;
- (void)updateCache;
- (id)initWithParameters:(id)a0 parentSynth:(id)a1;
- (double)getNextSample;
- (void)routeTo:(id)a0;

@end
