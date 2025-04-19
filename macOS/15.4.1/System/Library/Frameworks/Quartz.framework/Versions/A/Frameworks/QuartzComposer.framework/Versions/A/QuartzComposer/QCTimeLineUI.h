@class QCTimeLineEditorView;

@interface QCTimeLineUI : QCInspector {
    QCTimeLineEditorView *editorView;
}

+ (id)viewNibName;

- (void)setupViewForPatch:(id)a0;

@end
