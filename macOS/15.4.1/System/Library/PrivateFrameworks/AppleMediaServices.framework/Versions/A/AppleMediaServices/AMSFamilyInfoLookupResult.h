@class NSDictionary, NSArray, NSNumber;

@interface AMSFamilyInfoLookupResult : NSObject

@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly, getter=isCached) BOOL cached;
@property (readonly) NSArray *familyMembers;
@property (readonly) NSNumber *headOfHouseholdICloudDSID;
@property (readonly, getter=isHeadOfHouseholdSharingPayment) BOOL headOfHouseholdSharingPayment;

+ (id)_familyMembersFromDictionaryRepresentation:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0 cached:(BOOL)a1;

@end
