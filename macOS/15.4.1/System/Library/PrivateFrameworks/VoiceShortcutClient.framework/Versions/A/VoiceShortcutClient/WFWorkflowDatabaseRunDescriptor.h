@class NSString;

@interface WFWorkflowDatabaseRunDescriptor : WFWorkflowRunDescriptor

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *name;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithName:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (id)kind;
- (id)initWithIdentifier:(id)a0 name:(id)a1;

@end
