@class NSString, ICMZoomController, NSLayoutConstraint, ICMClickableTextView;

@interface ICMNoteEditorCompatibilityBannerView : NSView <ICMClickableTextViewDelegate, ICMZoomableAttachmentView>

@property (weak, nonatomic) ICMClickableTextView *clickableTextView;
@property (weak, nonatomic) NSLayoutConstraint *clickableTextViewHeightConstraint;
@property (retain, nonatomic) ICMZoomController *zoomController;
@property (readonly, nonatomic) double heightOfBanner;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)checkShouldShowCompatibilityBannerViewForNote:(id)a0 completion:(id /* block */)a1;
+ (id)newCompatibilityBannerView;

- (void).cxx_destruct;
- (id)accessibilityHelp;
- (id)accessibilityLabel;
- (id)accessibilityParent;
- (BOOL)accessibilityPerformPress;
- (id)accessibilityRole;
- (void)awakeFromNib;
- (BOOL)isAccessibilityElement;
- (void)clickableTextViewDidClick:(id)a0;
- (void)hostViewDidZoom:(id)a0;
- (void)setupStringsWithZoomFactor:(double)a0;
- (void)updateHeightOfBannerView;

@end
