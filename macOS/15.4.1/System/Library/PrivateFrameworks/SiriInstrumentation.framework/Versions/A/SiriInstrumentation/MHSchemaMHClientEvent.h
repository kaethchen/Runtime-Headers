@class MHSchemaMHAssistantDaemonAudioStartRecordingContext, MHSchemaMHSpeechDetectorContext, MHSchemaMHVoiceProfileICloudSyncFinished, MHSchemaMHAssistantDaemonAudioRecordingFailureInsufficientPriority, MHSchemaMHDarwinConnectedDeviceWakeContext, MHSchemaMHEndpointDelayContext, MHSchemaMHRaiseToSpeakFirstPassPolicyTriggered, MHSchemaMHUserSpeakingContext, MHSchemaMHOdldFalseTriggerMitigated, MHSchemaMHAssistantDaemonAudioPrewarmContext, MHSchemaMHEndpointerAccessibleContext, MHSchemaMHAssistantDaemonAudioSessionSetInactiveContext, MHSchemaMHAssistantDaemonAudioRecordingFailed, MHSchemaMHAcousticFalseTriggerMitigationEvaluationContext, MHSchemaMHASRAudioConfigureStarted, MHSchemaMHVoiceTriggerRejectDetected, MHSchemaMHAttendingContext, MHSchemaMHStoppedListeningForSpeechContinuation, MHSchemaMHAssistantDaemonAudioLateBufferDetected, SISchemaInstrumentationMessage, MHSchemaMHAdaptiveSiriVolumeTTSVolumeQueried, MHSchemaMHOnDeviceEndpointerContext, MHSchemaMHAssistantDaemonAudioRecordingLastBufferContext, MHSchemaMHVoiceAdBlockerContext, MHSchemaMHRTSFalseRejectDetected, MHSchemaMHAssistantDaemonAudioConfigureContext, MHSchemaMHUnintendedResponseSuppressionEvaluationContext, MHSchemaMHAudioDucked, MHSchemaMHAssistantDaemonAudioRecordingContext, MHSchemaMHAssistantDaemonAudioRecordingInterruptionStartedTier1, NSData, MHSchemaMHServerEndpointerContext, MHSchemaMHAssistantDaemonAudioRecordingFirstBufferContext, MHSchemaMHCrownPressed, MHSchemaMHAssistantDaemonAudioInitContext, MHSchemaMHAssistantDaemonAudioRecordingMissedBufferDetected, MHSchemaMHApplicationPlaybackAttempted, MHSchemaMHEndpointerUsed, MHSchemaMHEndpointLatencyInfoReported, MHSchemaMHSpeakerFalseTriggerMitigated, MHSchemaMHLatticeFalseTriggerMitigationEvaluationContext, MHSchemaMHVoiceProfileOnboarded, MHSchemaMHSpeechStopDetected, MHSchemaMHSiriDirectedSpeechDetectionFailed, MHSchemaMHTRPCreated, MHSchemaMHAssistantDaemonAudioSessionSetActiveContext, MHSchemaMHAssistantDaemonAudioFetchRouteContext, MHSchemaMHVoiceTriggerRePrompted, MHSchemaMHAssistantDaemonAudioBluetoothInfo, MHSchemaMHAssistantDaemonAudioTwoShotTransitionContext, MHSchemaMHCarplayLanguageMismatch, MHSchemaMHAdaptiveSiriVolumeUserIntentDetected, MHSchemaMHUserEngagementFalseTriggerMitigationEvaluationContext, MHSchemaMHMitigationDecisionRecommended, SISchemaUUID, MHSchemaMHSiriLaunchRequestContext, MHSchemaMHAssistantDaemonAudioStopRecordingContext, MHSchemaMHRaiseToSpeakTriggered, MHSchemaMHAssistantDaemonAudioRecordingInterruptionContext, MHSchemaMHClientEventMetadata, MHSchemaMHVoiceTriggerContext, MHSchemaMHEndpointDetected, MHSchemaMHVoiceTriggerTwoShotDetected, MHSchemaMHRaiseToSpeakSecondPassPolicyDecisionMade, MHSchemaMHCoreSpeechPreprocessorCompleted, MHSchemaMHAssistantDaemonAudioPrepareContext;

@interface MHSchemaMHClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) SISchemaUUID *mhId;
@property (nonatomic) BOOL hasMhId;
@property (retain, nonatomic) MHSchemaMHClientEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) MHSchemaMHAcousticFalseTriggerMitigationEvaluationContext *acousticFalseTriggerMitigationEvaluationContext;
@property (nonatomic) BOOL hasAcousticFalseTriggerMitigationEvaluationContext;
@property (retain, nonatomic) MHSchemaMHLatticeFalseTriggerMitigationEvaluationContext *latticeFalseTriggerMitigationEvaluationContext;
@property (nonatomic) BOOL hasLatticeFalseTriggerMitigationEvaluationContext;
@property (retain, nonatomic) MHSchemaMHUnintendedResponseSuppressionEvaluationContext *unintendedResponseSuppressionExecutionContext;
@property (nonatomic) BOOL hasUnintendedResponseSuppressionExecutionContext;
@property (retain, nonatomic) MHSchemaMHCoreSpeechPreprocessorCompleted *coreSpeechPreprocessorCompleted;
@property (nonatomic) BOOL hasCoreSpeechPreprocessorCompleted;
@property (retain, nonatomic) MHSchemaMHASRAudioConfigureStarted *asrAudioConfigureStarted;
@property (nonatomic) BOOL hasAsrAudioConfigureStarted;
@property (retain, nonatomic) MHSchemaMHAssistantDaemonAudioInitContext *assistantDaemonAudioInitContext;
@property (nonatomic) BOOL hasAssistantDaemonAudioInitContext;
@property (retain, nonatomic) MHSchemaMHAssistantDaemonAudioConfigureContext *assistantDaemonAudioConfigureContext;
@property (nonatomic) BOOL hasAssistantDaemonAudioConfigureContext;
@property (retain, nonatomic) MHSchemaMHAssistantDaemonAudioPrepareContext *assistantDaemonAudioPrepareContext;
@property (nonatomic) BOOL hasAssistantDaemonAudioPrepareContext;
@property (retain, nonatomic) MHSchemaMHAssistantDaemonAudioPrewarmContext *assistantDaemonAudioPrewarmContext;
@property (nonatomic) BOOL hasAssistantDaemonAudioPrewarmContext;
@property (retain, nonatomic) MHSchemaMHAssistantDaemonAudioStartRecordingContext *assistantDaemonAudioStartRecordingContext;
@property (nonatomic) BOOL hasAssistantDaemonAudioStartRecordingContext;
@property (retain, nonatomic) MHSchemaMHAssistantDaemonAudioStopRecordingContext *assistantDaemonAudioStopRecordingContext;
@property (nonatomic) BOOL hasAssistantDaemonAudioStopRecordingContext;
@property (retain, nonatomic) MHSchemaMHAssistantDaemonAudioSessionSetActiveContext *assistantDaemonAudioSessionSetActiveContext;
@property (nonatomic) BOOL hasAssistantDaemonAudioSessionSetActiveContext;
@property (retain, nonatomic) MHSchemaMHAssistantDaemonAudioSessionSetInactiveContext *assistantDaemonAudioSessionSetInactiveContext;
@property (nonatomic) BOOL hasAssistantDaemonAudioSessionSetInactiveContext;
@property (retain, nonatomic) MHSchemaMHAssistantDaemonAudioFetchRouteContext *assistantDaemonAudioFetchRouteContext;
@property (nonatomic) BOOL hasAssistantDaemonAudioFetchRouteContext;
@property (retain, nonatomic) MHSchemaMHAssistantDaemonAudioRecordingContext *assistantDaemonAudioRecordingContext;
@property (nonatomic) BOOL hasAssistantDaemonAudioRecordingContext;
@property (retain, nonatomic) MHSchemaMHAssistantDaemonAudioRecordingMissedBufferDetected *assistantDaemonAudioRecordingMissedBufferDetected;
@property (nonatomic) BOOL hasAssistantDaemonAudioRecordingMissedBufferDetected;
@property (retain, nonatomic) MHSchemaMHAssistantDaemonAudioLateBufferDetected *assistantDaemonAudioLateBufferDetected;
@property (nonatomic) BOOL hasAssistantDaemonAudioLateBufferDetected;
@property (retain, nonatomic) MHSchemaMHAssistantDaemonAudioRecordingFirstBufferContext *assistantDaemonAudioRecordingFirstBufferContext;
@property (nonatomic) BOOL hasAssistantDaemonAudioRecordingFirstBufferContext;
@property (retain, nonatomic) MHSchemaMHAssistantDaemonAudioRecordingLastBufferContext *assistantDaemonAudioRecordingLastBufferContext;
@property (nonatomic) BOOL hasAssistantDaemonAudioRecordingLastBufferContext;
@property (retain, nonatomic) MHSchemaMHAssistantDaemonAudioRecordingInterruptionContext *assistantDaemonAudioRecordingInterruptionContext;
@property (nonatomic) BOOL hasAssistantDaemonAudioRecordingInterruptionContext;
@property (retain, nonatomic) MHSchemaMHAssistantDaemonAudioRecordingInterruptionStartedTier1 *assistantDaemonAudioRecordingInterruptionStartedTier1;
@property (nonatomic) BOOL hasAssistantDaemonAudioRecordingInterruptionStartedTier1;
@property (retain, nonatomic) MHSchemaMHAssistantDaemonAudioBluetoothInfo *assistantDaemonAudioBluetoothInfo;
@property (nonatomic) BOOL hasAssistantDaemonAudioBluetoothInfo;
@property (retain, nonatomic) MHSchemaMHVoiceTriggerTwoShotDetected *voiceTriggerTwoShotDetected;
@property (nonatomic) BOOL hasVoiceTriggerTwoShotDetected;
@property (retain, nonatomic) MHSchemaMHAssistantDaemonAudioTwoShotTransitionContext *assistantDaemonAudioTwoShotTransitionContext;
@property (nonatomic) BOOL hasAssistantDaemonAudioTwoShotTransitionContext;
@property (retain, nonatomic) MHSchemaMHVoiceTriggerContext *voiceTriggerContext;
@property (nonatomic) BOOL hasVoiceTriggerContext;
@property (retain, nonatomic) MHSchemaMHEndpointDetected *endpointDetected;
@property (nonatomic) BOOL hasEndpointDetected;
@property (retain, nonatomic) MHSchemaMHEndpointLatencyInfoReported *endpointLatencyInfoReported;
@property (nonatomic) BOOL hasEndpointLatencyInfoReported;
@property (retain, nonatomic) MHSchemaMHVoiceAdBlockerContext *adblockerContext;
@property (nonatomic) BOOL hasAdblockerContext;
@property (retain, nonatomic) MHSchemaMHOnDeviceEndpointerContext *onDeviceEndpointerContext;
@property (nonatomic) BOOL hasOnDeviceEndpointerContext;
@property (retain, nonatomic) MHSchemaMHServerEndpointerContext *serverEndpointerContext;
@property (nonatomic) BOOL hasServerEndpointerContext;
@property (retain, nonatomic) MHSchemaMHEndpointerUsed *endpointerUsed;
@property (nonatomic) BOOL hasEndpointerUsed;
@property (retain, nonatomic) MHSchemaMHEndpointDelayContext *endpointDelayContext;
@property (nonatomic) BOOL hasEndpointDelayContext;
@property (retain, nonatomic) MHSchemaMHMitigationDecisionRecommended *finalMitigationRecommendation;
@property (nonatomic) BOOL hasFinalMitigationRecommendation;
@property (retain, nonatomic) MHSchemaMHApplicationPlaybackAttempted *applicationPlaybackAttempted;
@property (nonatomic) BOOL hasApplicationPlaybackAttempted;
@property (retain, nonatomic) MHSchemaMHSiriLaunchRequestContext *siriLaunchRequestContext;
@property (nonatomic) BOOL hasSiriLaunchRequestContext;
@property (retain, nonatomic) MHSchemaMHEndpointerAccessibleContext *endpointerAccessibleContext;
@property (nonatomic) BOOL hasEndpointerAccessibleContext;
@property (retain, nonatomic) MHSchemaMHCarplayLanguageMismatch *carPlayLangaugeMismatched;
@property (nonatomic) BOOL hasCarPlayLangaugeMismatched;
@property (retain, nonatomic) MHSchemaMHDarwinConnectedDeviceWakeContext *darwinConnectedDeviceWakeContext;
@property (nonatomic) BOOL hasDarwinConnectedDeviceWakeContext;
@property (retain, nonatomic) MHSchemaMHOdldFalseTriggerMitigated *odldFalseTriggerMitigated;
@property (nonatomic) BOOL hasOdldFalseTriggerMitigated;
@property (retain, nonatomic) MHSchemaMHSpeakerFalseTriggerMitigated *speakerFalseTriggerMitigated;
@property (nonatomic) BOOL hasSpeakerFalseTriggerMitigated;
@property (retain, nonatomic) MHSchemaMHSiriDirectedSpeechDetectionFailed *siriDirectedSpeechDetectionFailed;
@property (nonatomic) BOOL hasSiriDirectedSpeechDetectionFailed;
@property (retain, nonatomic) MHSchemaMHAudioDucked *audioDucked;
@property (nonatomic) BOOL hasAudioDucked;
@property (retain, nonatomic) MHSchemaMHAssistantDaemonAudioRecordingFailed *audioRecordingFailed;
@property (nonatomic) BOOL hasAudioRecordingFailed;
@property (retain, nonatomic) MHSchemaMHRTSFalseRejectDetected *rtsFalseRejectDetected;
@property (nonatomic) BOOL hasRtsFalseRejectDetected;
@property (retain, nonatomic) MHSchemaMHTRPCreated *trpCreated;
@property (nonatomic) BOOL hasTrpCreated;
@property (retain, nonatomic) MHSchemaMHUserSpeakingContext *userSpeakingContext;
@property (nonatomic) BOOL hasUserSpeakingContext;
@property (retain, nonatomic) MHSchemaMHSpeechStopDetected *speechStopDetected;
@property (nonatomic) BOOL hasSpeechStopDetected;
@property (retain, nonatomic) MHSchemaMHSpeechDetectorContext *speechDetectorContext;
@property (nonatomic) BOOL hasSpeechDetectorContext;
@property (retain, nonatomic) MHSchemaMHStoppedListeningForSpeechContinuation *stoppedListeningForSpeechContinuation;
@property (nonatomic) BOOL hasStoppedListeningForSpeechContinuation;
@property (retain, nonatomic) MHSchemaMHUserEngagementFalseTriggerMitigationEvaluationContext *userEngagementModelContext;
@property (nonatomic) BOOL hasUserEngagementModelContext;
@property (retain, nonatomic) MHSchemaMHAttendingContext *attendingContext;
@property (nonatomic) BOOL hasAttendingContext;
@property (retain, nonatomic) MHSchemaMHCrownPressed *crownPressed;
@property (nonatomic) BOOL hasCrownPressed;
@property (retain, nonatomic) MHSchemaMHRaiseToSpeakTriggered *rtsTriggered;
@property (nonatomic) BOOL hasRtsTriggered;
@property (retain, nonatomic) MHSchemaMHRaiseToSpeakFirstPassPolicyTriggered *rtsFirstPassPolicyTriggered;
@property (nonatomic) BOOL hasRtsFirstPassPolicyTriggered;
@property (retain, nonatomic) MHSchemaMHRaiseToSpeakSecondPassPolicyDecisionMade *rtsSecondPassPolicyDecisionMade;
@property (nonatomic) BOOL hasRtsSecondPassPolicyDecisionMade;
@property (retain, nonatomic) MHSchemaMHVoiceProfileOnboarded *voiceProfileOnboarded;
@property (nonatomic) BOOL hasVoiceProfileOnboarded;
@property (retain, nonatomic) MHSchemaMHVoiceTriggerRePrompted *voiceTriggerRePrompted;
@property (nonatomic) BOOL hasVoiceTriggerRePrompted;
@property (retain, nonatomic) MHSchemaMHAssistantDaemonAudioRecordingFailureInsufficientPriority *assistantDaemonAudioRecordingFailureInsufficientPriority;
@property (nonatomic) BOOL hasAssistantDaemonAudioRecordingFailureInsufficientPriority;
@property (retain, nonatomic) MHSchemaMHVoiceProfileICloudSyncFinished *voiceProfileICloudSyncFinished;
@property (nonatomic) BOOL hasVoiceProfileICloudSyncFinished;
@property (retain, nonatomic) MHSchemaMHVoiceTriggerRejectDetected *voiceTriggerRejectDetected;
@property (nonatomic) BOOL hasVoiceTriggerRejectDetected;
@property (retain, nonatomic) MHSchemaMHAdaptiveSiriVolumeTTSVolumeQueried *adaptiveSiriVolumeTTSVolumeQueried;
@property (nonatomic) BOOL hasAdaptiveSiriVolumeTTSVolumeQueried;
@property (retain, nonatomic) MHSchemaMHAdaptiveSiriVolumeUserIntentDetected *adaptiveSiriVolumeUserIntentDetected;
@property (nonatomic) BOOL hasAdaptiveSiriVolumeUserIntentDetected;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

+ (id)getInnerTypeStringByTag:(unsigned long long)a0;
+ (int)joinability;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (int)componentName;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteCarPlayLangaugeMismatched;
- (void)deleteOdldFalseTriggerMitigated;
- (void)deleteOnDeviceEndpointerContext;
- (int)getAnyEventType;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (int)clockIsolationLevel;
- (void)deleteAcousticFalseTriggerMitigationEvaluationContext;
- (void)deleteAdaptiveSiriVolumeTTSVolumeQueried;
- (void)deleteAdaptiveSiriVolumeUserIntentDetected;
- (void)deleteAdblockerContext;
- (void)deleteApplicationPlaybackAttempted;
- (void)deleteAsrAudioConfigureStarted;
- (void)deleteAssistantDaemonAudioBluetoothInfo;
- (void)deleteAssistantDaemonAudioConfigureContext;
- (void)deleteAssistantDaemonAudioFetchRouteContext;
- (void)deleteAssistantDaemonAudioInitContext;
- (void)deleteAssistantDaemonAudioLateBufferDetected;
- (void)deleteAssistantDaemonAudioPrepareContext;
- (void)deleteAssistantDaemonAudioPrewarmContext;
- (void)deleteAssistantDaemonAudioRecordingContext;
- (void)deleteAssistantDaemonAudioRecordingFailureInsufficientPriority;
- (void)deleteAssistantDaemonAudioRecordingFirstBufferContext;
- (void)deleteAssistantDaemonAudioRecordingInterruptionContext;
- (void)deleteAssistantDaemonAudioRecordingInterruptionStartedTier1;
- (void)deleteAssistantDaemonAudioRecordingLastBufferContext;
- (void)deleteAssistantDaemonAudioRecordingMissedBufferDetected;
- (void)deleteAssistantDaemonAudioSessionSetActiveContext;
- (void)deleteAssistantDaemonAudioSessionSetInactiveContext;
- (void)deleteAssistantDaemonAudioStartRecordingContext;
- (void)deleteAssistantDaemonAudioStopRecordingContext;
- (void)deleteAssistantDaemonAudioTwoShotTransitionContext;
- (void)deleteAttendingContext;
- (void)deleteAudioDucked;
- (void)deleteAudioRecordingFailed;
- (void)deleteCoreSpeechPreprocessorCompleted;
- (void)deleteCrownPressed;
- (void)deleteDarwinConnectedDeviceWakeContext;
- (void)deleteEndpointDelayContext;
- (void)deleteEndpointDetected;
- (void)deleteEndpointLatencyInfoReported;
- (void)deleteEndpointerAccessibleContext;
- (void)deleteEndpointerUsed;
- (void)deleteEventMetadata;
- (void)deleteFinalMitigationRecommendation;
- (void)deleteLatticeFalseTriggerMitigationEvaluationContext;
- (void)deleteMhId;
- (void)deleteRtsFalseRejectDetected;
- (void)deleteRtsFirstPassPolicyTriggered;
- (void)deleteRtsSecondPassPolicyDecisionMade;
- (void)deleteRtsTriggered;
- (void)deleteServerEndpointerContext;
- (void)deleteSiriDirectedSpeechDetectionFailed;
- (void)deleteSiriLaunchRequestContext;
- (void)deleteSpeakerFalseTriggerMitigated;
- (void)deleteSpeechDetectorContext;
- (void)deleteSpeechStopDetected;
- (void)deleteStoppedListeningForSpeechContinuation;
- (void)deleteTrpCreated;
- (void)deleteUnintendedResponseSuppressionExecutionContext;
- (void)deleteUserEngagementModelContext;
- (void)deleteUserSpeakingContext;
- (void)deleteVoiceProfileICloudSyncFinished;
- (void)deleteVoiceProfileOnboarded;
- (void)deleteVoiceTriggerContext;
- (void)deleteVoiceTriggerRePrompted;
- (void)deleteVoiceTriggerRejectDetected;
- (void)deleteVoiceTriggerTwoShotDetected;
- (id)getComponentId;
- (id)qualifiedMessageName;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichInnerEventType;

@end
