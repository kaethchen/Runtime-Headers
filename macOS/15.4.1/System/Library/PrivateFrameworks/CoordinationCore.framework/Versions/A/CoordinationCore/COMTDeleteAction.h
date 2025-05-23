@class NSUUID;

@interface COMTDeleteAction : COMTTypedAction

@property (readonly, nonatomic) NSUUID *targetIdentifier;

+ (BOOL)supportsSecureCoding;
+ (id)actionWithTargetType:(id)a0 targetIdentifier:(id)a1;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTargetType:(id)a0 targetIdentifier:(id)a1;

@end
