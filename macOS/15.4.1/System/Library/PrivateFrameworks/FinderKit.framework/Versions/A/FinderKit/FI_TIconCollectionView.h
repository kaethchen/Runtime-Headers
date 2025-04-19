@class NSObject;
@protocol TIconOrGalleryCollectionViewDelegateProtocol;

@interface FI_TIconCollectionView : FI_TIconOrGalleryCollectionView {
    struct TFENodeVector { struct TFENode *__begin_; struct TFENode *__end_; struct __compressed_pair<TFENode *, std::allocator<TFENode>> { struct TFENode *__value_; } __end_cap_; } _nodesToKeepInView;
    struct optional<unsigned long> { union { char __null_state_; unsigned long long __val_; } ; BOOL __engaged_; } _columnOffsetCount;
    struct optional<unsigned long> { union { char __null_state_; unsigned long long __val_; } ; BOOL __engaged_; } _keepInViewScrollPosition;
}

@property (weak, nonatomic) NSObject<TIconOrGalleryCollectionViewDelegateProtocol> *collectionViewDelegate;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)awakeFromNib;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)viewDidEndLiveResize;
- (void)viewWillStartLiveResize;
- (id)iconViewForIndexPath:(id)a0;
- (id)iconViewForNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (id)popoverAnchorViewForNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;

@end
