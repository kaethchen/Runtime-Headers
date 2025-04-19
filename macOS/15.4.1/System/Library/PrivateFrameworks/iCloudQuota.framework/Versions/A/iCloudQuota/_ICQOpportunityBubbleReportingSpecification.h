@class NSDictionary;

@interface _ICQOpportunityBubbleReportingSpecification : NSObject

@property (retain, nonatomic) NSDictionary *dimissServerParam;
@property (nonatomic) unsigned long long displayRuleType;
@property (nonatomic) unsigned long long dismissRuleType;
@property (nonatomic) BOOL displayRuleServerAlwaysShow;

- (void).cxx_destruct;
- (id)_getDismissReportingRuleFromServerDict:(id)a0;
- (void)_setDisplayRuleFromServerDict:(id)a0;
- (id)initWithServerDictionary:(id)a0;

@end
