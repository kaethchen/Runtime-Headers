@class QCProgrammablePatchView;

@interface QCGLSLShaderUI : QCInspector {
    QCProgrammablePatchView *vertexView;
    QCProgrammablePatchView *fragmentView;
}

+ (id)viewNibName;

- (void)resetView;
- (void)setupViewForPatch:(id)a0;

@end
