@class NSString;

@interface SiriUIVoiceProfileProvider : NSObject <NSSecureCoding> {
    NSString *_siriLocale;
    NSString *_appDomain;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *siriLocale;
@property (readonly, nonatomic) NSString *appDomain;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)generateVoiceProfile;
- (id)initWithSiriLocale:(id)a0 appDomain:(id)a1;

@end
