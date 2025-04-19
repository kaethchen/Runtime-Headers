@class NSString, CALayer, NSImage;

@interface ICMovieAttachmentView : ICImageAttachmentView <NSAccessibilityGroup>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) CALayer *playButtonLayer;
@property (retain, nonatomic) NSImage *playButtonImage;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } playButtonFrame;
@property (nonatomic) BOOL playerWasVisibleDuringMouseDown;
@property (nonatomic) BOOL icaxIsShowingPlayer;

- (void).cxx_destruct;
- (id)accessibilityChildren;
- (id)accessibilityHelp;
- (BOOL)accessibilityPerformPress;
- (void)mouseDown:(id)a0;
- (void)mouseDragged:(id)a0;
- (void)removeFromSuperview;
- (id)placeholderImageSystemName;
- (void)didChangeAttachment;
- (void)didChangeMedia;
- (void)willDeleteAttachment;
- (void)updateImageSize;
- (void)didTapAttachment:(id)a0;
- (id)icaxTypeDescription;
- (void)makePlayerViewFirstResponderIfNecessary;
- (BOOL)mouseEventIsOverPlayButtonForEvent:(id)a0;
- (void)selectAttachmentView:(id)a0;
- (void)setShowLoadingImage:(BOOL)a0;
- (void)sharedInit:(BOOL)a0;
- (BOOL)shouldIncludeAttachmentTitleInAXLabel;

@end
