@class INCurrencyAmount, NSString, INPerson;

@interface INSendPaymentIntent : INIntent <INSendPaymentIntentExport>

@property (readonly, copy) INPerson *payee;
@property (readonly, copy) INCurrencyAmount *currencyAmount;
@property (readonly, copy) NSString *note;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (id)domain;
- (void)setDomain:(id)a0;
- (id)verb;
- (id)_dictionaryRepresentation;
- (void)setNote:(id)a0;
- (void)setVerb:(id)a0;
- (long long)_intentCategory;
- (id)_categoryVerb;
- (BOOL)_isUserConfirmationRequired;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (id)_redactedDictionaryRepresentation;
- (void)_setMetadata:(id)a0;
- (id)_typedBackingStore;
- (BOOL)configureAttributeSet:(id)a0 includingData:(BOOL)a1;
- (id)initWithPayee:(id)a0 currencyAmount:(id)a1 note:(id)a2;
- (id)parametersByName;
- (void)setCurrencyAmount:(id)a0;
- (void)setParametersByName:(id)a0;
- (void)setPayee:(id)a0;

@end
