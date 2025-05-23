@class NSString, NSData, SISchemaUUID;

@interface MHSchemaMHVoiceTriggerEventInfo : SISchemaInstrumentationMessage {
    struct { unsigned char secondPassAnalyerStartSampleCount : 1; unsigned char secondPassAnalyerEndSampleCount : 1; unsigned char satScore : 1; unsigned char satNumTrainingUtterances : 1; unsigned char satThreshold : 1; unsigned char satTriggered : 1; unsigned char tdSpeakerRecognizerScore : 1; unsigned char tdSpeakerRecognizerCombinedScore : 1; unsigned char tdSpeakerRecognizerCombinedThreshold : 1; unsigned char tdSpeakerRecognizerCombinationWeight : 1; unsigned char biometricClue : 1; unsigned char satBeingTrained : 1; unsigned char lastConsecutivePHSRejects : 1; unsigned char deltaTimeInNsFromlastPHSReject : 1; unsigned char triggerExplicitSatScore : 1; unsigned char triggerExplicitTDSRSatScore : 1; unsigned char shadowMicScore : 1; unsigned char shadowMicScoreThresholdForVAD : 1; unsigned char remoteMicVADScore : 1; unsigned char remoteMicVADThreshold : 1; unsigned char remoteMicVADMyriadThreshold : 1; unsigned char enhancedCarplayTriggerMode : 1; unsigned char triggerStartSampleCount : 1; unsigned char clientStartSampleCount : 1; unsigned char triggerEndSampleCount : 1; unsigned char triggerFireSampleCount : 1; unsigned char triggerStartNs : 1; unsigned char triggerEndNs : 1; unsigned char triggerFireNs : 1; unsigned char extraSamplesAtStart : 1; unsigned char analyzerPrependingSamples : 1; unsigned char analyzerTrailingSamples : 1; unsigned char isTriggerEvent : 1; unsigned char totalSampleCount : 1; unsigned char triggerScore : 1; unsigned char isMaximized : 1; unsigned char effectiveThreshold : 1; unsigned char recognizerScore : 1; unsigned char recognizerThresholdOffset : 1; unsigned char recognizerWaitTimeInNs : 1; unsigned char recognizerScaleFactor : 1; unsigned char threshold : 1; unsigned char triggerStartTimeOffsetInNs : 1; unsigned char triggerEndTimeOffsetInNs : 1; unsigned char triggerFireTimeOffsetInNs : 1; unsigned char triggerStartTime : 1; unsigned char triggerEndTime : 1; unsigned char triggerFiredTime : 1; unsigned char hardwareSamplerate : 1; unsigned char isContinuous : 1; unsigned char triggerDurationInNs : 1; unsigned char totalSamplesAtTriggerStart : 1; unsigned char totalSamplesAtTriggerEnd : 1; unsigned char totalSamplesAtEndOfCapture : 1; unsigned char isSecondChance : 1; unsigned char deviceHandheld : 1; unsigned char activeChannel : 1; unsigned char twoShotAudibleFeedbackDelayInNs : 1; unsigned char cumulativeUptimeInSec : 1; unsigned char cumulativeDowntimeInSec : 1; unsigned char hostPowerStateAtTrigger : 1; unsigned char isMediaPlaying : 1; unsigned char mediaVolume : 1; unsigned char onBatteryPower : 1; unsigned char didWakeAP : 1; unsigned char uptimeInSec : 1; unsigned char downtimeInSec : 1; unsigned char lastConsecutiveVTRejects : 1; unsigned char siriIsActiveOrOtherAssertion : 1; unsigned char didAudioStall : 1; unsigned char isBargeIn : 1; unsigned char isWakeFromSleep : 1; unsigned char secondPassAssetQueryStartTimeInNs : 1; unsigned char secondPassAssetQueryCompleteTimeInNs : 1; unsigned char secondPassAssetLoadStartTimeInNs : 1; unsigned char secondPassAssetLoadCompleteTimeInNs : 1; unsigned char secondPassAudioStreamStartTimeInNs : 1; unsigned char secondPassAudioStreamReadyTimeInNs : 1; unsigned char secondPassFirstAudioPacketReceptionTimeInNs : 1; unsigned char secondPassLastAudioPacketReceptionTimeInNs : 1; unsigned char secondPassCheckerModelKeywordDetectionStartTimeInNs : 1; unsigned char secondPassCheckerModelKeywordDetectionEndTimeInNs : 1; unsigned char lastDisplayWakeTimeOffsetInNs : 1; unsigned char isHSJSTriggerFromAlwaysOnMicBuffer : 1; unsigned char displayWakeTimeOffsetInNs : 1; unsigned char neptuneDetectionApiScore : 1; } _has;
}

@property (nonatomic) unsigned long long secondPassAnalyerStartSampleCount;
@property (nonatomic) BOOL hasSecondPassAnalyerStartSampleCount;
@property (nonatomic) unsigned long long secondPassAnalyerEndSampleCount;
@property (nonatomic) BOOL hasSecondPassAnalyerEndSampleCount;
@property (nonatomic) float satScore;
@property (nonatomic) BOOL hasSatScore;
@property (nonatomic) unsigned int satNumTrainingUtterances;
@property (nonatomic) BOOL hasSatNumTrainingUtterances;
@property (nonatomic) float satThreshold;
@property (nonatomic) BOOL hasSatThreshold;
@property (nonatomic) BOOL satTriggered;
@property (nonatomic) BOOL hasSatTriggered;
@property (nonatomic) float tdSpeakerRecognizerScore;
@property (nonatomic) BOOL hasTdSpeakerRecognizerScore;
@property (nonatomic) float tdSpeakerRecognizerCombinedScore;
@property (nonatomic) BOOL hasTdSpeakerRecognizerCombinedScore;
@property (nonatomic) float tdSpeakerRecognizerCombinedThreshold;
@property (nonatomic) BOOL hasTdSpeakerRecognizerCombinedThreshold;
@property (nonatomic) float tdSpeakerRecognizerCombinationWeight;
@property (nonatomic) BOOL hasTdSpeakerRecognizerCombinationWeight;
@property (nonatomic) int biometricClue;
@property (nonatomic) BOOL hasBiometricClue;
@property (nonatomic) BOOL satBeingTrained;
@property (nonatomic) BOOL hasSatBeingTrained;
@property (nonatomic) unsigned int lastConsecutivePHSRejects;
@property (nonatomic) BOOL hasLastConsecutivePHSRejects;
@property (nonatomic) unsigned long long deltaTimeInNsFromlastPHSReject;
@property (nonatomic) BOOL hasDeltaTimeInNsFromlastPHSReject;
@property (nonatomic) float triggerExplicitSatScore;
@property (nonatomic) BOOL hasTriggerExplicitSatScore;
@property (nonatomic) float triggerExplicitTDSRSatScore;
@property (nonatomic) BOOL hasTriggerExplicitTDSRSatScore;
@property (nonatomic) float shadowMicScore;
@property (nonatomic) BOOL hasShadowMicScore;
@property (nonatomic) float shadowMicScoreThresholdForVAD;
@property (nonatomic) BOOL hasShadowMicScoreThresholdForVAD;
@property (nonatomic) float remoteMicVADScore;
@property (nonatomic) BOOL hasRemoteMicVADScore;
@property (nonatomic) float remoteMicVADThreshold;
@property (nonatomic) BOOL hasRemoteMicVADThreshold;
@property (nonatomic) float remoteMicVADMyriadThreshold;
@property (nonatomic) BOOL hasRemoteMicVADMyriadThreshold;
@property (nonatomic) int enhancedCarplayTriggerMode;
@property (nonatomic) BOOL hasEnhancedCarplayTriggerMode;
@property (nonatomic) unsigned long long triggerStartSampleCount;
@property (nonatomic) BOOL hasTriggerStartSampleCount;
@property (nonatomic) unsigned long long clientStartSampleCount;
@property (nonatomic) BOOL hasClientStartSampleCount;
@property (nonatomic) unsigned long long triggerEndSampleCount;
@property (nonatomic) BOOL hasTriggerEndSampleCount;
@property (nonatomic) unsigned long long triggerFireSampleCount;
@property (nonatomic) BOOL hasTriggerFireSampleCount;
@property (nonatomic) unsigned long long triggerStartNs;
@property (nonatomic) BOOL hasTriggerStartNs;
@property (nonatomic) unsigned long long triggerEndNs;
@property (nonatomic) BOOL hasTriggerEndNs;
@property (nonatomic) unsigned long long triggerFireNs;
@property (nonatomic) BOOL hasTriggerFireNs;
@property (nonatomic) unsigned long long extraSamplesAtStart;
@property (nonatomic) BOOL hasExtraSamplesAtStart;
@property (nonatomic) unsigned long long analyzerPrependingSamples;
@property (nonatomic) BOOL hasAnalyzerPrependingSamples;
@property (nonatomic) unsigned long long analyzerTrailingSamples;
@property (nonatomic) BOOL hasAnalyzerTrailingSamples;
@property (nonatomic) BOOL isTriggerEvent;
@property (nonatomic) BOOL hasIsTriggerEvent;
@property (nonatomic) unsigned long long totalSampleCount;
@property (nonatomic) BOOL hasTotalSampleCount;
@property (nonatomic) float triggerScore;
@property (nonatomic) BOOL hasTriggerScore;
@property (nonatomic) BOOL isMaximized;
@property (nonatomic) BOOL hasIsMaximized;
@property (nonatomic) float effectiveThreshold;
@property (nonatomic) BOOL hasEffectiveThreshold;
@property (nonatomic) float recognizerScore;
@property (nonatomic) BOOL hasRecognizerScore;
@property (nonatomic) float recognizerThresholdOffset;
@property (nonatomic) BOOL hasRecognizerThresholdOffset;
@property (nonatomic) unsigned long long recognizerWaitTimeInNs;
@property (nonatomic) BOOL hasRecognizerWaitTimeInNs;
@property (nonatomic) float recognizerScaleFactor;
@property (nonatomic) BOOL hasRecognizerScaleFactor;
@property (nonatomic) float threshold;
@property (nonatomic) BOOL hasThreshold;
@property (nonatomic) unsigned long long triggerStartTimeOffsetInNs;
@property (nonatomic) BOOL hasTriggerStartTimeOffsetInNs;
@property (nonatomic) unsigned long long triggerEndTimeOffsetInNs;
@property (nonatomic) BOOL hasTriggerEndTimeOffsetInNs;
@property (nonatomic) unsigned long long triggerFireTimeOffsetInNs;
@property (nonatomic) BOOL hasTriggerFireTimeOffsetInNs;
@property (nonatomic) double triggerStartTime;
@property (nonatomic) BOOL hasTriggerStartTime;
@property (nonatomic) double triggerEndTime;
@property (nonatomic) BOOL hasTriggerEndTime;
@property (nonatomic) double triggerFiredTime;
@property (nonatomic) BOOL hasTriggerFiredTime;
@property (nonatomic) unsigned int hardwareSamplerate;
@property (nonatomic) BOOL hasHardwareSamplerate;
@property (nonatomic) BOOL isContinuous;
@property (nonatomic) BOOL hasIsContinuous;
@property (nonatomic) float triggerDurationInNs;
@property (nonatomic) BOOL hasTriggerDurationInNs;
@property (nonatomic) unsigned long long totalSamplesAtTriggerStart;
@property (nonatomic) BOOL hasTotalSamplesAtTriggerStart;
@property (nonatomic) unsigned long long totalSamplesAtTriggerEnd;
@property (nonatomic) BOOL hasTotalSamplesAtTriggerEnd;
@property (nonatomic) unsigned long long totalSamplesAtEndOfCapture;
@property (nonatomic) BOOL hasTotalSamplesAtEndOfCapture;
@property (copy, nonatomic) NSString *configVersion;
@property (nonatomic) BOOL hasConfigVersion;
@property (copy, nonatomic) NSString *configPath;
@property (nonatomic) BOOL hasConfigPath;
@property (nonatomic) BOOL isSecondChance;
@property (nonatomic) BOOL hasIsSecondChance;
@property (nonatomic) BOOL deviceHandheld;
@property (nonatomic) BOOL hasDeviceHandheld;
@property (nonatomic) unsigned int activeChannel;
@property (nonatomic) BOOL hasActiveChannel;
@property (nonatomic) unsigned long long twoShotAudibleFeedbackDelayInNs;
@property (nonatomic) BOOL hasTwoShotAudibleFeedbackDelayInNs;
@property (nonatomic) float cumulativeUptimeInSec;
@property (nonatomic) BOOL hasCumulativeUptimeInSec;
@property (nonatomic) float cumulativeDowntimeInSec;
@property (nonatomic) BOOL hasCumulativeDowntimeInSec;
@property (nonatomic) int hostPowerStateAtTrigger;
@property (nonatomic) BOOL hasHostPowerStateAtTrigger;
@property (nonatomic) BOOL isMediaPlaying;
@property (nonatomic) BOOL hasIsMediaPlaying;
@property (nonatomic) float mediaVolume;
@property (nonatomic) BOOL hasMediaVolume;
@property (retain, nonatomic) SISchemaUUID *audioProviderUUID;
@property (nonatomic) BOOL hasAudioProviderUUID;
@property (nonatomic) BOOL onBatteryPower;
@property (nonatomic) BOOL hasOnBatteryPower;
@property (nonatomic) BOOL didWakeAP;
@property (nonatomic) BOOL hasDidWakeAP;
@property (nonatomic) float uptimeInSec;
@property (nonatomic) BOOL hasUptimeInSec;
@property (nonatomic) float downtimeInSec;
@property (nonatomic) BOOL hasDowntimeInSec;
@property (nonatomic) unsigned int lastConsecutiveVTRejects;
@property (nonatomic) BOOL hasLastConsecutiveVTRejects;
@property (copy, nonatomic) NSString *captureFilePath;
@property (nonatomic) BOOL hasCaptureFilePath;
@property (copy, nonatomic) NSString *configDataHash;
@property (nonatomic) BOOL hasConfigDataHash;
@property (nonatomic) BOOL siriIsActiveOrOtherAssertion;
@property (nonatomic) BOOL hasSiriIsActiveOrOtherAssertion;
@property (nonatomic) BOOL didAudioStall;
@property (nonatomic) BOOL hasDidAudioStall;
@property (nonatomic) BOOL isBargeIn;
@property (nonatomic) BOOL hasIsBargeIn;
@property (nonatomic) BOOL isWakeFromSleep;
@property (nonatomic) BOOL hasIsWakeFromSleep;
@property (nonatomic) unsigned long long secondPassAssetQueryStartTimeInNs;
@property (nonatomic) BOOL hasSecondPassAssetQueryStartTimeInNs;
@property (nonatomic) unsigned long long secondPassAssetQueryCompleteTimeInNs;
@property (nonatomic) BOOL hasSecondPassAssetQueryCompleteTimeInNs;
@property (nonatomic) unsigned long long secondPassAssetLoadStartTimeInNs;
@property (nonatomic) BOOL hasSecondPassAssetLoadStartTimeInNs;
@property (nonatomic) unsigned long long secondPassAssetLoadCompleteTimeInNs;
@property (nonatomic) BOOL hasSecondPassAssetLoadCompleteTimeInNs;
@property (nonatomic) unsigned long long secondPassAudioStreamStartTimeInNs;
@property (nonatomic) BOOL hasSecondPassAudioStreamStartTimeInNs;
@property (nonatomic) unsigned long long secondPassAudioStreamReadyTimeInNs;
@property (nonatomic) BOOL hasSecondPassAudioStreamReadyTimeInNs;
@property (nonatomic) unsigned long long secondPassFirstAudioPacketReceptionTimeInNs;
@property (nonatomic) BOOL hasSecondPassFirstAudioPacketReceptionTimeInNs;
@property (nonatomic) unsigned long long secondPassLastAudioPacketReceptionTimeInNs;
@property (nonatomic) BOOL hasSecondPassLastAudioPacketReceptionTimeInNs;
@property (nonatomic) unsigned long long secondPassCheckerModelKeywordDetectionStartTimeInNs;
@property (nonatomic) BOOL hasSecondPassCheckerModelKeywordDetectionStartTimeInNs;
@property (nonatomic) unsigned long long secondPassCheckerModelKeywordDetectionEndTimeInNs;
@property (nonatomic) BOOL hasSecondPassCheckerModelKeywordDetectionEndTimeInNs;
@property (copy, nonatomic) NSString *triggerPhrase;
@property (nonatomic) BOOL hasTriggerPhrase;
@property (nonatomic) double lastDisplayWakeTimeOffsetInNs;
@property (nonatomic) BOOL hasLastDisplayWakeTimeOffsetInNs;
@property (nonatomic) BOOL isHSJSTriggerFromAlwaysOnMicBuffer;
@property (nonatomic) BOOL hasIsHSJSTriggerFromAlwaysOnMicBuffer;
@property (nonatomic) unsigned long long displayWakeTimeOffsetInNs;
@property (nonatomic) BOOL hasDisplayWakeTimeOffsetInNs;
@property (nonatomic) float neptuneDetectionApiScore;
@property (nonatomic) BOOL hasNeptuneDetectionApiScore;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteDidWakeAP;
- (void)deleteDisplayWakeTimeOffsetInNs;
- (void)deleteIsBargeIn;
- (void)deleteLastConsecutivePHSRejects;
- (void)deleteRecognizerThresholdOffset;
- (void)deleteThreshold;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteAnalyzerPrependingSamples;
- (void)deleteTriggerFireTimeOffsetInNs;
- (void)deleteActiveChannel;
- (void)deleteAnalyzerTrailingSamples;
- (void)deleteAudioProviderUUID;
- (void)deleteBiometricClue;
- (void)deleteCaptureFilePath;
- (void)deleteClientStartSampleCount;
- (void)deleteConfigDataHash;
- (void)deleteConfigPath;
- (void)deleteConfigVersion;
- (void)deleteCumulativeDowntimeInSec;
- (void)deleteCumulativeUptimeInSec;
- (void)deleteDeltaTimeInNsFromlastPHSReject;
- (void)deleteDeviceHandheld;
- (void)deleteDidAudioStall;
- (void)deleteDowntimeInSec;
- (void)deleteEffectiveThreshold;
- (void)deleteEnhancedCarplayTriggerMode;
- (void)deleteExtraSamplesAtStart;
- (void)deleteHardwareSamplerate;
- (void)deleteHostPowerStateAtTrigger;
- (void)deleteIsContinuous;
- (void)deleteIsHSJSTriggerFromAlwaysOnMicBuffer;
- (void)deleteIsMaximized;
- (void)deleteIsMediaPlaying;
- (void)deleteIsSecondChance;
- (void)deleteIsTriggerEvent;
- (void)deleteIsWakeFromSleep;
- (void)deleteLastConsecutiveVTRejects;
- (void)deleteLastDisplayWakeTimeOffsetInNs;
- (void)deleteMediaVolume;
- (void)deleteNeptuneDetectionApiScore;
- (void)deleteOnBatteryPower;
- (void)deleteRecognizerScaleFactor;
- (void)deleteRecognizerScore;
- (void)deleteRecognizerWaitTimeInNs;
- (void)deleteRemoteMicVADMyriadThreshold;
- (void)deleteRemoteMicVADScore;
- (void)deleteRemoteMicVADThreshold;
- (void)deleteSatBeingTrained;
- (void)deleteSatNumTrainingUtterances;
- (void)deleteSatScore;
- (void)deleteSatThreshold;
- (void)deleteSatTriggered;
- (void)deleteSecondPassAnalyerEndSampleCount;
- (void)deleteSecondPassAnalyerStartSampleCount;
- (void)deleteSecondPassAssetLoadCompleteTimeInNs;
- (void)deleteSecondPassAssetLoadStartTimeInNs;
- (void)deleteSecondPassAssetQueryCompleteTimeInNs;
- (void)deleteSecondPassAssetQueryStartTimeInNs;
- (void)deleteSecondPassAudioStreamReadyTimeInNs;
- (void)deleteSecondPassAudioStreamStartTimeInNs;
- (void)deleteSecondPassCheckerModelKeywordDetectionEndTimeInNs;
- (void)deleteSecondPassCheckerModelKeywordDetectionStartTimeInNs;
- (void)deleteSecondPassFirstAudioPacketReceptionTimeInNs;
- (void)deleteSecondPassLastAudioPacketReceptionTimeInNs;
- (void)deleteShadowMicScore;
- (void)deleteShadowMicScoreThresholdForVAD;
- (void)deleteSiriIsActiveOrOtherAssertion;
- (void)deleteTdSpeakerRecognizerCombinationWeight;
- (void)deleteTdSpeakerRecognizerCombinedScore;
- (void)deleteTdSpeakerRecognizerCombinedThreshold;
- (void)deleteTdSpeakerRecognizerScore;
- (void)deleteTotalSampleCount;
- (void)deleteTotalSamplesAtEndOfCapture;
- (void)deleteTotalSamplesAtTriggerEnd;
- (void)deleteTotalSamplesAtTriggerStart;
- (void)deleteTriggerDurationInNs;
- (void)deleteTriggerEndNs;
- (void)deleteTriggerEndSampleCount;
- (void)deleteTriggerEndTime;
- (void)deleteTriggerEndTimeOffsetInNs;
- (void)deleteTriggerExplicitSatScore;
- (void)deleteTriggerExplicitTDSRSatScore;
- (void)deleteTriggerFireNs;
- (void)deleteTriggerFireSampleCount;
- (void)deleteTriggerFiredTime;
- (void)deleteTriggerPhrase;
- (void)deleteTriggerScore;
- (void)deleteTriggerStartNs;
- (void)deleteTriggerStartSampleCount;
- (void)deleteTriggerStartTime;
- (void)deleteTriggerStartTimeOffsetInNs;
- (void)deleteTwoShotAudibleFeedbackDelayInNs;
- (void)deleteUptimeInSec;
- (id)suppressMessageUnderConditions;

@end
