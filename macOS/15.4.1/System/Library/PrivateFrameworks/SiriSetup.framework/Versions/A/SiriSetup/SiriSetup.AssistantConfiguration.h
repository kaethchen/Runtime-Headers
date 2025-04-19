@class NSString;

@interface SiriSetup.AssistantConfiguration : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ hasVoiceProfileInCloud;
    void /* unknown type, empty encoding */ siriEnabled;
    void /* unknown type, empty encoding */ siriLanguage;
    void /* unknown type, empty encoding */ siriSharedUserId;
    void /* unknown type, empty encoding */ siriVoice;
    void /* unknown type, empty encoding */ recognizeMyVoiceEnabled;
    void /* unknown type, empty encoding */ voiceTriggerEnabled;
    void /* unknown type, empty encoding */ siriInCallEnabled;
    void /* unknown type, empty encoding */ siriDataSharingStatus;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
