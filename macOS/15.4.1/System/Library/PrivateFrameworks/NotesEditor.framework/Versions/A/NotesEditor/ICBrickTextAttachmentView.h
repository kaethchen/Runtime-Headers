@class NSString, ICAttachmentBrickView, ICMZoomController;

@interface ICBrickTextAttachmentView : ICAttachmentView <ICMZoomableAttachmentView>

@property (retain, nonatomic) ICAttachmentBrickView *attachmentBrickView;
@property (retain, nonatomic) ICMZoomController *zoomController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)accessibilityValueDescription;
- (id)accessibilityValueDescription;
- (void)cacheDisplayInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toBitmapImageRep:(id)a1;
- (void)setHighlightColor:(id)a0;
- (void)setupConstraints;
- (void)updateCornerRadius;
- (void)setHighlightPatternRegexFinder:(id)a0;
- (struct CGSize { double x0; double x1; })attachmentSizeForTextContainer:(id)a0;
- (void)didChangeAttachment;
- (void)didChangeAttachmentTitle;
- (void)hostViewDidZoom:(id)a0;
- (id)imageForPrinting;
- (id)icaxTypeDescription;
- (id)icaxTypeDescription;
- (void)prepareForPrinting;
- (void)requestAttachmentContentUpdate;
- (void)sharedInit:(BOOL)a0;

@end
