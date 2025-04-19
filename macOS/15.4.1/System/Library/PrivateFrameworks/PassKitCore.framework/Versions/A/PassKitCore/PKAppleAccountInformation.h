@class NSString, NSDate;

@interface PKAppleAccountInformation : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *aidaAlternateDSID;
@property (copy, nonatomic) NSString *aidaToken;
@property (copy, nonatomic) NSString *aaDSID;
@property (copy, nonatomic) NSString *aaAlternateDSID;
@property (copy, nonatomic) NSString *appleID;
@property (nonatomic) BOOL isSandboxAccount;
@property (copy, nonatomic) NSString *firstName;
@property (copy, nonatomic) NSString *lastName;
@property (copy, nonatomic) NSString *primaryEmailAddress;
@property (retain, nonatomic) NSDate *creationDate;
@property (nonatomic) BOOL isManagedAppleAccount;
@property (nonatomic) BOOL isWalletEnabledOnManagedAppleAccount;
@property (copy, nonatomic) NSString *authorizationHeader;
@property (nonatomic) long long ageCategory;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)aidaAccountAvailable;
- (BOOL)aidaAccountRequiresAuthentication;
- (id)altDsidAppleAccountHash;
- (id)primaryAppleAccountHash;

@end
