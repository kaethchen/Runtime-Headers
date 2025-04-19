@class NSDictionary;

@interface ICQOpportunitySheetDetailsSpecification : ICQOpportunityFlowSpecification

@property (retain, nonatomic) NSDictionary *messagesInfo;

- (void).cxx_destruct;
- (void)makeMessageFromServerDict:(id)a0;
- (id)messageForKey:(id)a0;

@end
