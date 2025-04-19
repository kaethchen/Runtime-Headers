@class NSString;

@interface AMSKeychainOptions : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) unsigned long long preferredAttestationStyle;
@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *clientCertLabel;
@property (copy) NSString *intermediateCertLabel;
@property (copy) NSString *label;
@property unsigned long long purpose;
@property BOOL regenerateKeys;
@property unsigned long long style;
@property BOOL authenticationFallbackVisible;
@property BOOL displayAuthenticationReason;
@property (copy) NSString *prompt;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)optionsDictionary;
- (BOOL)_compareString:(id)a0 withString:(id)a1;
- (id)initWithOptionsDictionary:(id)a0;

@end
