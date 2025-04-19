@class NSString;

@interface EWSDeleteRuleOperationType : EWSRuleOperationType <XSDefinitionProvider>

@property (copy, nonatomic) NSString *RuleId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)definition;

- (void).cxx_destruct;

@end
