@interface SecureSpeakerRecognitionConfigDecoder : NSObject {
    void /* unknown type, empty encoding */ kSRCategoryKey;
    void /* unknown type, empty encoding */ kSRPhraseKey;
    void /* unknown type, empty encoding */ kSRPhraseNameKey;
    void /* unknown type, empty encoding */ defaultPhraseName;
    void /* unknown type, empty encoding */ kSatScoreThreshold;
    void /* unknown type, empty encoding */ kSatStrongAcceptThreshold;
    void /* unknown type, empty encoding */ kSatStrongRejectThreshold;
    void /* unknown type, empty encoding */ kPsrCombinationWeight;
    void /* unknown type, empty encoding */ defaultPsrCombinationWeight;
    void /* unknown type, empty encoding */ kSatImplicitProfileThreshold;
    void /* unknown type, empty encoding */ kSatImplicitProfileDeltaThreshold;
    void /* unknown type, empty encoding */ kSatVTImplicitThreshold;
    void /* unknown type, empty encoding */ kPruningExplicitUttThresholdSAT;
    void /* unknown type, empty encoding */ kPruningExplicitUttThresholdPSR;
    void /* unknown type, empty encoding */ kPruningThresholdSAT;
    void /* unknown type, empty encoding */ kPruningThresholdPSR;
    void /* unknown type, empty encoding */ kPruningNumRetentionUtterance;
    void /* unknown type, empty encoding */ defaultPruningNumRetentionUtterance;
    void /* unknown type, empty encoding */ kMaxAllowedEnrollmentUtterances;
    void /* unknown type, empty encoding */ kSSRMaxEnrollmentUtterancesDefault;
    void /* unknown type, empty encoding */ kVoiceProfilePruningCookie;
    void /* unknown type, empty encoding */ kKeywordDetectorQuasarConfigFile;
    void /* unknown type, empty encoding */ kKeywordDetectorNDAPIConfigFile;
    void /* unknown type, empty encoding */ kAssetDefaultCategoryKey;
    void /* unknown type, empty encoding */ kAssetDefaultVoiceTriggerSecondPassCategoryKey;
    void /* unknown type, empty encoding */ kSatImplicitTrainingEnabledKey;
    void /* unknown type, empty encoding */ kMultiUserHighScoreThresholdKey;
    void /* unknown type, empty encoding */ kMultiUserLowScoreThresholdKey;
    void /* unknown type, empty encoding */ kMultiUserConfidentScoreThresholdKey;
    void /* unknown type, empty encoding */ kMultiUserDeltaScoreThresholdKey;
    void /* unknown type, empty encoding */ kUseSpeakerRecognitionAssetKey;
    void /* unknown type, empty encoding */ kUseTDTIEnrollment;
    void /* unknown type, empty encoding */ kSATMemoryIndex;
    void /* unknown type, empty encoding */ kPSRMemoryIndex;
    void /* unknown type, empty encoding */ kSATConfig;
    void /* unknown type, empty encoding */ kPSRConfig;
    void /* unknown type, empty encoding */ defaultSATConfig;
    void /* unknown type, empty encoding */ defaultPSRConfig;
    void /* unknown type, empty encoding */ kNumPruningRetentionUtt;
    void /* unknown type, empty encoding */ defaultNumPruningRetentionUtt;
    void /* unknown type, empty encoding */ kSatScoreThresholdDefault;
    void /* unknown type, empty encoding */ kMultiUserHighScoreThresholdDefault;
    void /* unknown type, empty encoding */ kMultiUserLowScoreThresholdDefault;
    void /* unknown type, empty encoding */ kMultiUserConfidentScoreThresholdDefault;
    void /* unknown type, empty encoding */ kMultiUserDeltaScoreThresholdDefault;
}

- (id)init;
- (void).cxx_destruct;
- (id)decode:(id)a0;

@end
