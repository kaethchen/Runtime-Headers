@class NSTextField, NSPanel, NSArray, KHSelectionManager, NSString, KHFrame, KHSelection, NSButton, NSSegmentedControl;
@protocol KHInspectorPanelProtocol;

@interface KHInspectorPanelController : NSObject <KHSelectionObserver, NSWindowDelegate>

@property (retain, nonatomic) id<KHInspectorPanelProtocol> inspector;
@property (retain, nonatomic) NSSegmentedControl *contentTypeFilter;
@property (retain, nonatomic) NSButton *badgeButton;
@property (retain, nonatomic) KHFrame *observedFrame;
@property (weak) KHSelection *selection;
@property (retain) NSArray *hContentConstraints;
@property (retain) NSArray *vContentConstraints;
@property BOOL temporarilyHidden;
@property BOOL ignoreSelection;
@property (retain, nonatomic) NSPanel *panel;
@property (retain) NSTextField *placeholderField;
@property (weak, nonatomic) KHSelectionManager *selectionManager;
@property (copy, nonatomic) NSString *placeholderText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPanelController;

- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)windowWillClose:(id)a0;
- (id)_inspectorForSelectedFrames:(id)a0;
- (id)_inspectorForSelectedLayouts:(id)a0;
- (void)contentFilterChanged:(id)a0;
- (void)hideInspector;
- (void)selectionManager:(id)a0 didAddSelections:(id)a1;
- (void)selectionManager:(id)a0 didRemoveSelections:(id)a1;
- (void)selectionManager:(id)a0 willAddSelections:(id)a1;
- (void)showInspectorForSelection:(id)a0;

@end
