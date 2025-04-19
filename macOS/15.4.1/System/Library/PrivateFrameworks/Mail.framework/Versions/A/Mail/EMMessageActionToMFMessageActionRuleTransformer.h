@interface EMMessageActionToMFMessageActionRuleTransformer : NSObject

- (char)_mcflagColorForActionFlagColor:(long long)a0;
- (unsigned int)_highLightColorForMessageColor:(long long)a0;
- (id)_colorForMessageColor:(long long)a0;
- (id)messageRuleForMessage:(id)a0 actions:(id)a1 messageActionProviderID:(id)a2;

@end
