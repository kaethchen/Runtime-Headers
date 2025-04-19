@class INShortcut;

@interface WFINShortcutRunDescriptor : WFWorkflowRunDescriptor

@property (readonly, nonatomic) INShortcut *shortcut;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)kind;
- (id)initWithShortcut:(id)a0;

@end
