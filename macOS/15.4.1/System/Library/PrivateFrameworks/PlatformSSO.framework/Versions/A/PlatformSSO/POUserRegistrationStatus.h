@class NSString;

@interface POUserRegistrationStatus : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, getter=isPlatformSSOEnabled) BOOL platformSSOEnabled;
@property (retain, nonatomic) NSString *loginUserName;
@property (nonatomic) long long authenticationMethod;
@property (nonatomic) long long userRegistrationStatus;
@property (nonatomic, getter=isActionButtonEnabled) BOOL actionButtonEnabled;
@property (nonatomic) long long actionButtonAction;
@property (nonatomic) long long userTokenStatus;
@property (nonatomic, getter=isAuthenticateButtonEnabled) BOOL authenticateButtonEnabled;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
