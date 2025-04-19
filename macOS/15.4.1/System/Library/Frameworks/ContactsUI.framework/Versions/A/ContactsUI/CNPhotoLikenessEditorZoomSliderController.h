@class NSStackView, NSSlider, NSButton;
@protocol CNPhotoLikenessEditorZoomDelegate;

@interface CNPhotoLikenessEditorZoomSliderController : NSViewController

@property (retain, nonatomic) NSStackView *zoomStackView;
@property (retain, nonatomic) NSSlider *zoomSlider;
@property (retain, nonatomic) NSButton *zoomInButton;
@property (retain, nonatomic) NSButton *zoomOutButton;
@property (weak) id<CNPhotoLikenessEditorZoomDelegate> zoomDelegate;

- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)zoomIn:(id)a0;
- (void)zoomOut:(id)a0;
- (void)setZoomFraction:(double)a0;
- (void)setupConstraints;
- (void)setupSlider;
- (void)setupView;
- (void)setupZoomInButton;
- (void)setupZoomOutButton;
- (void)zoomValueChanged:(id)a0;

@end
