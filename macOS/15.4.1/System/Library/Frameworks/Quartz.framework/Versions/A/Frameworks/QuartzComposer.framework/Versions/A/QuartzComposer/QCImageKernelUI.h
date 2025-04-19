@class NSButton, QCProgrammablePatchView, NSSplitView;

@interface QCImageKernelUI : QCInspector {
    QCProgrammablePatchView *sourceView;
    QCProgrammablePatchView *advancedViewMain;
    NSButton *dodButton;
    NSSplitView *splitView;
    NSButton *advancedModeButton;
}

+ (id)viewNibName;

- (BOOL)splitView:(id)a0 shouldCollapseSubview:(id)a1 forDoubleClickOnDividerAtIndex:(long long)a2;
- (BOOL)splitView:(id)a0 canCollapseSubview:(id)a1;
- (double)splitView:(id)a0 constrainMaxCoordinate:(double)a1 ofSubviewAt:(long long)a2;
- (double)splitView:(id)a0 constrainMinCoordinate:(double)a1 ofSubviewAt:(long long)a2;
- (double)splitView:(id)a0 constrainSplitPosition:(double)a1 ofSubviewAt:(long long)a2;
- (void)changeMode:(id)a0;
- (void)resetView;
- (void)setupViewForPatch:(id)a0;

@end
