@class NSString, CNContact, NSArray, NSData, ABPerson, ABAddressBook;

@interface IMPerson : NSObject

@property (readonly, nonatomic) ABPerson *_abPerson;
@property (retain, nonatomic, setter=_setCustomBook:) ABAddressBook *_customBook;
@property (retain, nonatomic, setter=_setUniqueID:) NSString *uniqueID;
@property (retain, nonatomic) NSString *cachedFirstName;
@property (retain, nonatomic) NSString *cachedLastName;
@property (retain, nonatomic) NSString *cachedFullName;
@property (retain, nonatomic) NSString *cachedCompanyName;
@property (retain, nonatomic) NSString *cachedNickName;
@property (readonly, nonatomic) BOOL _registered;
@property (retain, nonatomic) CNContact *cnContact;
@property (readonly, nonatomic) ABPerson *abPerson;
@property (readonly, copy, nonatomic) NSString *cnContactID;
@property (readonly, nonatomic) BOOL isInAddressBook;
@property (readonly, nonatomic) NSArray *groups;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *fullName;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSString *abbreviatedName;
@property (copy, nonatomic) NSString *nickname;
@property (copy, nonatomic) NSString *firstName;
@property (copy, nonatomic) NSString *lastName;
@property (readonly, nonatomic) BOOL isCompany;
@property (readonly, nonatomic) NSString *companyName;
@property (copy, nonatomic) NSArray *emails;
@property (readonly, nonatomic) NSArray *allEmails;
@property (retain, nonatomic) NSArray *phoneNumbers;
@property (readonly, nonatomic) NSArray *mobileNumbers;
@property (retain, nonatomic) NSData *imageData;
@property (readonly, nonatomic) NSData *imageDataWithoutLoading;
@property (readonly, nonatomic) unsigned long long status;

+ (id)allPeople;
+ (id)_initialABPropertyLabelForProperty:(id)a0;
+ (void)_setCachedQueriesEnabled:(BOOL)a0;
+ (id)existingABPeopleWithInstantMessageAddress:(id)a0 onServices:(id)a1 allowSubstringMatch:(BOOL)a2;
+ (id)existingABPersonForPerson:(id)a0;
+ (id)existingABPersonWithFirstName:(id)a0 andLastName:(id)a1 andNickName:(id)a2 orEmail:(id)a3 orNumber:(id)a4;
+ (id)existingABPersonWithFirstName:(id)a0 andLastName:(id)a1 andNickName:(id)a2 orEmail:(id)a3 orNumber:(id)a4 countryCode:(id)a5 identifier:(int *)a6;
+ (id)existingABPersonWithFirstName:(id)a0 andLastName:(id)a1 andNickName:(id)a2 orEmail:(id)a3 orNumber:(id)a4 identifier:(int *)a5;
+ (id)existingABPersonWithFirstName:(id)a0 andLastName:(id)a1 orEmail:(id)a2;
+ (id)existingABPersonWithFirstName:(id)a0 andLastName:(id)a1 orEmail:(id)a2 orNumber:(id)a3;
+ (id)existingABPersonWithFirstName:(id)a0 lastName:(id)a1;
+ (id)existingABPersonWithInstantMessageAddress:(id)a0 onServices:(id)a1 allowSubstringMatch:(BOOL)a2;
+ (id)personWithABPerson:(id)a0;
+ (BOOL)shouldPurgeCacheForIMPerson:(id)a0;

- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)save;
- (id)linkedPeople;
- (id)cnContactWithKeys:(id)a0;
- (void)setFirstName:(id)a0 lastName:(id)a1;
- (void)updateCNContact:(id)a0;
- (void)_abPersonChanged:(id)a0;
- (id)allHandlesForProperty:(id)a0;
- (void)appendID:(id)a0 toProperty:(id)a1;
- (BOOL)containsHandle:(id)a0 forServiceProperty:(id)a1;
- (id)emailHandlesForService:(id)a0;
- (id)emailHandlesForService:(id)a0 includeBaseEmail:(BOOL)a1;
- (id)initWithABPerson:(id)a0;
- (BOOL)isEqualToIMPerson:(id)a0;
- (void)setValues:(id)a0 forIMProperty:(id)a1;
- (void)setValues:(id)a0 forProperty:(id)a1;
- (id)valuesForIMProperty:(id)a0;
- (id)valuesForProperty:(id)a0;

@end
