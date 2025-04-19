@class FI_TQLMultiPreviewViewImageStackController, NSString, FI_TQLMultiPreviewItem;
@protocol QLPreviewItem;

@interface FI_TQLMultiPreviewView : FI_TUpdateLayerView <QLPreviewCustomView, TMarkTornDown> {
    FI_TQLMultiPreviewViewImageStackController *_imageStackController;
    FI_TQLMultiPreviewItem *_previewItem;
}

@property (readonly, retain) FI_TQLMultiPreviewViewImageStackController *iconController;
@property (retain) id<QLPreviewItem> previewItem;
@property (readonly, nonatomic) struct vector<std::pair<TFENode, NSImage *>, std::allocator<std::pair<TFENode, NSImage *>>> { void *x0; void *x1; struct __compressed_pair<std::pair<TFENode, NSImage *> *, std::allocator<std::pair<TFENode, NSImage *>>> { void *x0; } x2; } nodeToImageList;
@property (readonly) BOOL isLoaded;
@property (getter=isTornDown) BOOL tornDown;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyPathsForValuesAffectingIsLoaded;
+ (id)qlMultiPreviewView:(const struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0;

- (void).cxx_destruct;
- (void)close;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)aboutToTearDown;
- (void)configureThumbnailer:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0 iconSize:(double)a1 scaleFactor:(double)a2;
- (void)flushCachedMultiIcon;

@end
