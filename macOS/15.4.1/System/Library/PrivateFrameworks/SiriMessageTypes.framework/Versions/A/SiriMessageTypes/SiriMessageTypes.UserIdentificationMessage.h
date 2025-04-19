@class NSString;

@interface SiriMessageTypes.UserIdentificationMessage : SiriMessageTypes.RequestMessageBase {
    void /* unknown type, empty encoding */ userClassification;
    void /* unknown type, empty encoding */ userIdScores;
    void /* unknown type, empty encoding */ voiceIdScoreCard;
    void /* unknown type, empty encoding */ userMeetsRecencyThreshold;
    void /* unknown type, empty encoding */ selectedUserIds;
}

@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;

@end
