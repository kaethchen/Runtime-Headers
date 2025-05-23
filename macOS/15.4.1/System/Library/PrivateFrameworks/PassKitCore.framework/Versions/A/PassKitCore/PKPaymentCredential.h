@class PKSecureElementProvisioningState, NSString, NSArray, PKPaymentRequirementsResponse, PKPaymentEligibilityResponse;

@interface PKPaymentCredential : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long credentialType;
@property (copy, nonatomic) NSString *sanitizedPrimaryAccountNumber;
@property (copy, nonatomic) NSString *sanitizedPrimaryAccountName;
@property (copy, nonatomic) NSString *expiration;
@property (copy, nonatomic) NSString *longDescription;
@property (nonatomic) long long cardType;
@property (retain, nonatomic) NSArray *appletTypes;
@property (retain, nonatomic) PKSecureElementProvisioningState *state;
@property (nonatomic, getter=isDeletable) BOOL deletable;
@property (copy, nonatomic) NSArray *metadata;
@property (readonly, nonatomic) BOOL supportsSuperEasyProvisioning;
@property (readonly, nonatomic) BOOL couldSupportSuperEasyProvisioning;
@property (retain, nonatomic) NSArray *paymentApplications;
@property (retain, nonatomic) PKPaymentRequirementsResponse *requirementsResponse;
@property (retain, nonatomic) PKPaymentEligibilityResponse *eligibilityResponse;
@property (retain, nonatomic) NSString *secureElementReservationGroupIdentifier;

+ (id)fakeRemoteCredentials;

- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)carKeyTerminalPairingCredential;
- (BOOL)_isEqualToCredential:(id)a0;
- (id)_originalProvisioningDate;
- (id)accountCredential;
- (id)accountReferenceCredential;
- (id)appleBalanceCredential;
- (long long)compare:(id)a0 withBackedUpDefaultPaymentPassSerialNumber:(id)a1;
- (id)contactlessProductCredential;
- (id)detailDescriptionWithEnvironment:(unsigned long long)a0;
- (id)digitalIssuanceProductCredential;
- (id)externalOfferCredential;
- (id)homeKeyCredential;
- (id)identityCredential;
- (BOOL)isAccountCredential;
- (BOOL)isAccountReferenceCredential;
- (BOOL)isAppleBalanceCredential;
- (BOOL)isCarKeyTerminalPairingCredential;
- (BOOL)isContactlessProductCredential;
- (BOOL)isDigitalIssuanceProductCredential;
- (BOOL)isExternalOfferCredential;
- (BOOL)isHomeKeyCredential;
- (BOOL)isIdentityCredential;
- (BOOL)isIssuerProvisioningExtensionCredential;
- (BOOL)isLocalAppletSubcredentialPassCredential;
- (BOOL)isLocalPassCredential;
- (BOOL)isPeerPaymentCredential;
- (BOOL)isPrecursorCredential;
- (BOOL)isPurchasedProductCredential;
- (BOOL)isRemoteCredential;
- (BOOL)isSafariCredential;
- (BOOL)isShareableCredential;
- (BOOL)isStatefulTransferCredential;
- (id)issuerProvisioningExtensionCredential;
- (id)localAppletSubcredentialPassCredential;
- (id)localPassCredential;
- (id)peerPaymentCredential;
- (id)precursorCredential;
- (id)purchasedProductCredential;
- (id)remoteCredential;
- (id)safariCredential;
- (id)setupProductIdentifier;
- (id)shareableCredential;
- (id)statefulTransferCredential;
- (id)underlyingPaymentPass;

@end
