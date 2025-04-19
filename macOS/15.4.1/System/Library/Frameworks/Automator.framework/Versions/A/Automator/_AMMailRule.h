@class NSString, NSArray, _AMMailMailbox;

@interface _AMMailRule : SBObject

@property int colorMessage;
@property BOOL deleteMessage;
@property (copy) NSString *forwardText;
@property (copy) NSString *forwardMessage;
@property BOOL markFlagged;
@property BOOL markRead;
@property (copy) NSString *playSound;
@property (copy) NSArray *redirectMessage;
@property (copy) NSString *replyText;
@property (copy) id runScript;
@property BOOL allConditionsMustBeMet;
@property (copy) _AMMailMailbox *copyMessage;
@property (copy) _AMMailMailbox *moveMessage;
@property BOOL highlightTextUsingColor;
@property BOOL enabled;
@property (copy) NSString *name;
@property BOOL shouldCopyMessage;
@property BOOL shouldMoveMessage;
@property BOOL stopEvaluatingRules;

- (void)delete;
- (void)moveTo:(id)a0;
- (void)closeSaving:(int)a0 savingIn:(id)a1;
- (void)duplicateTo:(id)a0 withProperties:(id)a1;
- (void)printWithProperties:(id)a0 printDialog:(BOOL)a1;
- (id)ruleConditions;
- (void)saveIn:(id)a0 as:(int)a1;

@end
