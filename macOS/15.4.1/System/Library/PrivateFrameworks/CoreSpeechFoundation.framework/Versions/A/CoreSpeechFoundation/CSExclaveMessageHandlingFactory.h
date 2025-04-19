@interface CSExclaveMessageHandlingFactory : NSObject

+ (id)exclaveAssetsController;
+ (id)exclaveFirstPassVoiceTriggerAnalyzer;
+ (id)exclaveSecondPassVoiceTriggerAnalyzer;
+ (id)commonExclaveMessageHandler;
+ (id)exclaveAdblockerAnalyzer;
+ (id)exclaveAudioProvider;

@end
