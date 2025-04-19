@interface MFMessageActionRule : MFMessageRule {
    BOOL _isMessageActionRule;
}

@property (nonatomic) BOOL needsBody;

- (BOOL)isActive;
- (BOOL)doesMessageSatisfyCriteria:(id)a0 fetchBody:(BOOL)a1 needsBody:(BOOL *)a2 successfullyEvaluated:(BOOL *)a3;
- (id)initWithActionProviderID:(id)a0;
- (BOOL)isMessageActionRule;

@end
