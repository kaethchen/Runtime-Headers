@class NSString, NSArray, NSPersonNameComponents, NSURL;

@interface TUMutableCallDisplayContext : TUCallDisplayContext

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSPersonNameComponents *personNameComponents;
@property (copy, nonatomic) NSString *firstName;
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
@property (nonatomic) int legacyAddressBookIdentifier;

+ (BOOL)supportsSecureCoding;

- (void)mergeValuesFromDisplayContext:(id)a0;

@end
