@class QCPatchEditorView, NSWindow, QCPatchManagerView;

@interface QCCompositionEditor : NSObject {
    NSWindow *window;
    QCPatchEditorView *editorView;
    QCPatchManagerView *managerView;
}

+ (long long)numberOfRowsInTableView:(id)a0;
+ (id)tableView:(id)a0 objectValueForTableColumn:(id)a1 row:(long long)a2;
+ (void)setup;
+ (void)doubleClick:(id)a0;
+ (void)addPatch:(id)a0;
+ (void)didUpdatePatchRendering:(id)a0;
+ (void)removePatch:(id)a0;

- (void)windowWillClose:(id)a0;
- (id)initWithPatch:(id)a0;

@end
