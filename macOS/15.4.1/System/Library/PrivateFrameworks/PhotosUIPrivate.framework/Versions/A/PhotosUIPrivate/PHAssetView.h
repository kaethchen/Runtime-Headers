@class NSArray, NSString, PXPhotoKitAssetView, PHAsset, PHPasteboardItemManager;

@interface PHAssetView : NSView <NSDraggingSource, PXDisplayAssetViewMenuDelegate>

@property (nonatomic) long long contentMode;
@property (readonly, nonatomic) PHPasteboardItemManager *pasteboardManager;
@property (retain, nonatomic) PXPhotoKitAssetView *impl;
@property (retain, nonatomic) PHAsset *asset;
@property (nonatomic) BOOL allowsTextSelection;
@property (nonatomic) BOOL allowsDragging;
@property (copy, nonatomic) NSArray *stringsToHighlight;
@property (copy, nonatomic) NSArray *sceneIdentifiersToHighlight;
@property (copy, nonatomic) NSArray *audioIdentifiersToHighlight;
@property (copy, nonatomic) NSArray *humanActionIdentifiersToHighlight;
@property (copy, nonatomic) NSArray *personLocalIdentifiersToHighlight;
@property (nonatomic) long long preferredImageDynamicRange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)localizedTitleForAsset:(id)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })preferredContentsRectForAsset:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layout;
- (unsigned long long)draggingSession:(id)a0 sourceOperationMaskForDraggingContext:(long long)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)mouseDragged:(id)a0;
- (id)updateMenu:(id)a0 forEvent:(id)a1 atPoint:(struct CGPoint { double x0; double x1; })a2;
- (void)_commonPHAssetViewInit;

@end
