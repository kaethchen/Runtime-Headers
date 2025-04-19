@class NSError;

@interface PKPaymentAuthorizationErrorStateParam : PKPaymentAuthorizationStateParam

@property (retain, nonatomic) NSError *error;
@property (nonatomic, getter=isClientFailure) BOOL clientFailure;
@property (nonatomic, getter=isPaymentOffersError) BOOL paymentOffersError;

+ (id)paramWithError:(id)a0;
+ (id)paramWithError:(id)a0 clientFailure:(BOOL)a1;
+ (id)paramWithError:(id)a0 paymentOffersError:(BOOL)a1;

- (id)description;
- (void).cxx_destruct;

@end
