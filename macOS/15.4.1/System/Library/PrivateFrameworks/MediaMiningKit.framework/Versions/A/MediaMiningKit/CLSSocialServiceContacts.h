@class GDVisualIdentifierViewPerson, NSMutableDictionary, CNContact, CLSPersonIdentity, CNContactStore, CLSLocationCache, NSMutableSet, NSObject, NSMutableArray;
@protocol OS_os_log, GDVisualIdentifierView, SGSuggestionsServiceContactsProtocol, CLSSocialServiceContactsDelegate;

@interface CLSSocialServiceContacts : CLSSocialService {
    NSObject<OS_os_log> *_log;
    CNContactStore *_contactStore;
    CLSLocationCache *_locationCache;
    CNContact *_meContact;
    id<GDVisualIdentifierView> _visualIdentifierView;
    CLSPersonIdentity *_mePerson;
    GDVisualIdentifierViewPerson *_meViewPerson;
    NSMutableArray *_allPersons;
    NSMutableDictionary *_personsForCNIdentifiers;
    NSMutableDictionary *_personsInContactStoreForCNIdentifiers;
    NSMutableDictionary *_personsForGDIdentifiers;
    NSMutableDictionary *_personsForLocalIdentifier;
    id<SGSuggestionsServiceContactsProtocol> _suggestionsService;
}

@property (retain, nonatomic) NSMutableDictionary *personByFullName;
@property (retain, nonatomic) NSMutableSet *nonFoundFullNames;
@property (retain, nonatomic) NSMutableDictionary *personByHandle;
@property (retain, nonatomic) NSMutableSet *nonFoundHandles;
@property (weak, nonatomic) id<CLSSocialServiceContactsDelegate> delegate;

+ (BOOL)canAccessContactsStore;
+ (id)defaultKeysToFetch;

- (void).cxx_destruct;
- (id)contactsForIdentifiers:(id)a0;
- (id)suggestionsService;
- (id)personForIdentifier:(id)a0;
- (id)_initializeVisualIdentifierView;
- (id)__newPersonWithContact:(id)a0 viewPerson:(id)a1;
- (void)_addAddressesToPerson:(id)a0 withContact:(id)a1;
- (void)_addDelegateAddressesToPerson:(id)a0 ofType:(unsigned long long)a1;
- (void)_addMissingPropertiesToPerson:(id)a0 withViewPerson:(id)a1;
- (unsigned long long)_ageCategoryFromFaceAgeType:(unsigned short)a0;
- (id)_allPersons;
- (id)_cnPostalAddressForGDLocationAddress:(id)a0;
- (float)_confidenceInPersonRecord:(id)a0 viewPerson:(id)a1 forName:(id)a2 components:(id)a3;
- (id)_firstNameForPersonRecord:(id)a0;
- (id)_fullNameWithContact:(id)a0;
- (float)_fuzzyMatchingScoreBetweenNameComponents:(id)a0 andNameComponents:(id)a1;
- (id)_lastNameForPersonRecord:(id)a0;
- (id)_maidenNameForPersonRecord:(id)a0;
- (id)_nicknameForPersonRecord:(id)a0;
- (id)_personResultsForPersonLocalIdentifier:(id)a0 isLackingFaces:(out BOOL *)a1 inPhotoLibrary:(id)a2;
- (id)_personResultsForfullName:(id)a0;
- (id)_personWithContact:(id)a0 viewPerson:(id)a1 createPersonIfNeeded:(BOOL)a2;
- (id)_personWithContactIdentifier:(id)a0;
- (id)_personsMatchingPredicate:(id)a0;
- (unsigned long long)_relationshipForContact:(id)a0;
- (unsigned long long)_relationshipForLabel:(id)a0;
- (unsigned long long)_sexFromFaceBiologicalSex:(unsigned short)a0;
- (id)contactsByIdentifierForIdentifiers:(id)a0;
- (void)enumerateAllPersonsUsingBlock:(id /* block */)a0;
- (void)enumeratePersonsAndPotentialBirthdayDateForContactIdentifiers:(id)a0 usingBlock:(id /* block */)a1;
- (void)enumeratePersonsAndRelationshipUsingBlock:(id /* block */)a0;
- (void)enumeratePersonsForFullName:(id)a0 usingBlock:(id /* block */)a1;
- (void)enumeratePersonsForIdentifiers:(id)a0 usingBlock:(id /* block */)a1;
- (id)fetchMeCardFromContactStore:(id)a0;
- (id)inferredDeviceOwnerForPhotoLibrary:(id)a0 ignoreContactLinking:(BOOL)a1;
- (id)initWithLocationCache:(id)a0;
- (void)invalidateCacheForPersonInContactStoreWithContactIdentifiers:(id)a0;
- (void)invalidateCacheForPersonWithContactIdentifiers:(id)a0;
- (void)invalidateCacheForPersonWithLocalIdentifiers:(id)a0;
- (void)invalidateMePerson;
- (void)invalidateMemoryCaches;
- (id)matchingDictionaryForContactIdentifier:(id)a0;
- (id)mePerson;
- (id)personForPersonHandle:(id)a0;
- (id)personLocalIdentifierMatchingContactPictureForContactIdentifier:(id)a0;
- (id)personResultsForName:(id)a0 inPhotoLibrary:(id)a1;
- (id)personsInContactStoreForContactIdentifiers:(id)a0 needsRefetching:(BOOL)a1 progressBlock:(id /* block */)a2;
- (id)potentialBirthdayDateForCNIdentifier:(id)a0 fullName:(id)a1;
- (void)refreshMeContactIfNeeded;
- (id)visionCacheStorageDirectoryURLForPhotoLibrary:(id)a0;

@end
