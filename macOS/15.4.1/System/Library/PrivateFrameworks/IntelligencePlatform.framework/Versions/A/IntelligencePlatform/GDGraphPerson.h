@class NSString, GDGraphPersonEntityIdentifier, NSPersonNameComponents, NSArray, NSDate, NSNumber;

@interface GDGraphPerson : NSObject <GDGraphObject>

@property (nonatomic, readonly) NSPersonNameComponents *suggestedNameComponentsInner;
@property (nonatomic, readonly) NSString *suggestedNameStringInner;
@property (nonatomic, readonly) NSString *suggestedContactIdentifierInner;
@property (nonatomic, readonly) long long autonamingSuggestionReasonInner;
@property (readonly, copy, nonatomic) GDGraphPersonEntityIdentifier *entityIdentifier;
@property (readonly, copy, nonatomic) NSArray *fullNames;
@property (readonly, copy, nonatomic) NSArray *prefixes;
@property (readonly, copy, nonatomic) NSArray *givenNames;
@property (readonly, copy, nonatomic) NSArray *phoneticGivenNames;
@property (readonly, copy, nonatomic) NSArray *middleNames;
@property (readonly, copy, nonatomic) NSArray *phoneticMiddleNames;
@property (readonly, copy, nonatomic) NSArray *familyNames;
@property (readonly, copy, nonatomic) NSArray *phoneticFamilyNames;
@property (readonly, copy, nonatomic) NSArray *previousFamilyNames;
@property (readonly, copy, nonatomic) NSArray *suffixes;
@property (readonly, copy, nonatomic) NSArray *nicknames;
@property (readonly, copy, nonatomic) NSArray *birthNames;
@property (readonly, copy, nonatomic) NSDate *birthday;
@property (readonly, copy, nonatomic) NSString *occupation;
@property (readonly, copy, nonatomic) NSNumber *isFavorite;
@property (readonly, copy, nonatomic) NSNumber *isCurrentUser;
@property (readonly, copy, nonatomic) NSNumber *isInferredDeviceUser;
@property (readonly, copy, nonatomic) NSArray *associatedPeople;
@property (readonly, copy, nonatomic) NSArray *locations;
@property (readonly, copy, nonatomic) NSArray *employers;
@property (readonly, copy, nonatomic) NSArray *topics;
@property (readonly, copy, nonatomic) NSArray *handles;
@property (readonly, copy, nonatomic) NSArray *identifiers;
@property (readonly, copy, nonatomic) NSString *contactIdentifier;
@property (readonly, copy, nonatomic) NSArray *visualIdentifiers;
@property (readonly, copy, nonatomic) NSArray *allBirthday;
@property (readonly, copy, nonatomic) NSArray *allOccupation;
@property (readonly, copy, nonatomic) NSArray *allIsFavorite;
@property (readonly, copy, nonatomic) NSArray *allIsCurrentUser;
@property (readonly, copy, nonatomic) NSArray *allIsInferredDeviceUser;
@property (readonly, copy, nonatomic) NSArray *allContactIdentifier;
@property (readonly, copy, nonatomic) Class graphObjectType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)suggestedContactIdentifier;
- (long long)autonamingSuggestionReason;
- (id)initWithEntityIdentifierField:(id)a0 fullNamesField:(id)a1 prefixesField:(id)a2 givenNamesField:(id)a3 phoneticGivenNamesField:(id)a4 middleNamesField:(id)a5 phoneticMiddleNamesField:(id)a6 familyNamesField:(id)a7 phoneticFamilyNamesField:(id)a8 previousFamilyNamesField:(id)a9 suffixesField:(id)a10 nicknamesField:(id)a11 birthNamesField:(id)a12 birthdayField:(id)a13 occupationField:(id)a14 isFavoriteField:(id)a15 isCurrentUserField:(id)a16 isInferredDeviceUserField:(id)a17 associatedPeopleField:(id)a18 locationsField:(id)a19 employersField:(id)a20 topicsField:(id)a21 handlesField:(id)a22 identifiersField:(id)a23 contactIdentifierField:(id)a24 visualIdentifiersField:(id)a25 allBirthdayField:(id)a26 allOccupationField:(id)a27 allIsFavoriteField:(id)a28 allIsCurrentUserField:(id)a29 allIsInferredDeviceUserField:(id)a30 allContactIdentifierField:(id)a31;
- (id)suggestedNameComponents;
- (id)suggestedNameString;

@end
