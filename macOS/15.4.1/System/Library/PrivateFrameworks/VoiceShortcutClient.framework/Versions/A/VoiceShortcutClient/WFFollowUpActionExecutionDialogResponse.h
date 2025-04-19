@interface WFFollowUpActionExecutionDialogResponse : WFDialogResponse

@property (nonatomic) BOOL shouldRunFollowUpAction;

+ (BOOL)supportsSecureCoding;
+ (BOOL)supportsBSXPCSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithBSXPCCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (id)initWithshouldRunFollowUpAction:(BOOL)a0;

@end
