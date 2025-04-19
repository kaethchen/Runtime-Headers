@class NSString, NSArray, AMSDeviceOfferEligibilityTask, AMSDeviceOfferRegistrationPrivacyValidator, NSSet, AMSBagKeySet, ACAccount, AMSURLSession, AMSProcessInfo;
@protocol AMSBagProtocol, AMSDeviceOffersTracking;

@interface AMSDeviceOfferRegistrationTask : AMSTask <AMSBagConsumer>

@property (class, readonly) NSString *bagSubProfile;
@property (class, readonly) NSString *bagSubProfileVersion;
@property (class, readonly) AMSBagKeySet *bagKeySet;

@property (retain) ACAccount *account;
@property (retain) id<AMSBagProtocol> bag;
@property (readonly) AMSDeviceOfferEligibilityTask *eligibilityTask;
@property (readonly) NSString *deviceGUID;
@property (readonly) NSString *masterSerialNumber;
@property (readonly) id<AMSDeviceOffersTracking> deviceOffersStore;
@property (readonly) AMSDeviceOfferRegistrationPrivacyValidator *privacyValidator;
@property (retain) AMSURLSession *urlSession;
@property BOOL ignoreRegistrationDenyList;
@property BOOL lightweightCheckOnly;
@property (retain) AMSProcessInfo *clientInfo;
@property (retain) NSSet *offerIdentifiers;
@property (retain) NSArray *registrationGroups;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createBagForSubProfile;

- (void).cxx_destruct;
- (id)perform;
- (id)_accountEligibleSerialsFromDeviceOffers:(id)a0 accountOffers:(id)a1;
- (id)_bucketedOffers:(id)a0;
- (id)_companionSerialNumbers;
- (id)_deviceOffersURL;
- (id)_eligibilityQualifiedRegistrationGroupsWithAccount:(id)a0 pendingRegistrationGroups:(id)a1;
- (id)_filteredRegistrationGroups:(id)a0;
- (id)_handleRegistrationResult:(id)a0;
- (BOOL)_isDeviceGroupRegistrationAllowed;
- (BOOL)_isEligibilityCallsAllowed;
- (BOOL)_isRegistrationAllowed;
- (id)_latestDeviceGroups;
- (id)_latestOffersWithFetchedDeviceOffers:(id)a0 offersStore:(id)a1;
- (id)_lightweightDeviceOffersURL;
- (id)_offersDecodedFromResult:(id)a0;
- (id)_performLightweightRequestWithAccount:(id)a0;
- (id)_performRegistrationRequestWithAccount:(id)a0;
- (id)_registrationEndpointPOSTCompanionBodyWithDeviceGroups:(id)a0 companionSerialNumbers:(id)a1;
- (id)_registrationEndpointPOSTDeviceGroupsBody:(id)a0;
- (id)_registrationEndpointPOSTParametersWithRegistrationGroups:(id)a0 companionSerialNumbers:(id)a1;
- (id)_registrationGroupsFrom:(id)a0 matching:(id)a1;
- (id)_registrationRequestEncoderWithAccount:(id)a0;
- (id)_sanitizedResultPromise:(id)a0;
- (id)_serialNumberDenyList;
- (void)_updateWithDeviceOffers:(id)a0;
- (id)_urlRequestWithBagURL:(id)a0;
- (id)initWithAccount:(id)a0 bag:(id)a1;
- (id)initWithAccount:(id)a0 bag:(id)a1 deviceGUID:(id)a2 deviceOffersStore:(id)a3 eligibilityTask:(id)a4 masterSerialNumber:(id)a5 privacyValidator:(id)a6 urlSession:(id)a7;

@end
