@interface MNNavigationServiceCallback_DidChangeVoiceGuidanceLevel : MNNavigationServiceCallbackParameters

@property (nonatomic) unsigned long long voiceGuidanceLevel;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)type;

@end
