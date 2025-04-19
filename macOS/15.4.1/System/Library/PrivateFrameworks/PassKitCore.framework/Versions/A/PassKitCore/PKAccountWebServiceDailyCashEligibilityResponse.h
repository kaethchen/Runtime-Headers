@class PKAccountDailyCashDestinationsSummary;

@interface PKAccountWebServiceDailyCashEligibilityResponse : PKAccountWebServiceResponse

@property (readonly, copy, nonatomic) PKAccountDailyCashDestinationsSummary *summary;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;

@end
