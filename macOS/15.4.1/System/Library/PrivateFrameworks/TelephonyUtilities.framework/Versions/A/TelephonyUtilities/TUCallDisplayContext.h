@class NSString, NSArray, NSPersonNameComponents, NSURL;

@interface TUCallDisplayContext : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSPersonNameComponents *personNameComponents;
@property (copy, nonatomic) NSString *suggestedName;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *companyName;
@property (copy, nonatomic) NSString *companyDepartment;
@property (copy, nonatomic) NSURL *companyLogoURL;
@property (copy, nonatomic) NSString *mapName;
@property (copy, nonatomic) NSString *location;
@property (copy, nonatomic) NSString *contactName;
@property (copy, nonatomic) NSString *contactLabel;
@property (copy, nonatomic) NSString *callDirectoryLabel;
@property (copy, nonatomic) NSString *callDirectoryLocalizedExtensionContainingAppName;
@property (copy, nonatomic) NSString *callDirectoryExtensionIdentifier;
@property (nonatomic) long long callDirectoryIdentityType;
@property (copy, nonatomic) NSString *contactIdentifier;
@property (copy, nonatomic) NSArray *contactIdentifiers;
@property (readonly, copy, nonatomic) NSString *firstName;
@property (readonly, nonatomic) int legacyAddressBookIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setFirstName:(id)a0;
- (id)displayContextByMergingWithDisplayContext:(id)a0;

@end
