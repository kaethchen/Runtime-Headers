@class NSString, EWSPhoneNumberDictionaryType, EWSCompleteNameType, NSArray, EWSPhysicalAddressDictionaryType, EWSPhysicalAddressIndexType, NSDateComponents, EWSEmailAddressDictionaryType, EWSImAddressDictionaryType;

@interface EWSContactItemType : EWSItemType

@property (copy, nonatomic) NSString *FileAs;
@property (nonatomic) long long FileAsMapping;
@property (copy, nonatomic) NSString *DisplayName;
@property (copy, nonatomic) NSString *GivenName;
@property (copy, nonatomic) NSString *Initials;
@property (copy, nonatomic) NSString *MiddleName;
@property (copy, nonatomic) NSString *Nickname;
@property (retain, nonatomic) EWSCompleteNameType *CompleteName;
@property (copy, nonatomic) NSString *CompanyName;
@property (retain, nonatomic) EWSEmailAddressDictionaryType *EmailAddresses;
@property (retain, nonatomic) EWSPhysicalAddressDictionaryType *PhysicalAddresses;
@property (retain, nonatomic) EWSPhoneNumberDictionaryType *PhoneNumbers;
@property (copy, nonatomic) NSString *AssistantName;
@property (retain, nonatomic) NSDateComponents *Birthday;
@property (copy, nonatomic) NSString *BusinessHomePage;
@property (copy, nonatomic) NSArray *Children;
@property (copy, nonatomic) NSArray *Companies;
@property (copy, nonatomic) NSString *ContactSource;
@property (copy, nonatomic) NSString *Department;
@property (copy, nonatomic) NSString *Generation;
@property (retain, nonatomic) EWSImAddressDictionaryType *ImAddresses;
@property (copy, nonatomic) NSString *JobTitle;
@property (copy, nonatomic) NSString *Manager;
@property (copy, nonatomic) NSString *Mileage;
@property (copy, nonatomic) NSString *OfficeLocation;
@property (retain, nonatomic) EWSPhysicalAddressIndexType *PostalAddressIndex;
@property (copy, nonatomic) NSString *Profession;
@property (copy, nonatomic) NSString *SpouseName;
@property (copy, nonatomic) NSString *Surname;
@property (retain, nonatomic) NSDateComponents *WeddingAnniversary;

+ (id)definition;

- (void).cxx_destruct;

@end
