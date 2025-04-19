@class NSArray, PKPayLaterDynamicContent, NSString, PKPayLaterProductAssessmentCollection;

@interface PKAccountWebServiceFinancingOptionsResponse : PKAccountWebServiceResponse

@property (readonly, nonatomic) PKPayLaterProductAssessmentCollection *assessmentCollection;
@property (readonly, nonatomic) NSArray *acceptedFundingSources;
@property (readonly, nonatomic) NSArray *lastUsedFundingSources;
@property (readonly, nonatomic) PKPayLaterDynamicContent *dynamicContent;
@property (readonly, copy, nonatomic) NSString *sessionIdentifier;
@property (readonly, nonatomic) unsigned long long languageDisclosureLocation;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;

@end
