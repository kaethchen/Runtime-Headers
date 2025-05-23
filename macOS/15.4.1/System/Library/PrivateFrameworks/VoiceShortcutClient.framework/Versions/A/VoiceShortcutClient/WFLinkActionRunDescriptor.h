@class LNAction, NSString, LNActionMetadata, LNFullyQualifiedActionIdentifier;

@interface WFLinkActionRunDescriptor : WFWorkflowRunDescriptor

@property (readonly, nonatomic) LNFullyQualifiedActionIdentifier *identifier;
@property (readonly, nonatomic) LNAction *action;
@property (readonly, nonatomic) LNActionMetadata *metadata;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL isAutoShortcut;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)kind;
- (id)initWithIdentifier:(id)a0 action:(id)a1 metadata:(id)a2;
- (id)initWithIdentifier:(id)a0 action:(id)a1 metadata:(id)a2 isAutoShortcut:(BOOL)a3;
- (id)initWithIdentifier:(id)a0 name:(id)a1 action:(id)a2 metadata:(id)a3 isAutoShortcut:(BOOL)a4;

@end
