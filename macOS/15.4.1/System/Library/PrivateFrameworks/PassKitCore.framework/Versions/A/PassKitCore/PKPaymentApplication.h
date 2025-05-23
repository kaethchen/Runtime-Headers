@class NSData, NSString, NSArray, PKFelicaPassProperties, NSSet, PKTransitPassProperties, NSDecimalNumber, NSNumber;

@interface PKPaymentApplication : NSObject <NSSecureCoding, NSCopying> {
    BOOL _foundVehicleReport;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSData *_readerIdentifier;
@property (retain, nonatomic) NSSet *associatedReaders;
@property (copy, nonatomic, setter=setDPANIdentifier:) NSString *dpanIdentifier;
@property (copy, nonatomic, setter=setDPANSuffix:) NSString *dpanSuffix;
@property (copy, nonatomic, setter=setSanitizedDPAN:) NSString *sanitizedDPAN;
@property (copy, nonatomic) NSString *applicationIdentifier;
@property (copy, nonatomic) NSString *secureElementIdentifier;
@property (nonatomic) long long state;
@property (readonly, nonatomic) NSString *stateAsString;
@property (copy, nonatomic) NSString *suspendedReason;
@property (nonatomic) BOOL supportsContactlessPayment;
@property (nonatomic) BOOL supportsInAppPayment;
@property (nonatomic) BOOL supportsMerchantTokens;
@property (nonatomic) BOOL hasMerchantTokens;
@property (nonatomic) BOOL hadMerchantTokens;
@property (copy, nonatomic, setter=setAPANIdentifier:) NSString *apanIdentifier;
@property (copy, nonatomic, setter=setAPANSuffix:) NSString *apanSuffix;
@property (copy, nonatomic) NSString *virtualCardIdentifier;
@property (copy, nonatomic, setter=setVirtualCardSuffix:) NSString *virtualCardSuffix;
@property (retain, nonatomic) NSNumber *supportsVirtualCardNumber;
@property (nonatomic) long long virtualCardVPANOrigin;
@property (retain, nonatomic) NSNumber *virtualCardRefreshTypeNumber;
@property (retain, nonatomic) NSNumber *supportsMultiTokens;
@property (nonatomic) BOOL supportsBarcodePayment;
@property (nonatomic) BOOL supportsOptionalAuthentication;
@property (copy, nonatomic) NSArray *supportedExpressModes;
@property (copy, nonatomic) NSArray *automaticSelectionCriteria;
@property (nonatomic) BOOL supportsServiceMode;
@property (copy, nonatomic) NSString *appletCurrencyCode;
@property (nonatomic) BOOL requiresDeferredAuthorization;
@property (nonatomic) long long paymentNetworkIdentifier;
@property (nonatomic) BOOL inAppPINRequired;
@property (copy, nonatomic) NSDecimalNumber *inAppPINRequiredAmount;
@property (copy, nonatomic) NSString *inAppPINRequiredCurrency;
@property (nonatomic) unsigned long long paymentType;
@property (nonatomic) unsigned long long auxiliaryPaymentType;
@property (copy, nonatomic) NSString *displayName;
@property (nonatomic, getter=isAuxiliary) BOOL auxiliary;
@property (nonatomic) long long contactlessPriority;
@property (nonatomic) long long inAppPriority;
@property (nonatomic) BOOL supportsInstantFundsIn;
@property (nonatomic) unsigned long long fundingSourcePaymentType;
@property (nonatomic) BOOL requiresConsentForDataRelease;
@property (copy, nonatomic) NSString *transactionSourceIdentifier;
@property (copy, nonatomic) NSString *appletDataFormat;
@property (copy, nonatomic) PKTransitPassProperties *transitProperties;
@property (copy, nonatomic) PKFelicaPassProperties *felicaProperties;
@property (readonly, nonatomic) BOOL supportsTransit;
@property (readonly, nonatomic) BOOL supportsSuica;
@property (readonly, nonatomic, getter=isParsedTransitApplication) BOOL parsedTransitApplication;
@property (readonly, nonatomic) BOOL generatesLocalTransactions;
@property (readonly, nonatomic) BOOL supportsTransitHistory;
@property (readonly, nonatomic) NSString *stationCodeProvider;
@property (copy, nonatomic) NSArray *supportedInAppMerchantCountryCodes;
@property (copy, nonatomic) NSArray *unsupportedInAppMerchantCountryCodes;
@property (copy, nonatomic) NSArray *supportedTransitNetworkIdentifiers;
@property (nonatomic) unsigned long long supportedRadioTechnologies;
@property (copy, nonatomic) NSSet *subcredentials;
@property (nonatomic, getter=isShareable) BOOL shareable;

+ (id)applicationWithProtobuf:(id)a0;
+ (BOOL)paymentApplicationSupportsMerchantCapabilties:(unsigned long long)a0 paymentType:(unsigned long long)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)protobuf;
- (BOOL)isRequiredForMerchantInCountry:(id)a0;
- (BOOL)supportsExpress;
- (void)_createAndPopulateAutomaticSelectionCriteriaIfNecessary;
- (void)_createAndPopulateReaderIdentifierIfNecessary;
- (BOOL)acceptedForNonWebPaymentWithSupportedNetworkIdentifiers:(id)a0 merchantCapabilities:(unsigned long long)a1 merchantCountryCode:(id)a2 paymentApplicationStates:(id)a3 paymentRequestType:(id)a4 isMultiTokensRequest:(BOOL)a5 webService:(id)a6;
- (BOOL)acceptedForNonWebPaymentWithSupportedNetworkIdentifiers:(id)a0 merchantCapabilities:(unsigned long long)a1 paymentMode:(long long)a2;
- (BOOL)acceptedForWebPaymentWithSupportedNetworkIdentifiers:(id)a0 merchantCapabilities:(unsigned long long)a1 merchantCountryCode:(id)a2 paymentApplicationStates:(id)a3 webService:(id)a4 paymentMode:(long long)a5 isMultiTokensRequest:(BOOL)a6;
- (id)asDictionary;
- (BOOL)blockingSupportedUWBDueToHardware;
- (BOOL)canProcessPayment:(id)a0;
- (BOOL)firstApproachCompleted;
- (id)initWithPaymentApplicationDictionary:(id)a0 auxiliaryApplication:(BOOL)a1;
- (BOOL)isEqualToPaymentApplication:(id)a0;
- (id)networksSupportedAccordingToService:(id)a0;
- (id)paymentApplicationsIncludingAuxiliaryPaymentTypes;
- (BOOL)supportsAutomaticSelectionForTCI:(id)a0;
- (BOOL)supportsComboCard;
- (BOOL)supportsDeviceAssessmentAccordingToService:(id)a0;
- (BOOL)supportsExpressForAutomaticSelectionCriteriaPassingTest:(id /* block */)a0;
- (BOOL)supportsExpressForAutomaticSelectionTechnologyType:(long long)a0;
- (BOOL)supportsExpressMode:(id)a0;
- (BOOL)supportsMultiTokensWithImplicitlyEnabledNetworks:(id)a0;
- (BOOL)supportsPartnerSpecificIdentifier;
- (BOOL)supportsUWB;
- (BOOL)supportsWebPaymentMode:(long long)a0 withExclusionList:(id)a1;
- (BOOL)supportsWebPaymentMode:(long long)a0 withExclusionList:(id)a1 clientOSVersion:(id)a2;
- (id)torinoFeatureFromService:(id)a0;
- (unsigned long long)vpanRefreshTypeAccordingToService:(id)a0;

@end
