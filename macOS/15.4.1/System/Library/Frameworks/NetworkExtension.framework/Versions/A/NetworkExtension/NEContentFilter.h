@class NEPerApp, NEFilterProviderConfiguration;

@interface NEContentFilter : NSObject <NEConfigurationValidating, NEPrettyDescription, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property BOOL enableManualMode;
@property (getter=isEnabled) BOOL enabled;
@property BOOL disableEncryptedDNSSettings;
@property (copy) NEFilterProviderConfiguration *provider;
@property (copy) NEPerApp *perApp;
@property (nonatomic) long long grade;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)checkValidityAndCollectErrors:(id)a0;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;

@end
