@class NSArray, NSString;

@interface ZMSpeechSynthesizer : NSObject {
    struct SpeechChannelRecord { long long x0[1]; } *_speechChannel;
    NSString *_currentVoice;
    unsigned int _currentVoiceScriptCode;
    BOOL _speechFinishedSuccessfully;
    BOOL _usingDefaultVoice;
}

@property (readonly, weak, nonatomic) NSArray *supportedLiteralCharacterRanges;
@property (readonly, weak, nonatomic) NSArray *supportedCharacterRanges;

+ (id)_copyIdentifierStringForVoiceSpec:(struct VoiceSpec { unsigned int x0; unsigned int x1; } *)a0;
+ (BOOL)_findVoiceByIdentifier:(id)a0 returningCreator:(unsigned int *)a1 returningID:(unsigned int *)a2;
+ (BOOL)_makeVoiceForIdentifier:(struct __CFString { } *)a0 voiceSpec:(struct VoiceSpec { unsigned int x0; unsigned int x1; } *)a1;
+ (id)_voiceIdentifierForVoiceCreator:(unsigned int)a0 voiceID:(unsigned int)a1;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)_setupCallbacks;
- (void)_handleDefaultVoiceChange;
- (BOOL)isSpeaking;
- (void)startSpeakingString:(id)a0;
- (void)stopSpeaking;
- (BOOL)_beginSpeakingString:(id)a0;
- (unsigned int)_currentVoiceScriptCode;
- (void)_handleSpeechDone;
- (BOOL)_setSpeechChannelWithVoiceCreator:(unsigned int)a0 voiceID:(unsigned int)a1;
- (void)_stopSpeakingOutputThread;
- (void)resetVoice;

@end
