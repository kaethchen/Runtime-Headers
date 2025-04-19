@class QCInterpolationView, NSMatrix;

@interface QCInterpolationUI : QCInspector {
    NSMatrix *interpolationMatrix;
    QCInterpolationView *splineView;
}

+ (id)viewNibName;

- (void)resetView;
- (void)setupViewForPatch:(id)a0;
- (void)updateInterpolation:(id)a0;

@end
