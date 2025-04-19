@class VTCoreSpeechKeepAliveHandler;

@interface VTStateManager : NSObject

@property (retain, nonatomic) VTCoreSpeechKeepAliveHandler *coreSpeechKeepAliveHandler;

+ (BOOL)isLastTriggerForced;
+ (void)notifyVoiceTriggeredSiriSessionCancelled;
+ (void)clearVoiceTriggerCount;
+ (id)firstChanceAudioBuffer;
+ (id)firstChanceTriggeredDate;
+ (id)firstChanceVTEventInfo;
+ (long long)getVoiceTriggerCount;
+ (BOOL)iPhoneShouldStartVoiceTriggerInCoreSpeech;
+ (BOOL)isLastTriggerSecondChanceTriggered;
+ (void)notifyVoiceTrigger;
+ (void)notifyVoiceTriggeredSiriSessionCancelled:(id)a0;
+ (void)requestAudioCapture:(double)a0;
+ (id)requestCurrentBuiltInRTModelDictionary;
+ (id)requestCurrentVoiceTriggerAssetDictionary;
+ (void)requestCurrentVoiceTriggerAssetDictionaryWithReply:(id /* block */)a0;
+ (void)requestForcedSecondChance;
+ (void)requestForcedTriggerEvent;
+ (void)requestPhraseSpotterBypassing:(BOOL)a0 timeout:(double)a1;
+ (void)requestRaiseToSpeakBypassing:(BOOL)a0 timeout:(double)a1;
+ (void)requestVoiceTriggerEnabled:(BOOL)a0 forReason:(id)a1;
+ (void)setCurrentBuiltInRTModelDictionary:(id)a0;

- (void).cxx_destruct;

@end
