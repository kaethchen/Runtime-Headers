@interface IATextInputActionsSessionDictationBeganAction : IATextInputActionsSessionAction

@property (nonatomic) unsigned long long dictationBeganCount;
@property (nonatomic) unsigned long long modelessUsedAtLeastOnceCount;
@property (nonatomic) unsigned long long multiModalDictationBeganCount;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)inputActionCount;
- (long long)mergeActionIfPossible:(id)a0;

@end
