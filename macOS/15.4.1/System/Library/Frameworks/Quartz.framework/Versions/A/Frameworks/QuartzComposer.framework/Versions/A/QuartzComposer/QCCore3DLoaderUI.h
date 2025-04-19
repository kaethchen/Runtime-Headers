@class QCPort, QCSCN_View, NSPathControl, NSProgressIndicator;

@interface QCCore3DLoaderUI : QCInspector {
    QCSCN_View *previewView;
    NSPathControl *pathView;
    NSProgressIndicator *progressIndicator;
    QCPort *_observedPort;
}

+ (id)viewNibName;

- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_setupPreviewForPatch:(id)a0;
- (void)resetView;
- (void)setupViewForPatch:(id)a0;

@end
