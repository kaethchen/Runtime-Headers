@class NSString;

@interface MCActionTrigger : MCAction

@property (copy) NSString *actionKey;

+ (id)actionTriggerForTargetPlugObjectID:(id)a0 withActionKey:(id)a1;

- (id)description;
- (id)xmlElement;
- (id)imprint;
- (void)_copySelfToSnapshot:(id)a0;
- (void)demolish;
- (id)initWithImprint:(id)a0;

@end
