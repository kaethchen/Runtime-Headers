@class NSTextField, NSView, GFNode, GFList, NSPopUpButton, GFInspectorWindow, GFGraphEditorView, GFGraphView;

@interface GFGraphEditorInspector : NSObject {
    GFInspectorWindow *_window;
    NSPopUpButton *_menu;
    NSTextField *_text;
    GFList *_views;
    GFList *_viewSizes;
    NSView *_currentView;
    GFGraphEditorView *_graphEditor;
    GFNode *_targetNode;
    GFGraphView *_targetGraphView;
    struct __CFDictionary { } *_savedDimensions;
    void *_unused[2];
}

+ (id)sharedInspector;

- (void)dealloc;
- (id)init;
- (id)_window;
- (void)cancelOperation:(id)a0;
- (void)hide;
- (BOOL)isVisible;
- (void)show;
- (void)windowWillClose:(id)a0;
- (void)_previousPanel:(id)a0;
- (void)setGraphEditor:(id)a0;
- (void)__invalidateInspector:(id)a0;
- (void)_loadViews:(id)a0 clearUndoManager:(BOOL)a1;
- (void)_menuSelect:(id)a0;
- (void)_nextPanel:(id)a0;
- (void)_reloadInspector;
- (id)graphEditor;

@end
