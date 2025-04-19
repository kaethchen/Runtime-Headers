@class NSArray, PKFeatureFailureCollection, NSString;

@interface PKAccountWebServiceAccountsResponse : PKAccountWebServiceResponse

@property (readonly, copy, nonatomic) NSArray *accounts;
@property (readonly, nonatomic) PKFeatureFailureCollection *featureFailures;
@property (readonly, copy, nonatomic) NSString *lastUpdated;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;

@end
