@class NSString, NSArray, CCContactDate;

@interface CCContactContent : CCItemMessage <CCItemContent, CCItemFieldEnumerable, CCJSONDescribing>

@property (readonly, nonatomic) NSString *givenName;
@property (readonly, nonatomic) NSString *middleName;
@property (readonly, nonatomic) NSString *familyName;
@property (readonly, nonatomic) NSString *previousFamilyName;
@property (readonly, nonatomic) NSString *nickname;
@property (readonly, nonatomic) NSString *namePrefix;
@property (readonly, nonatomic) NSString *nameSuffix;
@property (readonly, nonatomic) NSArray *phoneNumbers;
@property (readonly, nonatomic) NSArray *emailAddresses;
@property (readonly, nonatomic) NSArray *postalAddresses;
@property (readonly, nonatomic) NSArray *urlAddresses;
@property (readonly, nonatomic) NSArray *socialProfiles;
@property (readonly, nonatomic) NSArray *instantMessageAddresses;
@property (readonly, nonatomic) NSArray *relations;
@property (readonly, nonatomic) NSString *organizationName;
@property (readonly, nonatomic) NSString *departmentName;
@property (readonly, nonatomic) NSString *jobTitle;
@property (readonly, nonatomic) NSString *phoneticGivenName;
@property (readonly, nonatomic) NSString *phoneticMiddleName;
@property (readonly, nonatomic) NSString *phoneticFamilyName;
@property (readonly, nonatomic) NSString *phoneticOrganizationName;
@property (readonly, nonatomic) NSString *note;
@property (readonly, nonatomic) CCContactDate *birthday;
@property (readonly, nonatomic) CCContactDate *nonGregorianBirthday;
@property (readonly, nonatomic) NSArray *dates;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (void).cxx_destruct;
- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (id)initWithGivenName:(id)a0 middleName:(id)a1 familyName:(id)a2 previousFamilyName:(id)a3 nickname:(id)a4 namePrefix:(id)a5 nameSuffix:(id)a6 phoneNumbers:(id)a7 emailAddresses:(id)a8 postalAddresses:(id)a9 urlAddresses:(id)a10 socialProfiles:(id)a11 instantMessageAddresses:(id)a12 relations:(id)a13 organizationName:(id)a14 departmentName:(id)a15 jobTitle:(id)a16 phoneticGivenName:(id)a17 phoneticMiddleName:(id)a18 phoneticFamilyName:(id)a19 phoneticOrganizationName:(id)a20 note:(id)a21 birthday:(id)a22 nonGregorianBirthday:(id)a23 dates:(id)a24 error:(id *)a25;

@end
