@interface QCPatchEditorView : GFGraphEditorView {
    BOOL _visualDebugging;
    void *_unused2[4];
}

+ (void)initialize;
+ (id)drawingCache;

- (void)dealloc;
- (Class)valueClassForBinding:(id)a0;
- (void)showInspector:(id)a0;
- (void)__patchStarted:(id)a0;
- (void)__redrawBounds:(id)a0;
- (void)__patchActivated:(id)a0;
- (void)__patchExecuted:(id)a0;
- (id)patch;
- (id)patchManager;
- (void)setPatch:(id)a0;
- (void)setPatchManager:(id)a0;
- (void)setVisualizePatchExecution:(BOOL)a0;
- (BOOL)visualizePatchExecution;

@end
