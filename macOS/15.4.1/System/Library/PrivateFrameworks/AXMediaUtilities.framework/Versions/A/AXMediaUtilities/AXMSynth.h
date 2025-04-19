@class AXMSynthMainParameters, AXMOscillator, AXMADSREnvelope;

@interface AXMSynth : NSObject

@property (nonatomic) double *sampleBuffer;
@property (retain, nonatomic) AXMSynthMainParameters *parameters;
@property (nonatomic) float mainVolume;
@property (nonatomic) double baseFrequency;
@property (readonly, nonatomic) double sampleRate;
@property (retain, nonatomic) AXMOscillator *mainOscillator;
@property (retain, nonatomic) AXMOscillator *mainOperator;
@property (readonly, nonatomic) AXMADSREnvelope *envelope;
@property (nonatomic) double gain;

- (void).cxx_destruct;
- (void)setSampleRate:(double)a0;
- (float)mainVolume;
- (void)setMainVolume:(float)a0;
- (void)bypassEnvelopes;
- (double)baseFrequency;
- (void)bypassAllOperatorsAndOscillators;
- (void)enumerateOscillatorsWithBlock:(id /* block */)a0;
- (double)getNextSample;
- (id)initWithSampleRate:(double)a0 envelope:(id)a1;
- (void)loadPreset:(id)a0;
- (id)oscillatorAndOperator;
- (id)oscillatorWithIdentifier:(id)a0;
- (id)oscillatorsWithIdentifiers:(id)a0;
- (void)playNote:(float)a0;
- (void)releaseNote;
- (void)setBaseFrequency:(double)a0;

@end
