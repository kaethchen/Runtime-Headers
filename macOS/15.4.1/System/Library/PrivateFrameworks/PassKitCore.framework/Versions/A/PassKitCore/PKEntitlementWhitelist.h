@class NSString, NSArray;

@interface PKEntitlementWhitelist : NSObject {
    int _processIdentifier;
    BOOL _carKeyCredentialProvisioning;
}

@property (readonly) BOOL passesAllAccess;
@property (readonly) BOOL passesOverviewAccess;
@property (readonly) BOOL passesEntangledAccess;
@property (readonly) BOOL passesAddSilently;
@property (readonly) BOOL passesAddUnsigned;
@property (readonly) BOOL passPresentationSuppression;
@property (readonly) BOOL passPresentationSuppressionFromBackground;
@property (readonly) BOOL paymentAllAccess;
@property (readonly) BOOL paymentConfiguration;
@property (readonly) BOOL paymentPresentation;
@property (readonly) BOOL applePayTrustAllAccess;
@property (readonly) BOOL inAppPayments;
@property (readonly) BOOL inAppPaymentsPrivate;
@property (readonly) BOOL webPayments;
@property (readonly) BOOL winterpegPayments;
@property (readonly) BOOL cardOnFilePayments;
@property (readonly) BOOL AMPCardEnrollment;
@property (readonly) BOOL externalizedContextPayments;
@property (readonly) BOOL trustedDeviceEnrollmentInfo;
@property (readonly) BOOL peerPaymentAllAccess;
@property (readonly) BOOL featuresAllAccess;
@property (readonly) BOOL searchAllAccess;
@property (readonly) BOOL secureElementPassProvisioning;
@property (readonly) BOOL secureElementPassProvisioningForMAIDs;
@property (readonly) BOOL paymentPassProvisioning;
@property (readonly) BOOL sharingAllAccess;
@property (readonly) BOOL appleMediaServicesPrivate;
@property (readonly) BOOL carKeyPassThroughAccess;
@property (readonly) BOOL generateSecurePassData;
@property (readonly) BOOL payLaterPayInFourMerchandising;
@property (readonly) BOOL badgeCountItemsAccess;
@property (readonly) BOOL remoteNetworkPaymentInitiate;
@property (readonly) BOOL credentialStateAccess;
@property (readonly) BOOL shareableCredentialProvisioning;
@property (readonly) BOOL carKeyCredentialProvisioning;
@property (readonly, copy) NSString *applicationID;
@property (readonly, copy) NSString *developerTeamID;
@property (readonly, copy) NSArray *merchantIdentifiers;
@property (readonly, copy) NSArray *teamIDs;
@property (readonly, copy) NSArray *passTypeIDs;
@property (readonly, copy) NSArray *passTypeIDPrefixes;
@property (readonly) BOOL supportsWebPayments;
@property (readonly) BOOL allAccess;

+ (BOOL)supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (id)initWithConnection:(id)a0;
- (id)_arrayValueOfEntitlement:(id)a0 fromSecTask:(struct __SecTask { } *)a1;
- (BOOL)_boolValueOfEntitlement:(id)a0 fromSecTask:(struct __SecTask { } *)a1;
- (void *)_copyValueOfEntitlement:(id)a0 fromSecTask:(struct __SecTask { } *)a1;
- (BOOL)_probeEntitlementsWithAuditToken:(struct { unsigned int x0[8]; })a0;
- (id)_stringValueOfEntitlement:(id)a0 fromSecTask:(struct __SecTask { } *)a1;
- (BOOL)entitledToPerformPassAction:(unsigned long long)a0 pass:(id)a1;
- (BOOL)entitledToPerformPassAction:(unsigned long long)a0 passTypeID:(id)a1 teamID:(id)a2 associatedPassTypeIdentifiers:(id)a3 associatedApplicationIdentifiers:(id)a4;
- (id)initWithProcessIdentifier:(int)a0 auditToken:(struct { unsigned int x0[8]; })a1;
- (BOOL)isEntitledForAnyFromUniquePassTypeIDs:(id)a0;
- (BOOL)isEntitledForMerchantSession:(id)a0;
- (BOOL)isEntitledForPassTypeID:(id)a0;
- (BOOL)isEntitledForPaymentRequest:(id)a0;

@end
