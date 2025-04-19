@class TTSSpeechString, NSNumber, NSCondition, NSRegularExpression, NSDictionary, NSObject, AXKonaParameters, NSMutableArray, TTSRulesetRunner, AVAudioFormat, NSArray, AXKonaVoice, AXKonaConfiguration, AVAudioConverter, NLTokenizer;
@protocol OS_dispatch_queue;

@interface AXKonaSpeechEngine : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _bufferLock;
    short _pSampleBuffer[512];
}

@property (nonatomic) void *wrappedInstance;
@property (nonatomic) void *currentDictionary;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *synthesizerSyncQueue;
@property (retain, nonatomic) AXKonaVoice *currentVoice;
@property (retain, nonatomic) AXKonaConfiguration *currentConfiguration;
@property (retain, nonatomic) NLTokenizer *tokenizer;
@property (retain, nonatomic) AXKonaParameters *currentParameters;
@property (retain, nonatomic) NSDictionary *configurationMap;
@property (retain, nonatomic) NSArray *currentSpeechSegments;
@property (retain, nonatomic) NSMutableArray *currentMarkers;
@property (nonatomic) unsigned int currentFrameCount;
@property (retain, nonatomic) AVAudioConverter *bufferConverter;
@property (nonatomic) float lastSampVal;
@property (retain, nonatomic) AVAudioFormat *engineFormat;
@property (retain, nonatomic) AVAudioFormat *outputFormat;
@property (retain, nonatomic) NSRegularExpression *commandRegex;
@property (nonatomic) unsigned long long synthState;
@property (retain, nonatomic) NSMutableArray *queuedBuffers;
@property (retain, nonatomic) NSCondition *producedBuffers;
@property (retain, nonatomic) NSCondition *consumedBuffers;
@property (retain, nonatomic) TTSRulesetRunner *ruleSetRunner;
@property (retain, nonatomic) TTSSpeechString *currentSpeechString;
@property (copy, nonatomic) id /* block */ dynamicLoggingBlock;
@property (retain, nonatomic) AXKonaParameters *parameters;
@property (nonatomic) BOOL highQualityMode;
@property (nonatomic) BOOL abbreviationDictionary;
@property (nonatomic) BOOL phrasePrediction;
@property (nonatomic) BOOL preferCommunityDictionary;
@property (retain, nonatomic) NSNumber *overrideFricationGain;
@property (retain, nonatomic) NSNumber *overrideAspirationGain;
@property (retain, nonatomic) NSNumber *overrideVoicingGain;
@property (retain, nonatomic) NSNumber *overrideOverallGain;
@property (retain, nonatomic) NSNumber *highFormantBandwidthScalingFactor;
@property (retain, nonatomic) NSNumber *highFormantFrequencyScalingFactor;
@property (retain, nonatomic) AXKonaVoice *voice;

+ (id)allVoices;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithVoice:(id)a0;
- (id)nextBuffer;
- (void)_enqueueBuffer:(id)a0;
- (void)cancelSynthesis;
- (void)synthesizeText:(id)a0;
- (void)_cancelSynthesis;
- (void)_initializeConfigurationMap;
- (BOOL)_initializeWrappedEngineForVoice:(id)a0;
- (id)_konaCrashPatterns;
- (BOOL)_loadDictionaryAtPath:(id)a0 type:(long long)a1 handle:(void *)a2;
- (void)_loadDictionaryForVoice:(id)a0;
- (id)_preprocessTextForIrregularities:(id)a0;
- (void)_resetEnginePreservingParams;
- (id)_segmentsForText:(id)a0;
- (long long)eciCallback:(long long)a0 iParam:(long long)a1 instanceData:(void *)a2;
- (void)klattConstantHook:(struct { float x0; float x1; int x2; int x3; int x4; int x5; int x6; int x7; float x8; float x9; float x10; float x11; char *x12; } *)a0;
- (void)klattDynamicHook:(struct KlattFrame { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; float x19; float x20; float x21; float x22; float x23; float x24; float x25; float x26; float x27; float x28; float x29; float x30; float x31; float x32; float x33; float x34; float x35; float x36; float x37; float x38; float x39; float x40; float x41; float x42; float x43; float x44; float x45; float x46; float x47; float x48; float x49; float x50; float x51; float x52; float x53; float x54; float x55; float x56; float x57; float x58; float x59; float x60; float x61; } *)a0;

@end
