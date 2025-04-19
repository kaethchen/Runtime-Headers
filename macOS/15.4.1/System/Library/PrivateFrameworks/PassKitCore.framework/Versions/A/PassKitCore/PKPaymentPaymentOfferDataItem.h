@class PKSelectedPaymentOffer;

@interface PKPaymentPaymentOfferDataItem : PKPaymentDataItem

@property (readonly, nonatomic) PKSelectedPaymentOffer *selectedPaymentOffer;

+ (long long)dataType;

- (long long)context;
- (id)errors;
- (BOOL)isValidWithError:(id *)a0;
- (id)_errorLoadingPaymentOffersWithUnderlyingError:(id)a0;
- (BOOL)_loadingDetailsAreValid:(id)a0 error:(id *)a1 errorStatus:(long long *)a2;
- (id)_noPaymentOfferSelectedError;
- (id)_selectedPaymentOfferInvalid;
- (BOOL)_selectedPaymentOfferIsValidWithError:(id *)a0 errorStatus:(long long *)a1;
- (id)billingAddress;
- (BOOL)isValidWithError:(id *)a0 errorStatus:(long long *)a1;
- (id)paymentContactFormatErrors;
- (BOOL)requiresBillingAddress;

@end
