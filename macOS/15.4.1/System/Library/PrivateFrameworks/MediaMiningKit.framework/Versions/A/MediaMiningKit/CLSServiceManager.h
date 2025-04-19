@class CLSRoutineService, NSString, CLSSocialServiceContacts, CLSSocialServiceCoreNameParser, CLSSocialServiceCalendar, CLSPersonIdentity, CLSLRUMemoryCache;

@interface CLSServiceManager : NSObject <CLSSocialServiceContactsDelegate> {
    CLSSocialServiceContacts *_contactsService;
    CLSSocialServiceCalendar *_calendarService;
    CLSSocialServiceCoreNameParser *_coreNameParserService;
    CLSLRUMemoryCache *_personsCache;
}

@property (retain, nonatomic) CLSPersonIdentity *mePerson;
@property (readonly) CLSRoutineService *routineService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canAccessContactsStore;
+ (id)locationCacheForSwiftOnlyWithParentURL:(id)a0;

- (void).cxx_destruct;
- (id)contactsForIdentifiers:(id)a0;
- (id)personForIdentifier:(id)a0;
- (BOOL)isRemoteLocation:(id)a0 inDateInterval:(id)a1;
- (id)lastLocationOfInterestVisit;
- (id)locationOfInterestAtLocation:(id)a0;
- (id)locationOfInterestCloseToLocation:(id)a0 inDateInterval:(id)a1;
- (unsigned long long)numberOfLocationsOfInterest;
- (void)postProcessLocationsOfInterest;
- (BOOL)routineIsAvailable;
- (id)eventsForDates:(id)a0;
- (void)invalidateMomentaryMemoryCaches;
- (void)invalidatePermanentMemoryCaches;
- (void)enumerateAllPersonsUsingBlock:(id /* block */)a0;
- (void)enumerateEventsFromUniversalDate:(id)a0 toUniversalDate:(id)a1 usingBlock:(id /* block */)a2;
- (void)enumeratePersonsAndPotentialBirthdayDateForContactIdentifiers:(id)a0 usingBlock:(id /* block */)a1;
- (void)enumeratePersonsAndRelationshipUsingBlock:(id /* block */)a0;
- (void)enumeratePersonsForFullname:(id)a0 usingBlock:(id /* block */)a1;
- (void)enumeratePersonsForIdentifiers:(id)a0 usingBlock:(id /* block */)a1;
- (id)eventsForClueCollection:(id)a0;
- (unsigned long long)fetchFinerGranularityBusinessItemNumberForVisitIdentifier:(id)a0;
- (id)fetchImportantLocationsOfInterest;
- (id)fetchLocationOfInterestVisitsAtLocation:(id)a0 inDateInterval:(id)a1;
- (BOOL)hasAddressesForMePerson;
- (id)inferredDeviceOwnerForPhotoLibrary:(id)a0 ignoreContactLinking:(BOOL)a1;
- (id)initForSwiftOnlyWithAnonymousLocationCache:(id)a0;
- (id)initWithLocationCache:(id)a0;
- (void)invalidateCacheForPersonInContactStoreWithContactIdentifiers:(id)a0;
- (void)invalidateMePerson;
- (void)invalidatePersonsCacheForPersonsWithContactIdentifiers:(id)a0;
- (void)invalidatePersonsCacheForPersonsWithNames:(id)a0;
- (id)matchingDictionaryForContactIdentifier:(id)a0;
- (id)mePersonAddressesOfType:(unsigned long long)a0;
- (id)mePersonFetchContactIfNeeeded:(BOOL)a0;
- (id)mePersonForGraphIngest;
- (unsigned long long)numberOfCloseByLocationMatches;
- (unsigned long long)numberOfMatchRequests;
- (unsigned long long)numberOfRemoteLocationMatches;
- (unsigned long long)numberOfTimeMatches;
- (unsigned long long)numberOfVisits;
- (id)personForName:(id)a0 inPhotoLibrary:(id)a1;
- (id)personForPersonHandle:(id)a0;
- (id)personLocalIdentifierMatchingContactPictureForContactIdentifier:(id)a0;
- (id)personResultForName:(id)a0 inPhotoLibrary:(id)a1;
- (id)personResultsForName:(id)a0 inPhotoLibrary:(id)a1;
- (id)personsFromEventParticipants:(id)a0 excludeCurrentUser:(BOOL)a1;
- (id)personsInContactStoreForContactIdentifiers:(id)a0 needsRefetching:(BOOL)a1 progressBlock:(id /* block */)a2;
- (double)pinningVisitsRatio;
- (id)predominantLocationMobilityForDateInterval:(id)a0 confidence:(double *)a1;
- (void)prefetchEventsFromUniversalDate:(id)a0 toUniversalDate:(id)a1 forAssetCollectionsSortedByStartDate:(id)a2 usingBlock:(id /* block */)a3;
- (unsigned long long)relationshipHintForPerson:(id)a0 usingLocales:(id)a1;
- (unsigned long long)sexHintForPerson:(id)a0 usingLocales:(id)a1;
- (id)workCalendarEventsMatchingContactIdentifiers:(id)a0 fromUniversalDate:(id)a1 toUniversalDate:(id)a2;

@end
