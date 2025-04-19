@class NSString, NSDictionary;

@interface SOFullProfile : SOProfile <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *extensionTeamIdentifier;
@property (retain, nonatomic) NSDictionary *extensionData;
@property (retain, nonatomic) NSString *pssoRegistrationToken;
@property (retain, nonatomic) NSDictionary *platformSSO;

+ (long long)screenLockedBehaviorWithString:(id)a0;
+ (long long)authMethodWithString:(id)a0;
+ (long long)profileTypeWithString:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyProfile;
- (id)copyProfileForClient;
- (id)initWithProfileData:(id)a0;
- (void)removeURLPrefix:(id)a0;

@end
