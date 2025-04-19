@interface VoiceActions.VAAVSVerifierModel : VoiceActions.VAVerifierModel {
    void /* unknown type, empty encoding */ avsConfig;
    void /* unknown type, empty encoding */ verifierModel;
    void /* unknown type, empty encoding */ endpointer;
    void /* unknown type, empty encoding */ enrollmentData;
    void /* unknown type, empty encoding */ enrolledCommands;
    void /* unknown type, empty encoding */ enrolledCommandsReduced;
    void /* unknown type, empty encoding */ customCostMultiplier;
    void /* unknown type, empty encoding */ minCmdCost;
    void /* unknown type, empty encoding */ maxCmdCost;
    void /* unknown type, empty encoding */ defaultCmdCost;
    void /* unknown type, empty encoding */ shortCmdLength;
    void /* unknown type, empty encoding */ minShortCmdCost;
    void /* unknown type, empty encoding */ maxShortCmdCost;
    void /* unknown type, empty encoding */ enrollmentsRejected;
    void /* unknown type, empty encoding */ rejectEnrollmentThreshold;
    void /* unknown type, empty encoding */ rejectCandidateThreshold;
    void /* unknown type, empty encoding */ minEnrollmentsBeforeRejecting;
    void /* unknown type, empty encoding */ personalizedKeywordThresholds;
}

@end
