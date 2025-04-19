@interface AMSCardEnrollmentVerificationTask : AMSTask

+ (id)performPaymentVerificationForPayment:(id)a0 isDefault:(BOOL)a1 bag:(id)a2;
+ (void)verifyPayment:(id)a0 isDefault:(BOOL)a1 bag:(id)a2 completion:(id /* block */)a3;

@end
