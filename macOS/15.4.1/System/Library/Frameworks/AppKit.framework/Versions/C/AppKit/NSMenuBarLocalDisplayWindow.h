@class NSArray, NSMutableArray, NSMenuBarRepresentation;

@interface NSMenuBarLocalDisplayWindow : NSMenuBarDisplayWindow {
    NSMenuBarRepresentation *_associatedRepresentation;
    NSMutableArray *_replicantWindows;
    NSMutableArray *_replicantWindowReuseStack;
}

@property (readonly) NSArray *replicantWindows;
@property (readonly, weak) NSMenuBarRepresentation *associatedRepresentation;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_applyBackingScaleFactorIfNeeded;
- (void)_applyFrameToReplicants;
- (void)_ensureReplicantWindows;
- (void)_orderWindowFrontInAppKitOnly:(id)a0;
- (void)_reconfigDisplay;
- (void)_removeAllReplicants;
- (void)endUpdates;
- (void)forEachHostedWindowDo:(id /* block */)a0;
- (id)initWithImpl:(id)a0 display:(unsigned int)a1 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 aperture:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (id)menuBarImpl;
- (id)presentationSettings;
- (void)setApertureFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setBackingScaleFactor:(double)a0;
- (void)setDisplayID:(unsigned int)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setImpl:(id)a0;
- (void)setVisible:(BOOL)a0;

@end
