@class NSString, NSData;

@interface LACUIAuthenticatorServiceConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) NSString *iconPath;
@property (retain, nonatomic) NSString *subtitle;
@property (retain, nonatomic) NSString *prompt;
@property (retain, nonatomic) NSString *verifyPrompt;
@property (retain, nonatomic) NSString *cancelButtonTitle;
@property (retain, nonatomic) NSString *fallbackButtonTitle;
@property (retain, nonatomic) NSString *passwordFieldPlaceholder;
@property (readonly, nonatomic) unsigned long long requirement;
@property (nonatomic) long long passcodeLength;
@property (nonatomic) unsigned long long mode;
@property (readonly, nonatomic) NSData *contextData;
@property (nonatomic) unsigned long long style;
@property (nonatomic) BOOL headerHidden;
@property (nonatomic) BOOL requiresIntent;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithContext:(id)a0;
- (id)initWithContext:(id)a0 requirement:(unsigned long long)a1 options:(id)a2;
- (id)initWithContext:(id)a0 requirement:(unsigned long long)a1;
- (id)validateConfiguration;

@end
