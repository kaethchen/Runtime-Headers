@class NSDictionary, NSMutableArray, PKPaymentSetupFieldFooter;

@interface PKPaymentSetupFieldsModel : NSObject {
    NSMutableArray *_paymentSetupFields;
    PKPaymentSetupFieldFooter *_footerField;
    NSDictionary *_footerFields;
}

+ (id)defaultPaymentSetupProvisioningFields;
+ (id)fakePaymentSetupProvisioningFields;

- (id)init;
- (void).cxx_destruct;
- (void)resetAllPaymentSetupFieldValues;
- (BOOL)hasIncompletePaymentSetupFields;
- (BOOL)requirementsMetForVisibleFields;
- (id)submissionValuesForDestination:(id)a0;
- (void)_addField:(id)a0 result:(id)a1 destination:(id)a2 requiresSecureSubmission:(BOOL)a3;
- (void)disableDOBPrefill;
- (id)footerFieldForIdentifier:(id)a0;
- (id)footerPaymentSetupField;
- (BOOL)hasFooterPaymentSetupField;
- (BOOL)hasVisibleEditableFields;
- (id)incompletePaymentSetupFields;
- (id)initWithPaymentSetupFields:(id)a0;
- (id)initWithPaymentSetupFields:(id)a0 footerFields:(id)a1;
- (void)lockFields;
- (unsigned long long)numberOfPaymentSetupFields;
- (id)paymentSetupFieldAtIndex:(unsigned long long)a0;
- (id)paymentSetupFieldIdentifiers;
- (id)paymentSetupFieldWithIdentifier:(id)a0;
- (id)paymentSetupFields;
- (void)prefillDefaultValues;
- (void)prefillDefaultValuesWithPostalAddress:(id)a0;
- (void)prefillValuesWithPaymentCredential:(id)a0;
- (id)readonlySetupFieldIdentifiers;
- (void)replaceAllPaymentSetupFields:(id)a0;
- (void)replaceAllPaymentSetupFields:(id)a0 footerFields:(id)a1;
- (void)replaceAllPaymentSetupFieldsPreservingCurrentValues:(id)a0;
- (BOOL)requirementsMetForFieldWithIdentifier:(id)a0;
- (id)secondaryEntryFieldsModelWithPaymentSetupFields:(id)a0;
- (id)secureSubmissionValuesForDestination:(id)a0;
- (id)setupFieldAnalytics;
- (void)unhideFieldsWithEnteredValues;
- (void)updateWithPaymentSetupFields:(id)a0;
- (void)updateWithPaymentSetupFields:(id)a0 footerFields:(id)a1;
- (id)visiblePaymentSetupFields;
- (id)visibleSetupFieldIdentifiers;

@end
