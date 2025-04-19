@class NSObject;
@protocol TPropertyThumbnailExtractorDelegate;

@interface FI_TPropertyThumbnailExtractor : FI_TPropertyIconExtractor {
    struct shared_ptr<TThumbnailExtractorController> { struct TThumbnailExtractorController *__ptr_; struct __shared_weak_count *__cntrl_; } _thumbnailController;
    struct TNSWeakPtr<NSObject<TPropertyThumbnailExtractorDelegate>> { NSObject<TPropertyThumbnailExtractorDelegate> *fWeakObject; } _weakDelegate;
    struct vector<std::pair<TFENode, NSImage *>, std::allocator<std::pair<TFENode, NSImage *>>> { void *__begin_; void *__end_; struct __compressed_pair<std::pair<TFENode, NSImage *> *, std::allocator<std::pair<TFENode, NSImage *>>> { void *__value_; } __end_cap_; } _nodeToImageList;
}

@property (nonatomic) struct shared_ptr<TThumbnailExtractorController> { struct TThumbnailExtractorController *x0; struct __shared_weak_count *x1; } thumbnailController;
@property (weak, nonatomic) NSObject<TPropertyThumbnailExtractorDelegate> *delegate;
@property (nonatomic) struct TFENode { struct OpaqueNodeRef *fNodeRef; } thumbnailTargetNode;
@property (readonly, nonatomic) struct vector<double, std::allocator<double>> { double *__begin_; double *__end_; struct __compressed_pair<double *, std::allocator<double>> { double *__value_; } __end_cap_; } randomAnglesForStack;
@property (readonly, nonatomic) struct vector<std::pair<TFENode, NSImage *>, std::allocator<std::pair<TFENode, NSImage *>>> { void *x0; void *x1; struct __compressed_pair<std::pair<TFENode, NSImage *> *, std::allocator<std::pair<TFENode, NSImage *>>> { void *x0; } x2; } nodeToImageList;

- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)setIconSize:(double)a0;
- (id)extractValueFromNodes:(const void *)a0;
- (id)extractValueFromNodes:(const void *)a0 partialOk:(BOOL)a1;
- (void)updateImageAngles:(const void *)a0 :(const void *)a1;

@end
