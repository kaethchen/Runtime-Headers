@class NSTimer, CABackdropLayer, VizPackage, VizContent, NSFont, NSDictionary, NSObject, NSLayoutConstraint, NSApplication, NSWindow, ISVizTitlePlacard;

@interface ISVisualizationWindow : NSWindow <ItemFrameProvider>

@property (weak, nonatomic) NSWindow *lastObservedWindow;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } lastObservedWindowFrame;
@property (weak, nonatomic) NSObject *lastObservedObject;
@property (weak, nonatomic) NSObject *lastObservedSecondaryObject;
@property (copy, nonatomic) NSDictionary *lastOptions;
@property (nonatomic) int flashingCountdown;
@property (retain, nonatomic) NSTimer *flashingTimer;
@property (nonatomic) BOOL targetAppIsActive;
@property (retain, nonatomic) NSLayoutConstraint *titlePlackXConstraint;
@property (retain, nonatomic) NSLayoutConstraint *titlePlackYConstraint;
@property (retain, nonatomic) ISVizTitlePlacard *titlePlack;
@property (weak, nonatomic) NSApplication *currentAppProxy;
@property (retain, nonatomic) VizPackage *currentVizPackage;
@property (weak, nonatomic) VizContent *vizContent;
@property (weak, nonatomic) CABackdropLayer *backdropLayer;
@property (retain, nonatomic) NSFont *regularLabelFont;
@property (retain, nonatomic) NSFont *boldLabelFont;
@property (nonatomic) BOOL targetingToConnect;
@property (nonatomic) BOOL clickingToConnect;

- (id)init;
- (void).cxx_destruct;
- (void)stopObserving;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)visualizeConstraints:(id)a0;
- (void)startObserving:(id)a0;
- (void)drawViewFrames:(id)a0;
- (void)updateFlashing:(id)a0;
- (id)_colorToUseForConstraint:(id)a0;
- (BOOL)_constraintIsNonRequired:(id)a0;
- (BOOL)_constraintMatchesFocusedID:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_convertObservedWindowRectToScreen:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_prepVisualization:(id)a0;
- (void)_reallyUpdateVisibility;
- (id)_windowOwnerForWindowInformation:(id)a0;
- (void)addArrowTo:(id)a0 center:(struct CGPoint { double x0; double x1; })a1 tail:(struct CGPoint { double x0; double x1; })a2 invert:(BOOL)a3 arrowSize:(double)a4;
- (void)addHorizontalAbutmentLineTo:(id)a0 center:(struct CGPoint { double x0; double x1; })a1 touching:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)addVerticalAbutmentLineTo:(id)a0 center:(struct CGPoint { double x0; double x1; })a1 touching:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)applicationTerminating:(id)a0;
- (void)calcLayoutForConstraints:(id)a0 others:(id)a1 originFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)client_activationChanged:(id)a0;
- (id)currentSecondaryObject;
- (long long)directionOfConstraint:(id)a0;
- (long long)directionOfItem:(id)a0;
- (id)drawConstraint:(id)a0 targetView:(id)a1;
- (void)drawConstraintBucket:(id)a0 labels:(id)a1 targetView:(id)a2;
- (void)drawEdge:(long long)a0 of:(id)a1;
- (void)drawFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 color:(id)a1;
- (void)drawLabel:(id)a0;
- (void)drawVisualization;
- (double)getValueForSideAttribute:(long long)a0 of:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectOfItem:(id)a0;
- (void)redrawVisualization;
- (void)setupTitlePlackForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)sortConstraint:(id)a0 withFirstAttribute:(long long)a1 andFirstRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 andSecondAttribute:(long long)a3 andSecondRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 intoOutsideLeading:(id)a5 insideLeading:(id)a6 insideTrailing:(id)a7 outsideTrailing:(id)a8 outsideTop:(id)a9 insideTop:(id)a10 outsideBottom:(id)a11 insideBottom:(id)a12;
- (void)sortConstraints:(id)a0 intoOutsideLeading:(id)a1 insideLeading:(id)a2 insideTrailing:(id)a3 outsideTrailing:(id)a4 outsideTop:(id)a5 insideTop:(id)a6 outsideBottom:(id)a7 insideBottom:(id)a8;
- (void)startFlashingTimer;
- (void)updateVisualizationFrames;
- (void)updateVizVisibility;
- (void)visualizeObject:(id)a0 options:(id)a1 appProxy:(id)a2;
- (void)visualizeSecondaryObject:(id)a0;
- (id)windowForObject:(id)a0;

@end
