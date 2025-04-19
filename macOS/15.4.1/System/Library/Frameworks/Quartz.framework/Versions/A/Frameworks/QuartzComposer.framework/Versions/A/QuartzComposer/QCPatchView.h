@class QCPatch;

@interface QCPatchView : GFGraphView {
    BOOL _hasSelectedPatches;
    struct CGPoint { double x; double y; } _triggerPatchLinkStart;
    struct CGPoint { double x; double y; } _triggerPatchLinkEnd;
    QCPatch *_triggerPatchLinkCandidate;
    double _cascadeDistance;
    void *_unused2[4];
}

- (void)dealloc;
- (void)_finishInitialization;
- (void)copy:(id)a0;
- (void)cut:(id)a0;
- (unsigned long long)draggingEntered:(id)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)paste:(id)a0;
- (BOOL)performDragOperation:(id)a0;
- (void)setGraph:(id)a0;
- (void)duplicate:(id)a0;
- (BOOL)__filterAll:(id)a0;
- (void)__removeUnusedPatchesFromGraph:(id)a0 recursively:(BOOL)a1;
- (void)_addSubgraph:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_boundsForSelection;
- (id)_colorForConnection:(id)a0;
- (id)_createSubgraphFromSelection:(id)a0;
- (void)__computeOrder:(id)a0 context:(void *)a1;
- (void)__explode:(id)a0 context:(void *)a1;
- (void)_drawConnection:(id)a0 fromPort:(id)a1 point:(struct CGPoint { double x0; double x1; })a2 toPoint:(struct CGPoint { double x0; double x1; })a3;
- (BOOL)_editNode:(id)a0;
- (void)_explodeSubgraphFromSelection:(id)a0;
- (BOOL)_hasSelectedPatches;
- (struct CGPoint { double x0; double x1; })_pastePoint;
- (BOOL)_readSelectionFromUnarchiver:(id)a0 toPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)_removeUnusedPatches:(id)a0;
- (void)_selectionUpdated:(id)a0;
- (void)_writeSelectionToArchiver:(id)a0 fromPoint:(struct CGPoint { double x0; double x1; })a1;
- (BOOL)acceptDroppedFile:(id)a0;
- (Class)classForPath:(id)a0;
- (int)connectionTypeForConnection:(id)a0;
- (void)drawTriggerPatchLink;
- (id)menuForGraph;
- (id)patch;
- (BOOL)performDroppedFile:(id)a0 atPosition:(struct CGPoint { double x0; double x1; })a1;
- (void)setNeedsDisplayForNode:(id)a0;
- (void)setPatch:(id)a0;
- (BOOL)trackTriggerPatch:(id)a0 fromNode:(id)a1;

@end
