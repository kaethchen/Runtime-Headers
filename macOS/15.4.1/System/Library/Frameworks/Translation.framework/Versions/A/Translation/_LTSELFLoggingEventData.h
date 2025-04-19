@class _LTSELFLoggingTranslationTTSData, NSUUID, NSString, _LTSELFLoggingTranslationLIDData, _LTSELFLoggingInvocationOptions, NSError, _LTLocalePair;

@interface _LTSELFLoggingEventData : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSUUID *invocationId;
@property (retain, nonatomic) _LTSELFLoggingInvocationOptions *startInvocationOptions;
@property (copy, nonatomic) NSUUID *qssSessionId;
@property (copy, nonatomic) NSError *invocationEndedError;
@property (copy, nonatomic) NSString *invocationCancelledReason;
@property (copy, nonatomic) NSString *translationPayload;
@property (copy, nonatomic) _LTLocalePair *translationLocalePair;
@property (retain, nonatomic) _LTSELFLoggingTranslationTTSData *translationTTSData;
@property (retain, nonatomic) _LTSELFLoggingTranslationLIDData *translationLIDData;
@property (copy, nonatomic) NSString *untrustedClientIdentifier;
@property (copy, nonatomic) NSString *trustedClientIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithType:(long long)a0 invocationId:(id)a1;

@end
