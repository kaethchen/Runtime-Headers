@class NSString, NSArray;
@protocol NSSpeechSynthesizerDelegate;

@interface NSSpeechSynthesizer : NSObject {
    id _privateNSSpeechSynthesizerVars;
}

@property (class, readonly, getter=isAnyApplicationSpeaking) BOOL anyApplicationSpeaking;
@property (class, readonly, copy) NSString *defaultVoice;
@property (class, readonly, copy) NSArray *availableVoices;

@property (readonly, getter=isSpeaking) BOOL speaking;
@property (weak) id<NSSpeechSynthesizerDelegate> delegate;
@property float rate;
@property float volume;
@property BOOL usesFeedbackWindow;

+ (id)attributesForVoice:(id)a0;

- (void)dealloc;
- (id)init;
- (void)_handleSyncCallbackWithMessage:(unsigned int)a0;
- (void)_setupCallbacks;
- (void)_handleErrorCallbackWithParams:(id)a0;
- (float)_volume;
- (BOOL)_beginSpeakingString:(id)a0 optionallyToURL:(id)a1;
- (void)_continueSpeaking;
- (BOOL)_feedbackWindowIsVisible;
- (void)_handleDefaultVoiceChange;
- (void)_handlePhonemeCallbackWithOpcode:(short)a0;
- (void)_handleSpeechDoneCallback;
- (void)_handleWordCallbackWithParams:(id)a0;
- (float)_normalSpeakingRate;
- (id)_objectForProperty:(unsigned int)a0 usingDataSize:(int)a1 withRequestedObjectClass:(Class)a2;
- (void)_pauseSpeakingAtBoundary:(unsigned long long)a0;
- (float)_pitchBase;
- (float)_rate;
- (BOOL)_setObject:(id)a0 forProperty:(unsigned int)a1 usingDataSize:(int)a2;
- (void)_setPitchBase:(float)a0;
- (void)_setRate:(float)a0;
- (void)_setVolume:(float)a0;
- (void)_stopSpeakingAtBoundary:(unsigned long long)a0;
- (void)addSpeechDictionary:(id)a0;
- (void)continueSpeaking;
- (id)initWithVoice:(id)a0;
- (id)objectForProperty:(id)a0 error:(id *)a1;
- (void)pauseSpeakingAtBoundary:(unsigned long long)a0;
- (id)phonemesFromText:(id)a0;
- (BOOL)setObject:(id)a0 forProperty:(id)a1 error:(id *)a2;
- (BOOL)setVoice:(id)a0;
- (BOOL)startSpeakingString:(id)a0;
- (BOOL)startSpeakingString:(id)a0 toURL:(id)a1;
- (void)stopSpeaking;
- (void)stopSpeakingAtBoundary:(unsigned long long)a0;
- (id)voice;

@end
