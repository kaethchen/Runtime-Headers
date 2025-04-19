@class PKPayLaterDynamicContent, NSArray;

@interface PKAccountWebServicePayLaterContentResponse : PKAccountWebServiceResponse

@property (readonly, nonatomic) PKPayLaterDynamicContent *dynamicContent;
@property (readonly, copy, nonatomic) NSArray *reportIssueTopics;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;

@end
