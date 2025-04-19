@class NURenderNode;

@interface NUAbstractScaleNode : NURenderNode

@property (readonly, nonatomic) NURenderNode *inputNode;

- (id)initWithInput:(id)a0 settings:(id)a1;
- (id)initWithSettings:(id)a0 inputs:(id)a1;
- (BOOL)shouldCacheNodeForPipelineState:(id)a0;

@end
