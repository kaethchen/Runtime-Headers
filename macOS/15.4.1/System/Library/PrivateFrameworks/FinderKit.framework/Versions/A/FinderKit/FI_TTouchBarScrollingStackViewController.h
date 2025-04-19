@interface FI_TTouchBarScrollingStackViewController : FI_TTouchBarViewController {
    struct TFENodeVector { struct TFENode *__begin_; struct TFENode *__end_; struct __compressed_pair<TFENode *, std::allocator<TFENode>> { struct TFENode *__value_; } __end_cap_; } _targetNodes;
    struct optional<CGPoint> { union { char __null_state_; struct CGPoint { double x; double y; } __val_; } ; BOOL __engaged_; } _cachedScrollPosition;
}

@property (nonatomic) BOOL disableCachedScrollPosition;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)viewWillAppear;
- (void)viewWillDisappear;
- (void)setTargetNodes:(const void *)a0;
- (id)makeTouchBarView;
- (const void *)targetNodes;

@end
