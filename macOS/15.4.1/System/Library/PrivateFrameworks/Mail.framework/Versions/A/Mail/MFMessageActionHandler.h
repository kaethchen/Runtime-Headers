@class MCMessageToMEMessageTransformer, NSArray, EDMessageActionHandler, EMMessageActionToMFMessageActionRuleTransformer;

@interface MFMessageActionHandler : NSObject

@property (readonly, nonatomic) EDMessageActionHandler *actionHandler;
@property (readonly, nonatomic) MCMessageToMEMessageTransformer *messageTransformer;
@property (readonly, nonatomic) EMMessageActionToMFMessageActionRuleTransformer *actionTransformer;
@property (readonly, nonatomic) NSArray *messageActionProviders;
@property (readonly, copy, nonatomic) NSArray *requiredHeaders;

+ (id)log;

- (void).cxx_destruct;
- (id)_messageRuleForMessage:(id)a0 actions:(id)a1 messageActionProviderID:(id)a2;
- (id)initWithActionHandler:(id)a0 messageTransformer:(id)a1 actionTransformer:(id)a2;
- (id)ruleForMessage:(id)a0 usingMessageActionProvider:(id)a1 fetchBody:(BOOL)a2;

@end
