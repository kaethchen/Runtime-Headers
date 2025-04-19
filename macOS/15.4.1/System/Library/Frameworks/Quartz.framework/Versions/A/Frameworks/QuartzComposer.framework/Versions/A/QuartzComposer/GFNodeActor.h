@class GFPort;

@interface GFNodeActor : NSObject {
    GFPort *_tooltipPort;
    void *_unused[4];
}

+ (id)sharedActor;

- (struct CGSize { double x0; double x1; })sizeForNode:(id)a0;
- (void)__setNodeSelection:(BOOL)a0 adjacentToNode:(id)a1 inputNodes:(BOOL)a2 selectedList:(id)a3;
- (BOOL)nodeBecomesFirstResponder:(id)a0 view:(id)a1;
- (BOOL)nodeResignsFirstResponder:(id)a0 view:(id)a1;
- (void)_deselectDownstream:(id)a0;
- (BOOL)nodeAcceptsFirstResponder:(id)a0 view:(id)a1;
- (id)_colorForNode:(id)a0;
- (void)_deselectUpstream:(id)a0;
- (void)_editSubgraph:(id)a0;
- (void)_makeCGPathForNode:(id)a0 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inContext:(struct CGContext { } *)a2;
- (struct CGColor { } *)_overlayColorForNode:(id)a0 view:(id)a1;
- (id)_portForPoint:(struct CGPoint { double x0; double x1; })a0 inNode:(id)a1 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 outBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a3;
- (id)_portIsConnected:(id)a0 view:(id)a1;
- (id)_portTextAttributesForNode:(id)a0;
- (void)_publish:(id)a0;
- (void)_selectDownstream:(id)a0;
- (void)_selectUpstream:(id)a0;
- (id)_titleTextAttributesForNode:(id)a0;
- (void)drawNode:(id)a0 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 view:(id)a2;
- (void)drawSelectionRingWithColor:(id)a0 width:(double)a1 forNode:(id)a2 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 view:(id)a4;
- (BOOL)handleKeyDown:(id)a0 inNode:(id)a1 view:(id)a2;
- (BOOL)handleKeyUp:(id)a0 inNode:(id)a1 view:(id)a2;
- (id)menuForNode:(id)a0 view:(id)a1;
- (struct CGPoint { double x0; double x1; })pointForPort:(id)a0 inNode:(id)a1 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (id)portForPoint:(struct CGPoint { double x0; double x1; })a0 inNode:(id)a1 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)resetInspectorViews;
- (void)resetTooltipView;
- (id)setupInspectorViewsForNode:(id)a0;
- (id)setupTooltipViewForPoint:(struct CGPoint { double x0; double x1; })a0 inNode:(id)a1 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 tooltipBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a3;
- (id)tooltipStringForPoint:(struct CGPoint { double x0; double x1; })a0 inNode:(id)a1 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 tooltipBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a3;
- (BOOL)trackMouse:(id)a0 inNode:(id)a1 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 view:(id)a3;

@end
