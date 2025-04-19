@class NSString, NSNumber, NSDictionary;

@interface ISAuthenticationContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property BOOL demoMode;
@property BOOL demoAutologinMode;
@property (retain) NSString *demoAccountName;
@property (retain) NSString *demoAccountPassword;
@property (readonly) NSNumber *accountID;
@property (retain) NSDictionary *additionalQueryParameters;
@property long long authenticationStyle;
@property long long authenticationReason;
@property long long bagType;
@property (retain) NSDictionary *signUpQueryParameters;
@property BOOL shouldFollowAccountButtons;
@property BOOL useCachedCredentials;
@property (retain) NSString *appleIDOverride;
@property BOOL enforceAppleIDOverride;
@property (retain) NSString *applicationName;
@property (retain) NSDictionary *dialogDictionary;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAccountID:(id)a0;

@end
