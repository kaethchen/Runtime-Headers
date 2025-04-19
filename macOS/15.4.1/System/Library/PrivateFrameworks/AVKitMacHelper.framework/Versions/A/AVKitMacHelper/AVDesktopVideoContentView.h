@class AVDesktopStereoLayersView, NSArray, AVVideoScrollView, AVDesktopPlayerLayerView, NSMutableArray, AVObservationController;

@interface AVDesktopVideoContentView : NSView

@property (readonly, nonatomic) AVVideoScrollView *scrollView;
@property (copy, nonatomic) NSArray *playerLayerViewConstraints;
@property (copy, nonatomic) NSArray *stereoLayersViewConstraints;
@property (copy, nonatomic) NSMutableArray *scrollViewConstraints;
@property (retain, nonatomic) AVObservationController *observationController;
@property (nonatomic) struct CGSize { double width; double height; } contentDimensions;
@property (nonatomic) double contentScale;
@property (nonatomic) BOOL allowsMagnification;
@property (nonatomic) double magnification;
@property (readonly, nonatomic) AVDesktopPlayerLayerView *playerLayerView;
@property (readonly, nonatomic) AVDesktopStereoLayersView *stereoLayersView;
@property (readonly, nonatomic) BOOL hasStereoLayersView;
@property (nonatomic) BOOL displaysStereoLayers;
@property (nonatomic) long long stereoEyes;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)setMagnification:(double)a0 centeredAtPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)viewWillMoveToWindow:(id)a0;

@end
