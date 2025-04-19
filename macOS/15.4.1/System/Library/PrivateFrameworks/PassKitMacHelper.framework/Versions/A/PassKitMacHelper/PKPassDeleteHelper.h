@interface PKPassDeleteHelper : NSObject

+ (BOOL)hasPositiveBalanceForTransitPassProperties:(id)a0 transitBalanceModel:(id)a1;
+ (BOOL)_canDeletePaymentPass:(id)a0 transitPassProperties:(id)a1;
+ (void)deletePaymentPassAlertCopyForPass:(id)a0 webService:(id)a1 paymentServiceDataProvider:(id)a2 isBridge:(BOOL)a3 completion:(id /* block */)a4;
+ (void)deletePaymentPassAlertCopyForPass:(id)a0 withAccount:(id)a1 paymentServiceDataProvider:(id)a2 transitBalanceModel:(id)a3 transitPassProperties:(id)a4 merchantTokensResponse:(id)a5 isBridge:(BOOL)a6 completion:(id /* block */)a7;
+ (BOOL)hasAppleCashMerchantTokenForMerchantTokensResponse:(id)a0;

@end
