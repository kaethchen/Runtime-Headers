@class NSView, NSImage, CALayer, NSDate, ICAttachment;
@protocol ICMImageGalleryAttachmentViewItemDelegate;

@interface ICMGalleryAttachmentCollectionViewItem : NSCollectionViewItem

@property (retain, nonatomic) NSView *imageLayerContainer;
@property (retain, nonatomic) CALayer *imageLayer;
@property (retain, nonatomic) CALayer *fadeMaskLayer;
@property (retain, nonatomic) CALayer *fadeImageLayer;
@property (retain, nonatomic) CALayer *fadeWhiteLayer;
@property (retain, nonatomic) NSDate *mouseDownDate;
@property (nonatomic) BOOL didDrag;
@property (nonatomic) BOOL isUpdatingImage;
@property (nonatomic) struct CGSize { double width; double height; } currentImageSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } displayedImageFrame;
@property (nonatomic) BOOL isSettingAttachment;
@property (retain, nonatomic) NSImage *image;
@property (readonly, nonatomic) BOOL isPortrait;
@property (weak, nonatomic) id<ICMImageGalleryAttachmentViewItemDelegate> delegate;
@property (retain, nonatomic) ICAttachment *attachment;

- (void)dealloc;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)awakeFromNib;
- (void)mouseDown:(id)a0;
- (void)mouseDragged:(id)a0;
- (void)mouseUp:(id)a0;
- (void)viewDidLayout;
- (id)attachmentView;
- (void)updateImage;
- (void)setupAccessibility;
- (void)attachmentPreviewImagesDidUpdate:(id)a0;
- (void)updateFadeMask:(BOOL)a0;
- (struct CGSize { double x0; double x1; })aspectFillSizeForImageLayerIntoRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateImageAccessibilityLabel;
- (void)updateImageLayerFrame;

@end
