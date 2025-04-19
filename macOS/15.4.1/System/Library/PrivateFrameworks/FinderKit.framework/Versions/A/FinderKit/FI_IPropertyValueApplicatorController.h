@class FI_IPropertyValueApplicator;

@interface FI_IPropertyValueApplicatorController : FI_IPropertyValueController {
    struct TFENodeVector { struct TFENode *__begin_; struct TFENode *__end_; struct __compressed_pair<TFENode *, std::allocator<TFENode>> { struct TFENode *__value_; } __end_cap_; } _nodes;
}

@property (retain, nonatomic) FI_IPropertyValueApplicator *valueApplicator;

- (void).cxx_destruct;
- (id).cxx_construct;
- (const void *)nodes;
- (void)nodesWillChange;
- (BOOL)canModifyNodes:(const void *)a0;
- (int)applyValueToNodes:(id)a0;
- (void)nodesDidChange;
- (void)setCanModifyNodesGetter:(const void *)a0;
- (void)setValueToNodesApplicator:(const void *)a0;
- (void)updateWithNodes:(const void *)a0;

@end
