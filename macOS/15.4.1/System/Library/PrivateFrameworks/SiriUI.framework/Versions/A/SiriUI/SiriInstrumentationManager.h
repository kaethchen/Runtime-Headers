@class SAUIAssistantUtteranceView, NSObject, AFAnalyticsTurnBasedInstrumentationContext;
@protocol OS_dispatch_queue;

@interface SiriInstrumentationManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain) AFAnalyticsTurnBasedInstrumentationContext *currentInstrumentationTurnContext;
@property (retain) SAUIAssistantUtteranceView *assistantUtteranceViewSnapShot;
@property int lastSiriUIStateSnapShot;
@property int currentInvocationSource;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)_init;
- (id)SISchemaLocaleToSISchemaISOLocale:(int)a0;
- (void)_emitInstrumentation:(id)a0;
- (id)_startNewTurnWithLastTurn:(id)a0;
- (unsigned int)audioDevice:(unsigned int)a0 propertyUInt32:(unsigned int)a1;
- (void)clearCurrentInstrumentationTurnContext;
- (void)emitDialogOutputEventWith:(id)a0 canUseServerTTS:(BOOL)a1 spokenDialogOutput:(id)a2 displayedDialogOutput:(id)a3;
- (void)emitFinalSpeechTranscriptionEventWith:(id)a0;
- (void)emitInstrumentationEvent:(id)a0 requiresNewTurn:(BOOL)a1 previousTurnId:(id)a2;
- (void)emitInvocationEventForGuideButtonPressed;
- (void)emitInvocationEventForTapToEdit:(id)a0;
- (void)emitInvocationEventForVoiceTriggerEnrollment;
- (void)emitInvocationEventUsingRequestOptions:(id)a0;
- (void)emitPHSEnrollmentTrainingUtteranceAttemptedEventWith:(id)a0 enrollmentMode:(int)a1 locale:(id)a2 trainingOutcome:(int)a3 pageNumber:(int)a4 isRetry:(unsigned char)a5 audioHintNeeded:(unsigned char)a6 audioHintSpoken:(unsigned char)a7;
- (void)emitPHSEnrollmentUICompletedEventWith:(id)a0 enrollmentMode:(int)a1 locale:(id)a2 enrollmentSessionOutcome:(int)a3 pageNumber:(int)a4;
- (void)emitPHSEnrollmentUIStartedEventWith:(id)a0 enrollmentMode:(int)a1 locale:(id)a2 voiceTriggerType:(int)a3;
- (void)emitPartialSpeechTranscriptionEventWith:(id)a0;
- (void)emitPunchOutEventWithURL:(id)a0 appID:(id)a1 previousTurnIdentifier:(id)a2;
- (void)emitPunchOutInvocationWithSiriViewController:(id)a0;
- (void)emitTextToSpeechBeginEvent;
- (void)emitTextToSpeechEndEvent;
- (void)emitUIStateTransitionEventWithFromState:(int)a0 toState:(int)a1;
- (void)emitUIStateTransitionToDismissedStateWithDismissalReason:(int)a0;
- (void)emitUUFRPresentedEventWith:(id)a0 dialogIdentifier:(id)a1 dialogPhase:(id)a2;
- (void)emitUUFRPresentedEventWith:(id)a0 dialogPhase:(id)a1;
- (void)setInvocationSourceForWaveformGlyphButtonPressed;
- (void)snapshotCurrentAssistantUtteranceView:(id)a0;

@end
