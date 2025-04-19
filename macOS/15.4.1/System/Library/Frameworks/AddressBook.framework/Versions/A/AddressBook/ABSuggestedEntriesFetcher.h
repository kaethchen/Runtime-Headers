@class NSString, NSMutableDictionary, ABPersonEntry, ABAddressBook;

@interface ABSuggestedEntriesFetcher : NSObject

@property (retain, nonatomic) ABAddressBook *addressBook;
@property (retain, nonatomic) NSString *filterTerms;
@property (retain, nonatomic) NSMutableDictionary *entries;
@property (retain, nonatomic) ABPersonEntry *meEntry;

+ (id)keyDescriptor;
+ (id)abInstantMessageAddressFromInstantMessageAddress:(id)a0;
+ (id)abPostalAddressDictionaryFromPosstalAddress:(id)a0;
+ (id)abSocialProfileFromSocialProfile:(id)a0;
+ (id)sanitizedLabelFromLabel:(id)a0;

- (void).cxx_destruct;
- (void)fetchEntries;
- (id)initWithAddressBook:(id)a0 filterTerms:(id)a1;
- (id)resultEntriesByUID;
- (id)entriesByUIDForContacts:(id)a0 createMeEntry:(BOOL)a1;
- (void)fetchMeEntry;
- (id)fetchSuggestedContacts;
- (id)fetchSuggestedMeContact;
- (id)multiValueWithInstantMessageAddresses:(id)a0;
- (id)multiValueWithLabeledValues:(id)a0;
- (id)multiValueWithPhoneNumbers:(id)a0;
- (id)multiValueWithPostalAddresses:(id)a0;
- (id)multiValueWithSocialProfiles:(id)a0;
- (id)personFromContact:(id)a0;
- (id)resultMeEntry;

@end
