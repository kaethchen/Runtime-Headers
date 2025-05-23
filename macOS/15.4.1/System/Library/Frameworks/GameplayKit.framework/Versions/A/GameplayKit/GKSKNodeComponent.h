@class NSString, SKNode, NSIndexPath;

@interface GKSKNodeComponent : GKComponent <GKSerializedNodeContaining, GKAgentDelegate>

@property (retain, nonatomic) SKNode *node;
@property (retain, nonatomic) NSIndexPath *serializableNodeIndexPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (id)componentWithNode:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithNode:(id)a0;
- (void)setEntity:(id)a0;
- (void)agentDidUpdate:(id)a0;
- (void)agentWillUpdate:(id)a0;

@end
