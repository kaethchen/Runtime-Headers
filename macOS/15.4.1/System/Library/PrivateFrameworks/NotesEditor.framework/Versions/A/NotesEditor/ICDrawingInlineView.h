@class ICAttachment, NSString, ICSelectorDelayer, CALayer, ICLoadingPieLayer, NSColor;

@interface ICDrawingInlineView : NSView <ICImageAttachmentPresentationDelegate>

@property (nonatomic) BOOL fullscreen;
@property (retain, nonatomic) CALayer *imageLayer;
@property (nonatomic) BOOL forManualRendering;
@property (copy, nonatomic) id /* block */ imageLoadingCancelBlock;
@property (readonly, nonatomic) BOOL hasImage;
@property (nonatomic) BOOL needsToUpdateImage;
@property (retain, nonatomic) ICSelectorDelayer *previewImageUpdateDelayer;
@property (weak, nonatomic) ICLoadingPieLayer *loadingProgressLayer;
@property (readonly, nonatomic) NSColor *drawingBackgroundColor;
@property (readonly, nonatomic) BOOL shouldUseLightDrawingBackground;
@property (nonatomic) BOOL thumbnailDisplay;
@property (nonatomic) BOOL hideLoadingProgress;
@property (nonatomic, getter=isEditable) BOOL editable;
@property (nonatomic) BOOL showGotoNote;
@property (nonatomic) struct CGSize { double width; double height; } attachmentContentSize;
@property (nonatomic) BOOL isInAttachmentBrowser;
@property (retain, nonatomic) ICAttachment *attachment;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } imageFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } boundsForDisplay;
@property (retain, nonatomic) NSColor *borderColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;
- (id)previewImage;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateLayer;
- (void)viewDidChangeBackingProperties;
- (void)viewDidChangeEffectiveAppearance;
- (id)attachmentImage;
- (void)attachmentPreviewImagesDidUpdate:(id)a0;
- (BOOL)isReadyToPresent;
- (BOOL)cancelDidScrollIntoVisibleRange;
- (void)didScrollIntoVisibleRange;
- (void)didScrollOutOfVisibleRange;
- (void)animateImageArrivalWithAnimationDuration:(double)a0;
- (void)attachmentPreviewDidStart:(id)a0;
- (void)delayedPreviewImageChanged;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forManualRendering:(BOOL)a1;
- (BOOL)isAttachmentEditable;
- (BOOL)isVisibleWithinScrollView;
- (void)observePreviewGenerationProgress:(id)a0;
- (void)updateBorderWidth;
- (void)updateImageWithAnimation:(BOOL)a0;
- (void)updateLayerImage:(id)a0 animation:(BOOL)a1;
- (id)viewToPresentAttachmentFrom;

@end
