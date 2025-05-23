@class NSArray, PKFeatureFailureCollection, NSString;

@interface PKApplyWebServiceApplicationsResponse : PKApplyWebServiceResponse

@property (readonly, nonatomic) NSArray *allFeatureApplications;
@property (readonly, nonatomic) PKFeatureFailureCollection *featureFailures;
@property (readonly, copy, nonatomic) NSString *lastUpdated;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithData:(id)a0;

@end
