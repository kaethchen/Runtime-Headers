@class NSTimer, NSString, NSTextAttachment, PKMacLinedPaperView, PKDrawing, NSOperationQueue, PKImageRenderer, NSImage, PKLinedPaper;

@interface PKTextAttachmentDrawingView : NSView <PKTextAttachmentView, PKTextAttachmentDrawingViewLinedPaperSupport>

@property (nonatomic) struct CGSize { double width; double height; } currentImageSize;
@property (retain, nonatomic) NSOperationQueue *renderTileQueue;
@property (retain, nonatomic) NSTimer *redrawTimer;
@property (retain, nonatomic) PKImageRenderer *tileRenderer;
@property (retain, nonatomic) PKMacLinedPaperView *linedPaperView;
@property (retain, nonatomic) PKDrawing *drawing;
@property (retain, nonatomic) NSImage *liveResizeImage;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } liveResizeImageDrawingFrame;
@property (nonatomic) BOOL currentModeIsDarkMode;
@property (weak, nonatomic) NSTextAttachment *textAttachment;
@property (retain, nonatomic) PKLinedPaper *linedPaper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;
- (void)prepareContentInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewDidChangeEffectiveAppearance;
- (void)viewDidEndLiveResize;
- (void)viewDidMoveToSuperview;
- (void)viewWillMoveToSuperview:(id)a0;
- (void)viewWillStartLiveResize;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })drawingBounds;
- (id)tiles;
- (long long)_characterIndex;
- (void)_redraw;
- (void)_createTilesIfNecessary;
- (void)_invalidateTiles;
- (void)_liveResizeDidEnd;
- (void)_liveResizeWillStart;
- (void)_purgeTilesOutsideRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_recreateTiles;
- (void)_scheduleRenderingForTile:(id)a0;
- (void)_scheduleTilesForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_textClipViewDidChange;
- (void)_textStorageDidProcessEditing;
- (id)_textView;
- (void)_textViewDidChangeSize;
- (void)_triggerRedraw;
- (void)_updateAttachmentBoundsSafeToInvalidateLayout:(BOOL)a0;
- (void)_updateTiles;
- (void)cleanupViewProviders;
- (id)dataForTextAttachment:(id)a0;
- (double)drawingAspectRatio;
- (void)drawingDataDidChange:(id)a0;
- (double)drawingScaleFactor;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })drawingToViewTransform;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })fromViewTransform;
- (id)initWithAttachment:(id)a0 drawingClass:(Class)a1 inserted:(BOOL)a2;
- (BOOL)isDarkModeEnabled;
- (BOOL)isLiveResizing;
- (id /* block */)linedPaperRenderBlockForTile:(id)a0;
- (void)updateFrameForTextContainerSafeToInvalidateLayout:(BOOL)a0;
- (void)updateLinedPaperView;

@end
