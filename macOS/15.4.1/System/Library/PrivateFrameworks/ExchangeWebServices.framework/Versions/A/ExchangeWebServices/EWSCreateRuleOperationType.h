@class NSString, EWSRuleType;

@interface EWSCreateRuleOperationType : EWSRuleOperationType <XSDefinitionProvider>

@property (retain, nonatomic) EWSRuleType *Rule;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)definition;

- (void).cxx_destruct;

@end
