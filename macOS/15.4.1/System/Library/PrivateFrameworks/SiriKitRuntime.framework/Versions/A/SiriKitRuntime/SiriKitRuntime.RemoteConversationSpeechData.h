@interface SiriKitRuntime.RemoteConversationSpeechData : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ rcId;
    void /* unknown type, empty encoding */ asrOnDevice;
    void /* unknown type, empty encoding */ userSpecificInfoForRecognizedUser;
    void /* unknown type, empty encoding */ userSpecificInfoForUserMeetingSessionThreshold;
    void /* unknown type, empty encoding */ remoteRequestWasMadeInSession;
    void /* unknown type, empty encoding */ speechPackage;
    void /* unknown type, empty encoding */ utterance;
    void /* unknown type, empty encoding */ responseLanguageVariant;
    void /* unknown type, empty encoding */ requestLanguageVariant;
    void /* unknown type, empty encoding */ genAIFallbackSuppressReason;
    void /* unknown type, empty encoding */ asrLocation;
    void /* unknown type, empty encoding */ nlLocation;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
