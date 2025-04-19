@class NSString;

@interface IATextInputActionsSessionKBMenuInteractionAction : IATextInputActionsSessionAction

@property (nonatomic) unsigned long long KBMenuInteractionSource;
@property (nonatomic) unsigned long long KBMenuSelectedAction;
@property (copy, nonatomic) NSString *updatedInputMode;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)inputActionCount;

@end
