@class NSString, NSData, NSPersonNameComponents;

@interface CRKUser : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *userIdentifier;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *givenName;
@property (copy, nonatomic) NSString *familyName;
@property (copy, nonatomic) NSString *phoneticGivenName;
@property (copy, nonatomic) NSString *phoneticFamilyName;
@property (copy, nonatomic) NSString *imageIdentifier;
@property (copy, nonatomic) NSString *imageURL;
@property (copy, nonatomic) NSString *userSource;
@property (nonatomic, getter=shouldUseMeCardIfAvailable) BOOL useMeCardIfAvailable;
@property (copy, nonatomic) NSData *userImageData;
@property (nonatomic) long long role;
@property (readonly, copy, nonatomic) NSPersonNameComponents *nameComponents;
@property (readonly, nonatomic) BOOL isMeCardUser;
@property (readonly, nonatomic) BOOL isValid;

+ (id)customUserFromMeCardUser:(id)a0;
+ (id)makeMeCardUserProvider;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryValue;
- (BOOL)isEqualToUser:(id)a0;

@end
