@class NSDate, NSString, NSArray, NSURL, NSDictionary, NSDateComponents, ABCNContactIdentifier;

@interface ABCNContact : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    ABCNContact *_snapshot;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDate *creationDateForMailOnly;
@property (readonly, copy, nonatomic) NSURL *quicklookURL;
@property (readonly, copy, nonatomic) NSString *fullName;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) NSString *phoneticFullName;
@property (readonly, copy, nonatomic) NSString *sortingFirstName;
@property (readonly, copy, nonatomic) NSString *sortingLastName;
@property (readonly, copy, nonatomic) NSDate *creationDate;
@property (readonly, copy, nonatomic) NSArray *calendarURIs;
@property (readonly, copy, nonatomic) ABCNContact *snapshot;
@property (readonly, copy, nonatomic) NSArray *linkedContacts;
@property (readonly, nonatomic, getter=isUnified) BOOL unified;
@property (readonly, copy, nonatomic) NSString *identifierString;
@property (readonly, copy, nonatomic) NSString *cardDAVUID;
@property (readonly, copy, nonatomic) NSString *accountIdentifier;
@property (readonly, copy, nonatomic) NSString *linkIdentifier;
@property (readonly, copy, nonatomic) NSString *phonemeData;
@property (readonly, copy, nonatomic) NSDictionary *ringtone;
@property (readonly, copy, nonatomic) NSDictionary *texttone;
@property (readonly, copy, nonatomic) NSDictionary *alertTones;
@property (readonly, nonatomic, getter=isPreferredForName) BOOL preferredForName;
@property (readonly, nonatomic, getter=isPreferredForPhoto) BOOL preferredForPhoto;
@property (readonly, copy, nonatomic) ABCNContactIdentifier *identifier;
@property (readonly, copy, nonatomic) NSString *nameTitle;
@property (readonly, copy, nonatomic) NSString *firstName;
@property (readonly, copy, nonatomic) NSString *middleName;
@property (readonly, copy, nonatomic) NSString *lastName;
@property (readonly, copy, nonatomic) NSString *nameSuffix;
@property (readonly, copy, nonatomic) NSString *maidenName;
@property (readonly, copy, nonatomic) NSString *nickname;
@property (readonly, copy, nonatomic) NSString *phoneticFirstName;
@property (readonly, copy, nonatomic) NSString *phoneticMiddleName;
@property (readonly, copy, nonatomic) NSString *phoneticLastName;
@property (readonly, copy, nonatomic) NSString *companyName;
@property (readonly, copy, nonatomic) NSString *phoneticCompanyName;
@property (readonly, copy, nonatomic) NSString *departmentName;
@property (readonly, copy, nonatomic) NSString *jobTitle;
@property (readonly, copy, nonatomic) NSString *preferredLikenessSource;
@property (readonly, copy, nonatomic) NSString *preferredApplePersonaIdentifier;
@property (readonly, copy, nonatomic) NSDateComponents *birthdayComponents;
@property (readonly, copy, nonatomic) NSDateComponents *alternateBirthdayComponents;
@property (readonly, copy, nonatomic) NSDate *birthday;
@property (readonly, copy, nonatomic) NSString *note;
@property (readonly, nonatomic) long long displayStyle;
@property (readonly, nonatomic) long long nameOrder;
@property (readonly, copy, nonatomic) NSArray *phoneNumbers;
@property (readonly, copy, nonatomic) NSArray *emailAddresses;
@property (readonly, copy, nonatomic) NSArray *urlAddresses;
@property (readonly, copy, nonatomic) NSArray *otherDateComponents;
@property (readonly, copy, nonatomic) NSArray *otherDates;
@property (readonly, copy, nonatomic) NSArray *instantMessageAddresses;
@property (readonly, copy, nonatomic) NSArray *relatedNames;
@property (readonly, copy, nonatomic) NSArray *socialProfiles;
@property (readonly, copy, nonatomic) NSArray *postalAddresses;

+ (id)contact;
+ (id)contactWithIdentifier:(id)a0;
+ (id)contactWithIdentifierString:(id)a0;
+ (id)identifierProvider;
+ (id)makeIdentifier;
+ (id)makeIdentifierString;
+ (id)predicateForIdentifiers:(id)a0;
+ (id)predicateForMembersOfGroupWithIdentifier:(id)a0;
+ (id /* block */)preferredPhotoComparator;
+ (id)unifyContacts:(id)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (BOOL)hasChanges;
- (id)initWithContact:(id)a0;
- (BOOL)isEqualIgnoringIdentifiers:(id)a0;
- (BOOL)areAllPropertiesEqualToContact:(id)a0;
- (BOOL)areAllPropertiesEqualToContactIgnoringIdentifiers:(id)a0;
- (id)copyWithSelfAsSnapshot;
- (id)diffToSnapshot;
- (BOOL)isProperty:(id)a0 equalToOtherIgnoreIdentifiers:(id)a1;
- (id)linkedIdentifierMap;

@end
