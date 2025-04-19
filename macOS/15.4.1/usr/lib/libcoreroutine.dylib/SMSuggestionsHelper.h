@class RTDeviceLocationPredictor, RTContactsManager, RTMapServiceManager, RTNavigationManager, RTLearnedLocationStore, SMSessionStore, SMEligibilityChecker, NSString, RTLearnedLocationManager, RTHealthKitManager, RTLocation, RTLocationManager, RTAuthorizationManager, RTDistanceCalculator;

@interface SMSuggestionsHelper : RTService <SMSuggestionsHelperProtocol>

@property (readonly, copy, nonatomic) RTAuthorizationManager *authorizationManager;
@property (readonly, copy, nonatomic) RTContactsManager *contactsManager;
@property (readonly, copy, nonatomic) RTDeviceLocationPredictor *deviceLocationPredictor;
@property (readonly, copy, nonatomic) RTDistanceCalculator *distanceCalculator;
@property (readonly, copy, nonatomic) RTHealthKitManager *healthKitManager;
@property (readonly, copy, nonatomic) RTLearnedLocationStore *learnedLocationStore;
@property (readonly, copy, nonatomic) RTLearnedLocationManager *learnedLocationManager;
@property (readonly, copy, nonatomic) RTLocationManager *locationManager;
@property (readonly, copy, nonatomic) RTMapServiceManager *mapServiceManager;
@property (readonly, copy, nonatomic) RTNavigationManager *navigationManager;
@property (copy, nonatomic) RTLocation *latestLocationOfTheDevice;
@property (copy, nonatomic) SMSessionStore *sessionStore;
@property (copy, nonatomic) SMEligibilityChecker *eligibilityChecker;
@property (nonatomic) BOOL routineEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createMasqueradingReferenceLocationFromFenceInfo:(id)a0 placeInference:(id)a1 error:(id *)a2;
+ (id)createMasqueradingReferenceLocationFromFenceRadius:(double)a0 location:(id)a1 error:(id *)a2;
+ (id)dedupeSessionConfigurations:(id)a0;
+ (id)getSMContactInformationFromSMHandle:(id)a0;
+ (id)getSMHandlesFromFAFamilyMembers:(id)a0 error:(id *)a1;
+ (id)getSMHandlesFromRTContact:(id)a0 error:(id *)a1;
+ (id)getSMHandlesFromRTContacts:(id)a0 error:(id *)a1;
+ (BOOL)isContactBlocked:(id)a0 error:(id *)a1;
+ (BOOL)isValidDistance:(double)a0;
+ (id)placeInferenceFromNPLOI:(id)a0;

- (void).cxx_destruct;
- (void)_filterHandles:(id)a0 options:(id)a1 handler:(id /* block */)a2;
- (void)_computeMostlikelySessionDestinations:(id)a0 closestHome:(id)a1 distanceToClosestHome:(double)a2 nploisWithValidDistanceAndHighConfidence:(id)a3 fenceSizeForMapItem:(id)a4 placeInferences:(id)a5 errors:(id)a6 handler:(id /* block */)a7;
- (id)_dedupePlaceInferencesWithOrder:(id)a0;
- (void)_fetchMostLikelyReceiverHandlesWithHandler:(id /* block */)a0;
- (void)_fetchMostLikelyReceiverHandlesWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)_fetchMostLikelySessionDestinationsWithHandler:(id /* block */)a0;
- (void)_fetchMostLikelySessionDestinationsWithRefreshedLocationWithHandler:(id /* block */)a0;
- (void)_getFAFamilyMembersFromAAAFamilyWithHandler:(id /* block */)a0;
- (void)_getNPLOIsWithOnlyHighConfidence:(BOOL)a0 location:(id)a1 date:(id)a2 handler:(id /* block */)a3;
- (void)_getSessionConfigurationsWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)_onAuthorizationNotification:(id)a0;
- (id)_placeInferenceFromLOI:(id)a0;
- (void)_refreshCurrentLocationWithHandler:(id /* block */)a0;
- (id)_submitMetricForFetchMostLikelyReceiverHandlesDidComplete:(BOOL)a0 didFetchSessionConfigurations:(BOOL)a1 didFetchEmergencyContacts:(BOOL)a2 didFetchICloudFamily:(BOOL)a3 didFetchFavorites:(BOOL)a4 timeout:(double)a5;
- (id)_submitMetricForFetchMostLikelySessionDestinationsWithRefreshedLocationDidComplete:(BOOL)a0 didFetchNavigationRouteSummary:(BOOL)a1 didFetchLOIs:(BOOL)a2 didFetchNPLOIs:(BOOL)a3 didFetchSessionConfigurations:(BOOL)a4 timeout:(double)a5;
- (id)canonicalizeHandles:(id)a0;
- (void)fetchMostLikelyReceiverHandlesWithHandler:(id /* block */)a0;
- (void)fetchMostLikelyReceiverHandlesWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)fetchMostLikelySessionDestinationsWithHandler:(id /* block */)a0;
- (void)fetchNumEmergencyRecipientsWithReceiverHandles:(id)a0 handler:(id /* block */)a1;
- (void)fetchNumFavoriteRecipientsWithReceiverHandles:(id)a0 handler:(id /* block */)a1;
- (void)fetchNumiCloudFamilyRecipientsWithReceiverHandles:(id)a0 handler:(id /* block */)a1;
- (void)getEmergencyHandles:(id /* block */)a0;
- (void)getFavoriteContactHandles:(id /* block */)a0;
- (void)getFavoriteHandles:(id /* block */)a0;
- (void)getNPLOIsWithOnlyHighConfidence:(BOOL)a0 location:(id)a1 date:(id)a2 handler:(id /* block */)a3;
- (void)getSessionConfigurationsWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)getiCloudFamilyHandles:(id /* block */)a0;
- (id)initWithAuthorizationManager:(id)a0 contactsManager:(id)a1 deviceLocationPredictor:(id)a2 distanceCalculator:(id)a3 healthKitManager:(id)a4 learnedLocationStore:(id)a5 learnedLocationManager:(id)a6 locationManager:(id)a7 mapServiceManager:(id)a8 navigationManager:(id)a9 sessionStore:(id)a10 eligibilityChecker:(id)a11;
- (void)onAuthorizationNotification:(id)a0;
- (void)refreshCurrentLocationWithHandler:(id /* block */)a0;

@end
