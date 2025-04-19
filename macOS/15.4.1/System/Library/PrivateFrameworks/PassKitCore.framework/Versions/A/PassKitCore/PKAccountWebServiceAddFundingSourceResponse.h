@class PKAccountPaymentFundingSource, PKApplyVerificationPage;

@interface PKAccountWebServiceAddFundingSourceResponse : PKAccountWebServiceResponse

@property (readonly, copy, nonatomic) PKAccountPaymentFundingSource *fundingSource;
@property (readonly, copy, nonatomic) PKApplyVerificationPage *confirmationPage;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;

@end
