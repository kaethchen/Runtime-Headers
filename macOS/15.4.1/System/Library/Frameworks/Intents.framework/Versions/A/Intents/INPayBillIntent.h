@class INPaymentAccount, INDateComponentsRange, INPaymentAmount, NSString, INBillPayee;

@interface INPayBillIntent : INIntent <INPayBillIntentExport>

@property (readonly, copy) INBillPayee *billPayee;
@property (readonly, copy) INPaymentAccount *fromAccount;
@property (readonly, copy) INPaymentAmount *transactionAmount;
@property (readonly, copy) INDateComponentsRange *transactionScheduledDate;
@property (readonly, copy) NSString *transactionNote;
@property (readonly) long long billType;
@property (readonly, copy) INDateComponentsRange *dueDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (id)domain;
- (void)setDomain:(id)a0;
- (id)verb;
- (id)_dictionaryRepresentation;
- (void)setDueDate:(id)a0;
- (void)setVerb:(id)a0;
- (long long)_intentCategory;
- (void)setFromAccount:(id)a0;
- (id)_categoryVerb;
- (BOOL)_isUserConfirmationRequired;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (void)_setMetadata:(id)a0;
- (id)_typedBackingStore;
- (id)initWithBillPayee:(id)a0 fromAccount:(id)a1 transactionAmount:(id)a2 transactionScheduledDate:(id)a3 transactionNote:(id)a4 billType:(long long)a5 dueDate:(id)a6;
- (id)parametersByName;
- (void)setBillPayee:(id)a0;
- (void)setBillType:(long long)a0;
- (void)setParametersByName:(id)a0;
- (void)setTransactionAmount:(id)a0;
- (void)setTransactionNote:(id)a0;
- (void)setTransactionScheduledDate:(id)a0;

@end
