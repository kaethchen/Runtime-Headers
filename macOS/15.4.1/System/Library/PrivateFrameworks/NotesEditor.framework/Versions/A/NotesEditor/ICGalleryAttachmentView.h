@class NSArray;
@protocol NSObject;

@interface ICGalleryAttachmentView : ICAttachmentView

@property (retain, nonatomic) NSArray *subAttachmentItems;
@property (retain, nonatomic) id<NSObject> attachmentDidLoadObserver;
@property (retain, nonatomic) id<NSObject> previewImagesDidUpdateObserver;

+ (double)effectiveAspectRatioForWidth:(double)a0 height:(double)a1;
+ (struct CGSize { double x0; double x1; })sizeOfViewForAttachment:(id)a0 textViewContentWidth:(double)a1 existingView:(id)a2;
+ (id)subAttachmentItemsForGalleryAttachment:(id)a0;
+ (id)titleForGalleryAttachment:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)setAttachment:(id)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)updateItems;
- (void)setHighlightColor:(id)a0;
- (void)setHighlightPatternRegexFinder:(id)a0;
- (void)didChangeMergeableData;
- (void)didUpdatePreviewImages;
- (double)collectionViewItemHeight;
- (void)invalidateCollectionViewLayout;
- (void)updateItemForObjectID:(id)a0;
- (void)updateItemsAndLayout;

@end
