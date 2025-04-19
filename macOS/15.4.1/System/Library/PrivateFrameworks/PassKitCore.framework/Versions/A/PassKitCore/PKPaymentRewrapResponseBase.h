@class NSURL, NSString, NSData, PKPayLaterFinancingPlan, PKPaymentRewardsRedemption, PKAccount;

@interface PKPaymentRewrapResponseBase : PKPaymentWebServiceResponse

@property (copy, nonatomic) NSData *rewrappedPaymentData;
@property (readonly, copy, nonatomic) NSString *transactionIdentifier;
@property (readonly, copy, nonatomic) NSString *primaryAccountNumberSuffix;
@property (readonly, nonatomic) PKPayLaterFinancingPlan *financingPlan;
@property (readonly, nonatomic) PKAccount *account;
@property (readonly, nonatomic) PKPaymentRewardsRedemption *redemption;
@property (readonly, nonatomic) NSURL *issuerInstallmentManagementURL;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;

@end
