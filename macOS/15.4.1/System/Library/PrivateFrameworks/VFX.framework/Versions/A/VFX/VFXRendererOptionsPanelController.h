@class NSTextField, NSOutlineView, NSView, VFXUIDynamicInspector, NSComboBox, VFXView, NSPopUpButton, NSSlider, VFXRendererOptionsPanel, NSButton, NSStepper;

@interface VFXRendererOptionsPanelController : NSObjectController {
    VFXView *_3dView;
    VFXRendererOptionsPanel *_panel;
    NSPopUpButton *antialiasingLevels;
    NSPopUpButton *displayOptions;
    NSPopUpButton *renderDebugOptions;
    NSTextField *benchResult;
    NSSlider *seekSlider;
    NSStepper *seekStepper;
    NSButton *isolate;
    NSButton *freezeButton;
    NSOutlineView *_worldGraph;
    NSView *renderGraphUtils;
    VFXUIDynamicInspector *_inspector;
    NSComboBox *pointOfViewComboBox;
    NSComboBox *pointOfCullingComboBox;
    NSButton *skipExecute;
    NSButton *recordGraph;
    BOOL _viewLocked;
    BOOL _pointOfViewIsSelected;
    unsigned int _currentSeekStep;
}

@property (retain, nonatomic) VFXView *view;

- (id)init;
- (struct __CFXEngineContext { } *)context;
- (void).cxx_destruct;
- (void)close:(id)a0;
- (id)comboBox:(id)a0 objectValueForItemAtIndex:(long long)a1;
- (long long)numberOfItemsInComboBox:(id)a0;
- (id)outlineView:(id)a0 child:(long long)a1 ofItem:(id)a2;
- (BOOL)outlineView:(id)a0 isItemExpandable:(id)a1;
- (long long)outlineView:(id)a0 numberOfChildrenOfItem:(id)a1;
- (id)outlineView:(id)a0 objectValueForTableColumn:(id)a1 byItem:(id)a2;
- (void)outlineView:(id)a0 setObjectValue:(id)a1 forTableColumn:(id)a2 byItem:(id)a3;
- (BOOL)outlineView:(id)a0 shouldSelectItem:(id)a1;
- (id)panel;
- (id)selection;
- (void)selectionDidChange:(id)a0;
- (void)selectionWillChange;
- (void)recompilePasses;
- (void)_expandItem:(id)a0;
- (void)archiveToDesktop:(id)a0;
- (void)capture:(id)a0;
- (void)enableVBL:(id)a0;
- (void)exportAs:(id)a0;
- (void)inspectCamera:(id)a0;
- (void)isolate:(id)a0;
- (void)recordGraph:(id)a0;
- (void)runBench:(id)a0;
- (unsigned long long)seekStep;
- (void)selectAuthoringDisplayMask:(id)a0;
- (void)selectCamera:(id)a0;
- (void)selectPointOfCulling:(id)a0;
- (void)selectRenderingDebugOptions:(id)a0;
- (id)selectedNode;
- (void)setAntialiasingLevel:(id)a0;
- (void)setSeekStep:(unsigned long long)a0;
- (void)setSuperSampling:(id)a0;
- (BOOL)showManipulators;
- (void)toggleRetina:(id)a0;
- (void)updateSeek;
- (void)worldDidChange;

@end
