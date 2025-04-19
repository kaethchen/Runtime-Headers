@class CNPhotoLikenessEditorCroppingView, NSView;

@interface CNPhotoLikenessEditorCroppingViewController : NSViewController

@property (retain, nonatomic) CNPhotoLikenessEditorCroppingView *croppingView;
@property (retain, nonatomic) NSView *hostView;
@property (nonatomic) double zoom;
@property (nonatomic) struct CGPoint { double x; double y; } center;

- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)reloadData;
- (void)setCornerRadius:(double)a0;
- (void)viewWillAppear;
- (void)setCroppingDataSource:(id)a0;
- (void)setZoomPosition:(double)a0;
- (void)setupConstraints;
- (void)setupCroppingView;
- (void)setupHostView;

@end
