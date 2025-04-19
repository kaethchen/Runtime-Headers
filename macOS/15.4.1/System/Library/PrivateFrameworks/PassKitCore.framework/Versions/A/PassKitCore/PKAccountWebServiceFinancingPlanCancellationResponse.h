@class PKAccount, PKPayLaterFinancingPlan;

@interface PKAccountWebServiceFinancingPlanCancellationResponse : PKAccountWebServiceResponse

@property (readonly, nonatomic) PKAccount *account;
@property (readonly, nonatomic) PKPayLaterFinancingPlan *financingPlan;

+ (BOOL)jsonDataOptional;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;

@end
