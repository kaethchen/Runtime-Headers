@class INDateComponentsRange, NSString, INBillPayee;

@interface INSearchForBillsIntent : INIntent <INSearchForBillsIntentExport>

@property (readonly, copy) INBillPayee *billPayee;
@property (readonly, copy) INDateComponentsRange *paymentDateRange;
@property (readonly) long long billType;
@property (readonly) long long status;
@property (readonly, copy) INDateComponentsRange *dueDateRange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (id)domain;
- (void)setDomain:(id)a0;
- (id)verb;
- (void)setStatus:(long long)a0;
- (id)_dictionaryRepresentation;
- (void)setVerb:(id)a0;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (void)_setMetadata:(id)a0;
- (id)_typedBackingStore;
- (id)initWithBillPayee:(id)a0 paymentDateRange:(id)a1 billType:(long long)a2 status:(long long)a3 dueDateRange:(id)a4;
- (id)parametersByName;
- (void)setBillPayee:(id)a0;
- (void)setBillType:(long long)a0;
- (void)setDueDateRange:(id)a0;
- (void)setParametersByName:(id)a0;
- (void)setPaymentDateRange:(id)a0;

@end
