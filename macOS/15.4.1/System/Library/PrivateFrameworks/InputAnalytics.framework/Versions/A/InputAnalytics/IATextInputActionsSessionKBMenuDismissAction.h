@interface IATextInputActionsSessionKBMenuDismissAction : IATextInputActionsSessionAction

@property (nonatomic) unsigned long long KBMenuDismissSource;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)inputActionCount;

@end
