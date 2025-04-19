@class QCProgrammablePatchView;

@interface QCExpressionUI : QCInspector {
    QCProgrammablePatchView *expressionView;
}

+ (id)viewNibName;

- (void)resetView;
- (void)setupViewForPatch:(id)a0;

@end
