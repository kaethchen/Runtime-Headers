@class NSArray, PKAccount;

@interface PKPaginatedAccountWebServiceFinancingPlansResponse : PKPaginatedAccountWebServiceResponse

@property (readonly, copy, nonatomic) NSArray *financingPlans;
@property (readonly, nonatomic) PKAccount *account;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;

@end
