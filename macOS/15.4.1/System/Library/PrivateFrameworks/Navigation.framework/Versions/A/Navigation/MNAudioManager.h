@class MNUserOptions, NSString, MNObserverHashTable, MNAudioSystemOptions;

@interface MNAudioManager : NSObject <MNAudioSystemOptionsObserver> {
    MNObserverHashTable *_observers;
    MNUserOptions *_options;
    MNAudioSystemOptions *_audioSystemOptions;
}

@property (readonly, nonatomic) int transportType;
@property (readonly, nonatomic) unsigned long long voiceGuidanceLevel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)isSpeaking;
- (void)stopSpeaking;
- (void)unregisterObserver:(id)a0;
- (void)registerObserver:(id)a0;
- (void)forceDeactivate;
- (void)audioSystemOptions:(id)a0 didChangeGuidanceLevel:(unsigned long long)a1 transportType:(int)a2;
- (void)changeTransportType:(int)a0;
- (void)clearAllAnnouncements;
- (void)didChangeUserOptionsFrom:(id)a0 to:(id)a1;
- (double)durationOf:(id)a0;
- (id)initWithTransportType:(int)a0 voiceLanguage:(id)a1 guidanceLevelOverride:(unsigned long long)a2;
- (void)requestSpeech:(id)a0 guidanceLevel:(unsigned long long)a1 modifier:(unsigned long long)a2 shortPromptType:(unsigned long long)a3 completionHandler:(id /* block */)a4;
- (void)setVoiceGuidanceLevelOverride:(unsigned long long)a0;
- (BOOL)vibrateForShortPrompt:(unsigned long long)a0;
- (BOOL)voiceGuidanceEnabled;

@end
