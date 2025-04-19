@class NSArray, CIMSimulatorEnvironmentGradientView, CIMSimulatorEnvironmentCursorView, NSString, NSMutableArray;

@interface CIMSimulatorEnvironmentVisualizationView : NSView

@property (retain, nonatomic) CIMSimulatorEnvironmentCursorView *cursorView;
@property (retain, nonatomic) CIMSimulatorEnvironmentGradientView *leftGradientView;
@property (retain, nonatomic) CIMSimulatorEnvironmentGradientView *rightGradientView;
@property (retain, nonatomic) NSArray *candidateSurfaces;
@property (retain, nonatomic) NSArray *inlineCandidateSurfaces;
@property (copy, nonatomic) NSString *leftContext;
@property (copy, nonatomic) NSString *rightContext;
@property (retain, nonatomic) NSArray *rightCandidateSurfaces;
@property (copy, nonatomic) NSString *temporaryCandidateSurface;
@property (readonly, nonatomic) double horizontalPositionForCursor;
@property (retain, nonatomic) NSMutableArray *candidateSurfaceViews;
@property (retain, nonatomic) NSMutableArray *rightCandidateSurfaceViews;

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)arrangeCandidateSurfaces;
- (void)arrangeCursorView;
- (void)arrangeGradientsAtEdges;
- (void)arrangeRightCandidateSurfaces;
- (void)drawContextStrings;

@end
