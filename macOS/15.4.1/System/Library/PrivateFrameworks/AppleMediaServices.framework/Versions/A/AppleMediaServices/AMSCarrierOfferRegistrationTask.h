@class AMSURLRequestEncoder, NSString, NSArray, AMSBagKeySet, ACAccount, AMSPromise, AMSURLSession, AMSProcessInfo;
@protocol AMSBagProtocol;

@interface AMSCarrierOfferRegistrationTask : AMSTask <AMSBagConsumer>

@property (class, readonly) NSString *bagSubProfile;
@property (class, readonly) NSString *bagSubProfileVersion;
@property (class, readonly) AMSBagKeySet *bagKeySet;

@property (readonly) NSArray *carriers;
@property (readonly) AMSURLRequestEncoder *checkOfferRequestEncoder;
@property (readonly) NSString *deviceGUID;
@property (readonly) NSString *msisdn;
@property (readonly) AMSURLRequestEncoder *registrationRequestEncoder;
@property (readonly) AMSURLSession *urlSession;
@property (readonly) AMSPromise *pacTokenPromise;
@property (readonly) Class privacyMappingResolver;
@property (readonly) ACAccount *account;
@property (readonly) id<AMSBagProtocol> bag;
@property (retain) AMSProcessInfo *clientInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createBagForSubProfile;
+ (id)invalidParameterError:(id)a0;
+ (id)pollingIntervalFromBag:(id)a0;

- (void).cxx_destruct;
- (id)perform;
- (id)_allowedServiceIdentifiersFromPrivacyMapping:(id)a0;
- (id)_checkOffersBodyLimitedByAllowedServiceIdentifiers:(id)a0;
- (id)_checkOffersRequestLimitedByAllowedServiceIdentifiers:(id)a0;
- (id)_evaluationRequiredPrivacyMappingPair;
- (id)_hasOffersLimitedByAllowedServiceIdentifiers:(id)a0;
- (id)_includesAllowedCarrier;
- (id)_pacToken;
- (id)_parseCheckOffersResult:(id)a0;
- (id)_performRegistrationFlowLimitedByAllowedServiceIdentifiers:(id)a0;
- (id)_registerCarrierOffersToAccountLimitedByAllowedServiceIdentifiers:(id)a0;
- (id)_registrationBodyLimitedByAllowedServiceIdentifiers:(id)a0;
- (id)_registrationRequestLimitedByAllowedServiceIdentifiers:(id)a0;
- (id)initWithAccount:(id)a0 bag:(id)a1;
- (id)initWithAccount:(id)a0 bag:(id)a1 carriers:(id)a2 checkOfferRequestEncoder:(id)a3 deviceGUID:(id)a4 msisdn:(id)a5 pacTokenPromise:(id)a6 privacyMappingResolver:(Class)a7 registrationRequestEncoder:(id)a8 urlSession:(id)a9;
- (id)initWithAccount:(id)a0 bag:(id)a1 carriers:(id)a2 deviceGUID:(id)a3 msisdn:(id)a4;

@end
