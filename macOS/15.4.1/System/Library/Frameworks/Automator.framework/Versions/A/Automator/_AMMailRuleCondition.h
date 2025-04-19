@class NSString;

@interface _AMMailRuleCondition : SBObject

@property (copy) NSString *expression;
@property (copy) NSString *header;
@property int qualifier;
@property int ruleType;

- (void)delete;
- (void)moveTo:(id)a0;
- (void)closeSaving:(int)a0 savingIn:(id)a1;
- (void)duplicateTo:(id)a0 withProperties:(id)a1;
- (void)printWithProperties:(id)a0 printDialog:(BOOL)a1;
- (void)saveIn:(id)a0 as:(int)a1;

@end
