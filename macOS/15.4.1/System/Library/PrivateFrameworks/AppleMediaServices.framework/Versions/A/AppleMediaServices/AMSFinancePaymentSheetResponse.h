@class AMSPaymentSheetRequest, NSDictionary, NSString, AMSFinanceAuthenticateResponse;

@interface AMSFinancePaymentSheetResponse : NSObject <AMSFinancePerformable>

@property (readonly) AMSFinanceAuthenticateResponse *authenticateResponse;
@property (readonly) NSDictionary *metricsDictionary;
@property (readonly) AMSPaymentSheetRequest *paymentSheetRequest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_attributedListDictionaryForValues:(id)a0 account:(id)a1;
+ (id)_attributedStringForAttributedArray:(id)a0 account:(id)a1;
+ (id)_attributedStringForAttributedDictionary:(id)a0 account:(id)a1;
+ (id)_attributedStringForSalableInfoStringArray:(id)a0 account:(id)a1 shouldUppercase:(BOOL)a2;
+ (id)_attributedStringForSalableInfoStyledStringArray:(id)a0 account:(id)a1 shouldUppercase:(BOOL)a2;
+ (id)_attributedStringForStringArray:(id)a0 useGrey:(BOOL)a1 account:(id)a2 shouldUppercase:(BOOL)a3;
+ (long long)_confirmationTitleForString:(id)a0;
+ (id)_createMerchantSessionFromDictionary:(id)a0;
+ (id)_flexListDictionaryForValues:(id)a0 styles:(id)a1 account:(id)a2 shouldUppercaseText:(BOOL)a3 designVersion:(id)a4;
+ (id)_flexListLeadingItemForValues:(id)a0 styles:(id)a1;
+ (id)_greyAttributedStringForAttributedString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
+ (long long)_payeeInferredFromEnumeratedTitle:(id)a0;
+ (long long)_salableIconForString:(id)a0;
+ (id)_salableInfoDictionaryForValues:(id)a0 styles:(id)a1 account:(id)a2 shouldUppercaseText:(BOOL)a3 designVersion:(id)a4;
+ (id)_salableInfoForKey:(id)a0 inDictionary:(id)a1 shouldUppercase:(BOOL)a2;
+ (id)_styleDictionaryWithName:(id)a0 styles:(id)a1;
+ (id)attributedStringWithString:(id)a0 styles:(id)a1;
+ (id)createRequestFromDictionary:(id)a0 confirmationOnly:(BOOL)a1 delegateAuthenticationRequired:(BOOL)a2 biometricSignatureRequired:(BOOL)a3 authenticateResponse:(id)a4 taskInfo:(id)a5 account:(id)a6;
+ (id)fallbackTitleFromResponse:(id)a0;

- (void).cxx_destruct;
- (id)_createUpdatedBodyFromFormData:(id)a0;
- (id)_enrichedMetricsDictionaryWithFinanceDictionary:(id)a0;
- (id)_performAuthorizationDialogProxyWithTaskInfo:(id)a0;
- (void)_performPaymentSheetWithTaskInfo:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithResponseDictionary:(id)a0 confirmationOnly:(BOOL)a1 delegateAuthenticationRequired:(BOOL)a2 biometricSignatureRequired:(BOOL)a3 taskInfo:(id)a4;
- (id)performWithTaskInfo:(id)a0;
- (void)performWithTaskInfo:(id)a0 completionHandler:(id /* block */)a1;

@end
