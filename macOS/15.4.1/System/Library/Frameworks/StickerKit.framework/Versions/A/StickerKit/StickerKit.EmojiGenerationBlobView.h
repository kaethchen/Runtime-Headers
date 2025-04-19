@interface StickerKit.EmojiGenerationBlobView : NSView {
    void /* unknown type, empty encoding */ gpController;
    void /* unknown type, empty encoding */ imageView;
    void /* unknown type, empty encoding */ queryInfo;
    void /* unknown type, empty encoding */ generationTask;
    void /* unknown type, empty encoding */ generationResult;
    void /* unknown type, empty encoding */ hasGenerationResult;
    void /* unknown type, empty encoding */ pageControlDot;
    void /* unknown type, empty encoding */ moreButton;
    void /* unknown type, empty encoding */ showsMoreButton;
    void /* unknown type, empty encoding */ moreButtonWasHidden;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ progress;
}

@property (nonatomic) double alpha;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)didCloseMenu:(id)a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)menuForEvent:(id)a0;
- (void)mouseDown:(id)a0;
- (void)willOpenMenu:(id)a0 withEvent:(id)a1;
- (void)performAddCaptionFromMenuItem:(id)a0;
- (void)performCopyFromMenuItem:(id)a0;
- (void)performReportAConcernFromMenuItem:(id)a0;
- (void)performSaveToStickerFromMenuItem:(id)a0;

@end
