@class NSString, _NSPeriodicInvoker;
@protocol NSSpeechSynthesizerDelegate;

@interface NSSpeechSynthesizerVars : NSObject {
    struct SpeechChannelRecord { long long x0[1]; } *_speechChannel;
    _NSPeriodicInvoker *_speechFeedbackServicesInvoker;
    unsigned int _speechFeedbackServicesRef;
    NSString *_currentVoice;
    float _normalSpeakingRate;
    BOOL _usingDefaultVoice;
    BOOL _usesFeedbackWindow;
    BOOL _speakingSpeechFeedbackServices;
    BOOL _needsResyncWithDefaultVoice;
    BOOL _speechFinishedSuccessfully;
    BOOL _synthesizerIsRetained;
}

@property (weak) id<NSSpeechSynthesizerDelegate> delegate;
@property (readonly) struct SpeechChannelRecord { long long x0[1]; } *speechChannel;
@property (readonly) unsigned int speechFeedbackServicesRef;
@property (retain) _NSPeriodicInvoker *speechFeedbackServicesInvoker;
@property (copy) NSString *currentVoiceIdentifier;
@property (readonly) float normalSpeakingRate;
@property BOOL usingDefaultVoice;
@property BOOL usesFeedbackWindow;
@property BOOL speakingSpeechFeedbackServices;
@property BOOL needsResyncWithDefaultVoice;
@property BOOL speechFinishedSuccessfully;
@property BOOL synthesizerIsRetained;

+ (BOOL)findVoiceByIdentifier:(id)a0 returningCreator:(unsigned int *)a1 returningID:(unsigned int *)a2;
+ (id)voiceIdentifierForVoiceCreator:(unsigned int)a0 voiceID:(unsigned int)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (short)setSpeechChannelWithVoiceCreator:(unsigned int)a0 voiceID:(unsigned int)a1;
- (short)setSpeechChannelWithVoiceIdentifier:(id)a0;

@end
