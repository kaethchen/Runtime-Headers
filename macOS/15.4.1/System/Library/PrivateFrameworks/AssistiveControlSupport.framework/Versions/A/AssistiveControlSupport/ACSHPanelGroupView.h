@class ACSHPanelGroupOutlineView;

@interface ACSHPanelGroupView : ACSHPanelElementView {
    ACSHPanelGroupOutlineView *_outlineView;
    ACSHPanelGroupOutlineView *_previewView;
}

@property (nonatomic) BOOL showGroupingPreview;

- (void)dealloc;
- (void).cxx_destruct;
- (unsigned long long)depth;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (BOOL)accessibilityIsAttributeSettable:(id)a0;
- (BOOL)accessibilityIsIgnored;
- (void)accessibilitySetValue:(id)a0 forAttribute:(id)a1;
- (void)addSubview:(id)a0;
- (void)setSelected:(BOOL)a0;
- (id)_colorForDepth:(unsigned long long)a0;
- (void)_setShowOutlineView:(BOOL)a0;
- (void)_updateOutlineColor;
- (void)_updateOutlineViewVisibility;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 allowingGroupViews:(BOOL)a1;
- (void)initView;
- (void)setEditorFocused:(BOOL)a0;
- (BOOL)supportsResizeHandleDrawing;
- (void)updateDepthBasedInformation;

@end
