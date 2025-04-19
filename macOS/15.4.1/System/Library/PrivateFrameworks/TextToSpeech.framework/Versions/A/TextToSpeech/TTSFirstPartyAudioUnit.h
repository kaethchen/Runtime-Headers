@class TTSAUMessagingAU;

@interface TTSFirstPartyAudioUnit : AVSpeechSynthesisProviderAudioUnit <TTSAUMessaging>

@property (retain, nonatomic) TTSAUMessagingAU *channel;

+ (void)registerInProcess;
+ (BOOL)shouldLogSensitiveSpeech;

- (void).cxx_destruct;
- (id)messageChannelFor:(id)a0;
- (id)echo:(id)a0;
- (id)defaultSettingsForVoice:(id)a0;
- (void)prewarmWithVoice:(id)a0;
- (id)requireFirstUnlockForVoiceLoad;
- (id)voicesExternallyManaged;

@end
