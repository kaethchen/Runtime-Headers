@class _PASLock, NSMutableSet, _CDInteractionStore;

@interface _PSContactSuggesterForPeopleWidget : NSObject

@property (retain, nonatomic) _PASLock *candidateContacts;
@property (retain, nonatomic) NSMutableSet *priorityFamilyMembers;
@property (retain, nonatomic) NSMutableSet *nonpriorityFamilyMembers;
@property (retain, nonatomic) _CDInteractionStore *interactionStore;

- (id)init;
- (void).cxx_destruct;
- (id)contactKeysToFetch;
- (id)allEmailAndPhoneNumberHandlesForContact:(id)a0;
- (id)contactSuggestionsWithMaxSuggestions:(long long)a0 excludeContactsWithIdentifiers:(id)a1;
- (id)familyMemberContactHandles;
- (id)familyRecommendedContacts;
- (id)favoritedContacts;
- (id)iCloudFamilyMembers;
- (id)interactionBasedRecommendedContacts;
- (void)processFamilyMember:(id)a0 toFillContactArray:(id)a1;

@end
